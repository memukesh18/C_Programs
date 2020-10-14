//Write a program to copy one binary tree to another binary tree
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int num;
    struct Node *left;
    struct Node *right;
};

struct Node *tree = NULL;
struct Node *insert(struct Node *tree, int digit);
void *exchange(struct Node *tree);
struct Node *temp;
int selection();

void main(){
	struct Node *tree = NULL;
    int choice;
    int digit;

    do {
        choice = selection();
        switch (choice) {
            case 1 :
                puts("Enter integer : To quit enter 0");
                scanf("%d", &digit);
                while (digit != 0) {
                    tree = insert(tree, digit);
                    scanf("%d", &digit);
                }
                continue;
            case 2 :
            	printf("%d\n", tree->num);
                exchange(tree);
                continue;
            case 3 :
                exit(0);
        }
    } while(choice != 3);
}


int selection(){
    int selection;
    do {
        puts("1 : Insert a node");
        puts("2 : Exchange subtrees");
        puts("3 : End");
        puts("Enter your choice: ");
        scanf("%d", &selection);
        if ((selection < 1) || (selection > 3)) {
            puts("Wrong choice : Try again");
            getchar();
        }
    } while((selection < 1) || (selection > 3));
    
    return selection;
}


struct Node *insert(struct Node *tree, int digit){
    if(tree == NULL){
        tree = (struct Node *) malloc(sizeof (struct Node));
        tree -> left = tree -> right = NULL;
        tree -> num = digit;
    }else if(digit < tree -> num){
        tree -> left = insert(tree -> left, digit);
    }else if(digit > tree -> num){
        tree -> right = insert(tree -> right, digit);
    }else if(digit == tree -> num){
        puts("Duplicates nodes : program exited");
        exit(0);
    }

    return tree;
}


void *exchange(struct Node *tree){
    if((tree -> left -> num != 0) && (tree -> right -> num != 0)){
    	temp = tree -> left;
    	tree -> left = tree -> right;
    	tree -> right = temp;
    	printf("%d\n", tree -> left -> num);
    	printf("%d\n", tree -> right -> num);
    	exchange(tree -> left);
    	exchange(tree -> right);
    }
}



