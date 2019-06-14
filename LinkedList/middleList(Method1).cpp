#include "linkedlistfunctions.h"
using namespace std;
int main(){
    Node *head=NULL;
    int a,count;
    do{
        cin>>a;
        if(a==-1){
            break;
        }
        insertAtBack(&head,a);
    }while(a!=-1);
    count = listLength(head);
    count/=2;
    cout<<count;
    printList(head);
    Node *temp=head;
    while(count>0){
        temp=temp->next;
        count--;
    }
    cout<<temp->data;
    return 0;
}
