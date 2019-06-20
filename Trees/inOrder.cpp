#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node *left,*right;
};
void printInorder(Node* root){
	if(root==NULL){
		return ;
	}
	printInorder(root->left);
	cout<<root->data<<endl;
	printInorder(root->right);
}
void printPreorder(Node* root){
	if(root==NULL){
		return ;
	}
	cout<<root->data<<endl;
	printPreorder(root->left);
	printPreorder(root->right);
}
void printPostorder(Node* root){
	if(root==NULL){
		return ;
	}
	printPostorder(root->left);
	printPostorder(root->right);
	cout<<root->data<<endl;
}
int main(){
	/*
			4
		  /    \
		 10   12
		      /   \
		     15  9
	*/
	Node* root=NULL;
	root = new Node();
	root->data = 4;
	
	Node *temp=NULL;
	temp = new Node();
	temp->data = 10;
	root->left = temp;
	
	temp=NULL;
	temp = new Node();
	temp->data = 12;
	root->right = temp;
	
	temp=NULL;
	temp = new Node();
	temp->data = 15;
	root->right->left=temp;
	
	temp=NULL;
	temp = new Node();
	temp->data = 9;
	root->right->right=temp;
	
	cout<<"Inorder:\n";
	printInorder(root);
	cout<<endl;
	
	cout<<"Preorder:\n";
	printPreorder(root);
	cout<<endl;
	
	cout<<"Postorder:\n";
	printPostorder(root);
	cout<<endl;
	return 0;
}
