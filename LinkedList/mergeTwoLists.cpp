#include "linkedlistfunctions.h"
Node* mergeThem(Node *first, Node* second){
    Node *head;
    head=first;
    while(first->next!=NULL){
        first=first->next;
    }
    first->next=second;
    return head;
}
int main(){
    Node *head1=NULL,*head2=NULL,*result=NULL;
    int a;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        insertAtBack(&head1,a);
    }
    printList(head1);
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        insertAtBack(&head2,a);
    }
    printList(head2);
    result = mergeThem(head1,head2);
    printList(result);
    return 0;
}