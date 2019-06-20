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
bool identical(Node* root1, Node* root2){
	if(root1==NULL && root2==NULL){
		return true;
	}
	if(root1==NULL || root2==NULL){
	return false; 
	}
	if(root1->data == root2->data){
		return identical(root1->left,root2->left) && identical(root1->right,root2->right); 
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
	Node* root1=NULL;
	root1 = new Node();
	root1->data = 4;
	
	Node* temp=NULL;
	temp = new Node();
	temp->data = 10;
	root1->left = temp;
	
	temp=NULL;
	temp = new Node();
	temp->data = 12;
	root1->right = temp;
	
	temp=NULL;
	temp = new Node();
	temp->data = 15;
	root1->right->left=temp;
	
	temp=NULL;
	temp = new Node();
	temp->data = 9;
	root1->right->right=temp;
	
	printTree(root1);
	
	/*
			4
		  /    \
		 10   12
		      /   \
		     15  9
	*/
	
	Node* root2=NULL;
	root2 = new Node();
	root2->data = 4;
	
	temp=NULL;
	temp = new Node();
	temp->data = 10;
	root2->left = temp;
	
	temp=NULL;
	temp = new Node();
	temp->data = 12;
	root2->right = temp;
	
	temp=NULL;
	temp = new Node();
	temp->data = 15;
	root2->right->left=temp;
	
	/*temp=NULL;
	temp = new Node();
	temp->data = 9;
	root2->right->right=temp;
	*/
	printTree(root2);
	if(identical(root1, root2)){
		cout<<"same";
	}
	else{
	cout<<"Not same";
	}
}
