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
void countNode(struct Node *tree);
void countLeave(struct Node *tree);
struct Node *temp;
int selection();
int node = 1, total;

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
            	countNode(tree);
            	printf("Number of nodes = %d\n", node);
                node = 1;
                continue;
            case 3 :
            	countLeave(tree);
            	printf("Number of leaves = %d\n", total);
                node = 1;
                continue;
            case 4 :
                exit(0);
        }
    } while(choice != 4);
}


int selection(){
    int selection;
    do {
        puts("1 : Insert a node");
        puts("2 : Display number of nodes");
        puts("3 : Display number of leaves");
        puts("4 : End");
        puts("Enter your choice: ");
        scanf("%d", &selection);
        if ((selection < 1) || (selection > 4)) {
            puts("Wrong choice : Try again");
            getchar();
        }
    } while((selection < 1) || (selection > 4));
    
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


void countNode(struct Node *tree){
    if(tree != NULL){
    	if(tree -> left != NULL){
    		node++;
    		countNode(tree -> left);
    	}
    	if(tree -> right != NULL){
    		node++;
    		countNode(tree -> right);
    	}    	
    }
}


void countLeave(struct Node *tree){
    if(tree != NULL){
    	if((tree -> left == NULL) && (tree -> right == NULL)){
			total++;
    	}else{
    		countLeave(tree -> left);
    		countLeave(tree -> right);
    	}
    }
}


