/*a height balanced tree is abinary tree in which the absolute difference between height of left sub tree and right subtree is not more than one.*/
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
		return -1;
	}
	return max(height(root->left), height(root->right))+1;
}
bool isBalanced(Node* root){
	if(root==NULL){
		return true;
	}
	int lefth=height(root->left);
	int righth=height(root->right);
	if(abs(lefth-righth)<=1 && isBalanced(root->left) && isBalanced(root->right)){
		return true;
	}
	return false;
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
	if(isBalanced(root)){
		cout<<"Yes!";
	}
	else{
		cout<<"No";
	}
	return 0;
}
