#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void insertIntoList(Node **head,int val){
    Node *newNode = new Node();
    if(newNode==NULL){
        cout<<"No memory available";
    }
    else{
        newNode->data=val;
        if(*head==NULL){
            *head=newNode;
            newNode->next=*head;
        }
        else{
            newNode->next=*head;
            Node *temp=*head;
            while(temp->next!=(*head)){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
}
void reverseList(Node **head){
    Node *back = *head,*current = (*head)->next,*ahead=(*head)->next->next;
    while(current!=(*head)){
        ahead=current->next;
        current->next=back;
        back=current;
        current=ahead;
    }
    *head=back;
}
void printCircular(Node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}
int main(){
    Node *head=NULL;
    int a;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        insertIntoList(&head,a);
    }   
    cout<<head->data;
    reverseList(&head);
    cout<<head->data;
   return 0;
}