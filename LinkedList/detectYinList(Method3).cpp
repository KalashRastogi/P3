#include "linkedlistfunctions.h"
using namespace std;
Node* findNode(Node *head, int position){
    while(position>1){
        head=head->next;
        position--;
    }
    return head;
}
bool detectY(Node *head1, Node *head2){
    Node *start1,*start2;
    int count1=listLength(head1);
    cout<<count1<<" ";
    int count2=listLength(head2);
    cout<<count2<<" ";
    int pos;
    if(count1>count2){
        pos=count1-count2;
        start1=findNode(head1,pos+1);
        start2=head2;
    }
    else if(count2>count1){
        pos=count2-count1;
        start2=findNode(head2,pos+1);
        start1=head2;
    }
    else{
        start1=head1;
        start2=head2;
    }
    while(start1!=NULL && start2!=NULL){
        if(start1->next==start2->next){
            return true;
        }
        else{
            start1=start1->next;
            start2=start2->next;
        }
    }
    return false;
}
int main(){
    Node *head1=NULL,*head2=NULL,*head3=NULL;
    int a;
    cout<<"Enter elements in the first list:"<<endl;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        insertAtBack(&head1,a);
    }
    cout<<"Enter elements in the second list:"<<endl;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        insertAtBack(&head2,a);
    }
    cout<<"Enter elements that are common to both lists:"<<endl;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        insertAtBack(&head3,a);
    }
    Node *end1=head1,*end2=head2;
    while(end1->next!=NULL){
        end1=end1->next;
    }
    while(end2->next!=NULL){
        end2=end2->next;
    }
    //creating Y
    end1->next=head3;
    end2->next=head3;
    printList(head1);
    printList(head2);
    if(detectY(head1,head2)){
        cout<<"Y in lists"<<endl;
    }
    else{
        cout<<"No Y found";
    }
}