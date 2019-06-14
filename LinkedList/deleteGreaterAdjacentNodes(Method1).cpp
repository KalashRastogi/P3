#include "linkedlistfunctions.h"
using namespace std;
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
    Node *temp;
    Node *ahead=head;
    while(ahead->next!=NULL){
        temp=ahead->next;
        while(temp!=NULL){
            if(temp->data>ahead->data){
                break;
            }
            temp=temp->next;
        }
        if(temp!=NULL){
            if(head==ahead){
                deleteFromFront(&head);
                ahead=head;
            }
            else{
                int val=ahead->data;
                ahead=ahead->next;
                deleteNode(&head,val);
                
            }
        }
        else{
            ahead=ahead->next;
        }
    }
    printList(head);
    return 0;
}