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
        insertAtBack(&head, a);
    }
    if(head==NULL){
        cout<<"No elements";
    }
    else{
        printList(head);
        Node *p1=head,*p2=head;
        while(p2!=NULL && p2->next->next!=NULL){
            p1=p1->next;
            p2=p2->next->next;
        }    
        cout<<p1->data;
        cout<<endl;
    }
    return 0;
}