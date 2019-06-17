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
Node* multiplyLists(Node* int1,Node* int2){
    Node* first=NULL,*second=NULL,*temp;
    insertAtBack(&second,0);
    int zeros=0;
    int carry=0;
    int res,flag=0;
    while(int2!=NULL){
        carry=0;
        if(flag==1){
            insertAtFront(&int1,0);
        }
        temp=int1;
        while(int1!=NULL){
            res=(carry+((int2->data)*(int1->data)))%10;
            carry=(carry+((int2->data)*(int1->data)))/10;
            insertAtBack(&first,res);
            int1=int1->next;
        }
        if(carry!=0){
            insertAtBack(&first,carry);
        }
        int1=temp;
        second=addLists(first,second);
        first=NULL;
        zeros++;
        int2=int2->next;
        flag=1;
    }
    return second;
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
    //printList(integer2);
    cout<<endl;
    reverseList(&integer1);
    reverseList(&integer2);
    result=multiplyLists(integer1,integer2);
    reverseList(&result);
    printNum(result);
    return 0;
}