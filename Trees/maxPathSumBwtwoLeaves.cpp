#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node *left,*right;
};
int height(Node* root){
	if(root==NULL){
		return 0;
	}
	return max(height(root->left), height(root->right))+1;
}
void print(stack<int> paths){
  while(!paths.empty()){
    cout<<" "<<paths.top();
    paths.pop();
  }
  cout<<endl;
}
void printAllPaths(Node* root, stack<int> &paths, int start,int end){
	if(root==NULL){
		return;
	}
	if(root->left==NULL && root->right==NULL){
    cout<<"Path:"<<endl;
    paths.push(root->data);
    print(paths);
    paths.pop();
		cout<<endl;
		return;
	}
	paths.push(root->data);
	printAllPaths(root->left,paths,start+1,end);
	printAllPaths(root->right,paths,start+1,end);
  paths.pop();
}
int main(){
	/*
			              10
                  /   \
                4       6
              /  \    /  \
            -9   -6  3    9
          /   \            \
         3    5             0
                          /   \
                         5    -1
                              /
                            12
                            /
                          29
	*/
	Node* root=NULL;
	root = new Node();
	root->data = 10;

	Node *temp=NULL;
	temp = new Node();
	temp->data = 4;
	root->left = temp;

	temp=NULL;
	temp = new Node();
	temp->data = 6;
	root->right = temp;

	temp=NULL;
	temp = new Node();
	temp->data = 3;
	root->right->left=temp;

  temp=NULL;
	temp = new Node();
	temp->data = -9;
	root->left->left=temp;

  temp=NULL;
	temp = new Node();
	temp->data = -6;
	root->left->right=temp;

  temp=NULL;
	temp = new Node();
	temp->data = 3;
	root->left->left->left=temp;

  temp=NULL;
	temp = new Node();
	temp->data = 5;
	root->left->left->right=temp;

	temp=NULL;
	temp = new Node();
	temp->data = 9;
	root->right->right=temp;

  temp=NULL;
	temp = new Node();
	temp->data = 0;
	root->right->right->right=temp;

  temp=NULL;
	temp = new Node();
	temp->data = 5;
	root->right->right->right->left=temp;

  temp=NULL;
	temp = new Node();
	temp->data = -1;
	root->right->right->right->right=temp;

  temp=NULL;
	temp = new Node();
	temp->data = 12;
	root->right->right->right->right->left=temp;

  temp=NULL;
	temp = new Node();
	temp->data = 29;
	root->right->right->right->right->left->left=temp;

  stack<int> paths;
	cout<<"Inorder:\n";
	printAllPaths(root,paths,0,height(root));
	cout<<endl;

	return 0;
}
