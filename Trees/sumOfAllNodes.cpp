#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node *left,*right;
};
void printTree(Node* root){
	if(root==NULL){
		return ;
	}
	cout<<root->data<<endl;
	printTree(root->left);
	printTree(root->right);
}
int sumData(Node* root){
	if(root==NULL){
		return 0;
	}
	return root->data + sumData(root->left) + sumData(root->right);
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
	
	cout<<"Tree:";
	printTree(root);
	cout<<sumData(root);
}
