#include "linkedlistfunctions.h"
Node* modifyList(Node* list1,Node* list2){
    Node* res;
    while(list1!=NULL && list2!=NULL){
        if((list1->data)>=(list2->data)){
            insertAtBack(&res,list1->data);
            list1=list1->next;
            list2=list2->next;
        }
        else{
            insertAtBack(&res,list2->data);
            list1=list1->next;
            list2=list2->next;
        }
    }
    while(list1!=NULL){
        insertAtBack(&res,list1->data);
        list1=list1->next;
    }
    while(list2!=NULL){
        insertAtBack(&res,list2->data);
        list2=list2->next;
    }
    return res;
}
int main(){
    Node *head1=NULL,*head2=NULL,*head3=NULL;
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
    head3=modifyList(head1,head2);
    cout<<"OUTPUT:"<<endl;
    printList(head3);
    return 0;
}