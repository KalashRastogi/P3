#include "linkedlistfunctions.h"
void splits(Node *head,Node** first, Node** second){
    *first=head;
    int len=listLength(head);
    len=ceil((float)len/2);
    while(len>1){
        head=head->next;
        len--;
    }
    *second=head->next;
    head->next=NULL;
}
int main(){
    Node *head=NULL,*first=NULL,*second=NULL;
    int a;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        insertAtBack(&head,a);
    }
    splits(head,&first,&second);
    printList(first);
    printList(second);
    return 0;
}