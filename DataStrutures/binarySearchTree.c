/* Program to implement Binary Search Tree */

#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

typedef struct node node;

node* P = NULL;
node* insert(node *P, int num);
node* find_min(node *root);
node* deleteNode(int num, node *P);
int choose();
void search(node *P, int num);
void inorder(node *P);
void preorder(node *P);
void postorder(node *P);

int main(){
	int choice, num;
	
	do{
		choice = choose();	
		switch(choice){
			case 1 :
				puts("Enter integer: to quit enter 0");
				scanf("%d", &num);
				while(num != 0){
					P = insert(P, num);
					scanf("%d", &num);
				}continue;
			case 2 : 
				puts("Enter the number to searched");
				scanf("%d", &num);
				search(P, num);
				continue;
			case 3 :
				puts("Preorder Traversing Tree\n");
				preorder(P);
				printf("\n\n");
				continue;
			case 4 :
				puts("Inorder Traversing Tree\n");
				inorder(P);
				printf("\n\n");
				continue;
			case 5 :
				puts("Postorder Traversing Tree\n");
				postorder(P);
				printf("\n\n");
				continue;
			case 6 :
				puts("Enter the element which do you want to delete from the BST\n");
				scanf("%d", &num);
				deleteNode(num, P);
				continue;
			case 7 :
				puts("END");
				exit(0);
		}
	}while(choice != 7);
}

int choose(){
	int selection;
	do{
		puts("Enter 1 : Insert a node in the BST");
		puts("Enter 2 : Search a node in BST");
		puts("Enter 3 : Display (preorder) the BST");
		puts("Enter 4 : Display (inorder) the BST");
		puts("Enter 5 : Display (postorder) the BST");
		puts("Enter 6 : Delete");
		puts("Enter 7 : END");
		puts("Enter your choice :");
		scanf("%d", &selection);
		if((selection < 1)  || (selection > 7)){
			puts("wrong choice : Try again");
		}
	}while((selection < 1) || (selection > 7));
	return selection;
}


node* insert(node *P, int num){
	if(P == NULL){
		P = (node *) malloc(sizeof (struct node));
		P -> left = NULL;
		P -> data = num;
		P -> right = NULL;
	}else if(num < P -> data) {	
		P -> left = insert(P->left, num);
	}else if(num > P -> data){
		P -> right = insert(P->right, num);
	}else if(num == P -> data){
		puts("Duplicate node: program exited");
		exit(0);
	}
	return P;
}

//function to find the minimum value in a node
node* find_min(node *root){
    if(root == NULL)
        return NULL;
    else if(root->left != NULL) 	// node with minimum value will have no left child
        return find_min(root->left); // left most element will be minimum
    return root;
}

node* deleteNode(int num, node *P){
    //searching for the item to be deleted
    if(P == NULL){
		puts("P is empty.");
		exit(0);
	}
	if(num < P->data)
        P->left = deleteNode(num, P->left);
    else if(num > P->data)
        P->right = deleteNode(num, P->right);
    else{
        //No Children
        if((P->left == NULL) && (P->right == NULL)){
            free(P);
            return NULL;
        }

        //One Child
        else if((P->left == NULL) || (P->right == NULL)){
            node *temp;
            if(P->left == NULL)
                temp = P->right;
            else
                temp = P->left;
            free(P);
            return temp;
        }
        //Two Children
        else{
            node *temp = find_min(P->right);
            P->data = temp->data;
            P->right = deleteNode(temp->data, P->right );
        }
    }
    return P;
}


void search(node *P, int num){
	if(P == NULL)
		puts("The number does not exist\n");
	else if(num == P->data)
		printf("Number found = %d", num);
	else if(num < P->data)
		search(P->left, num);
	else
		search(P->right, num);
}


void inorder(node *P){
	if(P != NULL){
		inorder(P -> left);
		printf("%d\t", P-> data);
		inorder(P -> right);
	}
}

void preorder(node *P){
	if(P != NULL){
		printf("%d\t", P -> data);
		preorder(P -> left);
		preorder(P -> right);
	}
}

void postorder(node *P){
	if(P != NULL){
		postorder(P -> left);
		postorder(P -> right);
		printf("%d\t", P -> data);
	}
}


