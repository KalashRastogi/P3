/*InComplete */
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void insert(Node** hd, int val){
    Node *newNode=new Node();
    newNode->data=val;
    if(*hd==NULL){
        newNode->next=0;
    }
    else{
        Node* temp=*hd;
        while(temp->next!=NULL){
            temp=temp->next;
        }
//        temp->next=(temp->next)^(newNode);
    }
}
int main(){
    Node* head;
    int a;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        insert(&head,a);
    }
    return 0;
}