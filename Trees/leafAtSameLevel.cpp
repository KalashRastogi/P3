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
bool checkLeaves(Node* root,int count){
	static int i=0;
	if(root==NULL){
		return true;
	}
	if(root->left==NULL && root->right==NULL){
		if(i==0){
			i=count;
			return true;
		}
		else{
			if(i==count){
				return true;
			}
		}
		return false;
	}
	return checkLeaves(root->left,count+1) && checkLeaves(root->right,count+1);
}
int main(){
	/*
			4
		  /    \
		 10   12
		 \   /   \
		  3  15  9
	*/
	/*Node* root=NULL;
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
	*/
	
	Node* root=NULL;
	root = new Node();
	root->data = 4;
	
	Node *temp=NULL;
	temp = new Node();
	temp->data = 10;
	root->left = temp;
	
	temp->right=new Node();
	temp->right->data=3;
	
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
	if(checkLeaves(root,0)){
		cout<<"Yes";
	}
	else{
	cout<<"No";
	}
	return 0;
}
