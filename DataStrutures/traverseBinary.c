#include<stdio.h>
#include<stdlib.h>

struct node{
	int num;
	struct node *left;
	struct node *right;
};

typedef struct node node;
node *root = NULL;
node *insert(node *tree, long num);
void preorder(node *tree);
void inorder(node *tree);
void postorder(node *tree);
int choose();
int count = 1;

int main(){
	int choice;
	long digit;
	do{
		choice = choose();
		switch(choice){
			case 1 : puts("Enter integer : To quit enter 0");
					 scanf("%ld", &digit);
					 while(digit != 0){
						root = insert(root, digit);
						scanf("%ld", &digit);
					 }
					
			case 2 : puts("Preorder traversing TREE");
					 preorder(root);
					 continue;
					 
			case 3 : puts("Inorder traversing TREE");
					 inorder(root);
					 continue;
					 
			case 4 : puts("Postorder traversing TREE");
					 postorder(root);
					 continue;
					 
			case 5 : puts("End");
					 exit(0);
		}
	}while(choice != 5);
}

int choose(){
	int selection;
	
	do{
		puts("Enter 1 : Insert a node in the Binary Tree");
		puts("Enter 2 : Display (preorder) the Binary Tree");
		puts("Enter 3 : Display (inorder) the Binary Tree");
		puts("Enter 4 : Display (postorder) the Binary Tree");
		puts("Enter 5 : End");
		puts("Enter your choice: ");
		scanf("%d", &selection);
		
		if((selection < 1) || (selection > 5)){
			puts("Wrong choice : Try again");
		}
	}while((selection < 1) || (selection > 5));
	return selection;
}

node *insert(node *P, long digit){
	if(P == NULL){
		P = (node *) malloc (sizeof (node));
		P -> left = P -> right = NULL;
		P -> num = digit;
		count++;
	}else{
		if(count % 2 == 0){
			P -> left = insert(P -> left, digit);
		}else{
			P -> right = insert(P -> right, digit);
		}
	}
	return P;
}


void preorder(node *P){
	if(P != NULL){
		printf("%d\n", P -> num);
		preorder(P -> left);
		preorder(P -> right);
	}
}


void inorder(node *P){
	if(P != NULL){
		inorder(P -> left);
		printf("%d\n", P -> num);
		inorder(P -> right);
	}
}

void postorder(node *P){
	if(P != NULL){
		postorder(P -> left);
		postorder(P -> right);
		printf("%d\n", P -> num);
	}
}










