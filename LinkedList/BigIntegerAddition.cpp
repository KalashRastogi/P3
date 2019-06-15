#include "linkedlistfunctions.h"
Node* addLists(Node* int1,Node* int2){
    int carry=0,sum=0;
    Node* res=NULL;
    while(int1!=NULL || int2!=NULL){
        sum=carry+(int1?int1->data:0)+(int2?int2->data:0);
        carry=sum/10;
        sum=sum%10;
        insertAtBack(&res,sum);
        if(int1!=NULL){
            int1=int1->next;
        }
        if(int2!=NULL){
            int2=int2->next;
        }
    }
    if(carry!=0){
        insertAtBack(&res,carry);
    }
    return res;
}
void printNum(Node* head){
    if(head == NULL){
        cout<<"No elements availabe!";
        return;
    }
    else{
        while(head!=NULL){
            cout<<head->data;
            head=head->next;
        }
    }
    cout<<endl;
}
int main(){
    Node* integer1=NULL;
    Node* integer2=NULL;
    Node* result=NULL;
    char c;
    while((c=getchar())!='\n'){
        insertAtBack(&integer1,(c-'0'));
    }
    //printList(integer1);
    while((c=getchar())!='\n'){
        insertAtBack(&integer2,(c-'0'));
    }
    cout<<endl;
    reverseList(&integer1);
    reverseList(&integer2);
    result=addLists(integer1,integer2);
    reverseList(&result);
    printNum(result);
    return 0;
}