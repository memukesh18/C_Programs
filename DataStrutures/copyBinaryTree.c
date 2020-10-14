//Write a program to copy one binary tree to another binary tree
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int num;
    struct Node *left;
    struct Node *right;
};

struct Node *tree, *second, *head;
struct Node *insert(struct Node *tree, int digit);
struct Node *copy(struct Node *tree);
void inorder(struct Node *tree);
int selection();

void main(){
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
                copy(tree);
                continue;
            case 3 :
                puts("Inorder traversing tree");
                inorder(head);
                continue;
            case 4 :
                exit(0);
        }
    } while(choice != 4);
}


int selection(){
    int selection;
    do {
        puts("1 : Insert a node in the BST");
        puts("2 : Copy a tree to another BST");
        puts("3 : Display (inorder) the BST");
        puts("4 : End");
        puts("Enter your choice: ");
        scanf("%d", &selection);
        if ((selection < 1) || (selection > 4)) {
            puts("Wrong choice : Try again");
            getchar();
        }
    } while((selection < 1) || (selection > 3));
    
    return selection;
}


struct Node *insert(struct Node *tree, int digit){
    if(tree == NULL){
        tree = (struct Node *) malloc(sizeof (struct Node));
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


struct Node *copy(struct Node *tree){
    second = (struct Node *) malloc(sizeof (struct Node));
    head = second;

    if(tree != NULL){
        second -> num = tree -> num;
        if(tree -> left != NULL){
            second -> left -> num = tree -> left -> num;
            copy(tree -> right);
        }
        if(tree -> right != NULL){
            second -> right -> num = tree -> right -> num;
            copy(tree -> left);
        }
    }
    
    return (head);
}


void inorder(struct Node *tree){
    if(tree != NULL){
		inorder(tree -> left);
        printf("%d ", tree-> num);
        inorder(tree -> right);
    }
    printf("\n");
}


