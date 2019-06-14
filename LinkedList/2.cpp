#include "linkedlistfunctions.h"
int getSum(Node *head){
    int sum=0;
    Node *temp=head;
    while(head!=NULL){
        if(head->next==NULL){
            if(head->data>temp->data){
                sum+=head->data;
            }
        }
        else if(head->data > head->next->data){
            sum+=head->data;
        }
        head=head->next;    
    }
    return sum;
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
    cout<<"O/P:"<<getSum(head)<<endl;
    return 0;
}