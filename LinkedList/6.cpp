#include "linkedlistfunctions.h"
void inToCircular(Node *head){
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;
}
int main(){
    Node* head=NULL;
    int a;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        insertAtBack(&head,a);
    }
    inToCircular(head);
    //printList(head);
    return 0;
}