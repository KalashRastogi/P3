#include "linkedlistfunctions.h"
using namespace std;
void deleteAlternate(Node** head){
    Node *temp=*head;
    if(head==NULL){
        cout<<"No elements in List";
        return;
    }
    temp=temp->next;
    Node *toBeDeleted;
    bool even=true;
    while(temp!=NULL){
        if(even){
            toBeDeleted=temp;
            temp=temp->next;
            deletePointer(&(*head),toBeDeleted);
        }
        else{
            temp=temp->next;
        }
        even=!even;
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
        insertAtBack(&head,a);
    }
    printList(head);
    deleteAlternate(&head);
    printList(head);
    return 0;
}