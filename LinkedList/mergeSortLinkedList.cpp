#include "linkedlistfunctions.h"
using namespace std;
Node* mergeLists(Node *first, Node* second){
    Node *head=NULL;
    while(first!=NULL && second!=NULL){
        if((first->data)<(second->data)){
            insertAtBack(&head,first->data);
            first=first->next;
        }
        else if((first->data)>(second->data)){
            insertAtBack(&head,second->data);
            second=second->next;
        } 
        else{
            insertAtBack(&head,first->data);
            insertAtBack(&head,second->data);
            first=first->next;
            second=second->next;
        }
    }
    while(first!=NULL){
        insertAtBack(&head,first->data);
        first=first->next;
    }
    while(second!=NULL){
        insertAtBack(&head,second->data);
        second=second->next;
    }
    return head;
}
void mergeSort(Node **head){
    Node *hptr=*head;
    Node *first,*second;
    if(hptr==NULL || hptr->next==NULL){
        return;
    }
    split(hptr,&first,&second);
    printList(first);
    printList(second);
    mergeSort(&first);
    mergeSort(&second);
    *head = mergeLists(first, second);
    printList(*head);
}
int main(){
    Node *head=NULL;
    int a;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        insertAtBack(&head,a);
    }
    printList(head);
    mergeSort(&head);
    printList(head);
    return 0;
}