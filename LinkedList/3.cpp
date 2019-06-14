#include "linkedlistfunctions.h"
using namespace std;
int main(){
    Node *head=NULL;
    int max=INT_MIN;
    int a;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        insertAtBack(&head,a);
    }
    printList(head);
    Node *temp=head;
    max=temp->data;
    temp=temp->next;
    while(temp!=NULL){
        if(temp->data>max){
            max=temp->data;
        }
        else{
            deletePointer(&head, temp);
        }
        temp=temp->next;
    }
    printList(head);
    return 0;
}