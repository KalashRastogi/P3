#include "linkedlistfunctions.h"
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
    int count = listLength(head);
    int medianPos = ceil((float)count/2);
    Node *temp=head;
    while(medianPos>1){
        temp=temp->next;
        medianPos--;
    }
    cout<<"median:"<<temp->data<<endl;
    return 0;
}