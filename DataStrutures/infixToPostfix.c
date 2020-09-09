#include <stdio.h>
#include <ctype.h>
#define SIZE 50

char s[SIZE];
int top=-1;
  
int push(char elem){                       
    s[++top]=elem;
    return 0;
}

char pop(){                      
    return(s[top--]);
}

int priority(char elem){                 
    switch(elem){
        case '#': return 0;
        case '(': return 1;
        case '+':
        case '-': return 2;
        case '*':
        case '/': return 3;
    }
    return 0;
}

void main(){                        
    char infix[50], postfix[50], ch, elem;
    int i=0, k=0;
    printf("Enter Infix Expression: ");
    scanf("%s",infix);
    push('#');
    while( (ch=infix[i++]) != '\0'){
        if( ch == '(') push(ch);
        else
            if(isalnum(ch)) postfix[k++]=ch;
            else
                if( ch == ')'){
                    while( s[top] != '(')
                        postfix[k++]=pop();
                    elem=pop();
                }
                else{       
                    while( priority(s[top]) >= priority(ch) )
                        postfix[k++]=pop();
                    push(ch);
                }
    }
    while( s[top] != '#')
    postfix[k++]=pop();
    postfix[k]='\0';          
    printf("\nGiven Infix Expression: %s  \nPostfix Expresssion: %s\n",infix,postfix);    
}



