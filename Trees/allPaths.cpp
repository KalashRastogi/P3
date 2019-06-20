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
void printAllPaths(Node* root, int paths[], int start,int end){
	if(root==NULL){
		return;
	}
	if(root->left==NULL && root->right==NULL){
		cout<<"Path:"<<endl;
		for(int i=0;i<start;i++){
			cout<<paths[i]<<" ";
		}
		cout<<root->data<<" ";
		cout<<endl;
		return;
	}
	paths[start]=root->data;
	printAllPaths(root->left,paths,start+1,end);
	printAllPaths(root->right,paths,start+1,end);
}
int main(){
	/*
			 4
		   /    \
		  10    12
		   \   /  \
		   3  15   9
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
	
	int h=height(root);
	int paths[h];
	
	printTree(root);
	printAllPaths(root,paths,0,h);
}
