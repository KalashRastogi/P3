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
int height(Node* root){
	if(root==NULL){
		return 0;
	}
	return max(height(root->left), height(root->right))+1;
}
void printLevel(Node* root, int level){
	if(root==NULL){
		return;
	}
	if(level==1){
		cout<<root->data<<" ";
		return;
	}
	printLevel(root->left,level-1);
	printLevel(root->right,level-1);
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
	
	printTree(root);
	
	int h;
	h = height(root);
	
	for(int i=1;i<=h;i++){
		cout<<i<<" Level: ";
		printLevel(root,i);
		cout<<endl;
	}
	return 0;
}
