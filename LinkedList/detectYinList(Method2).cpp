#include "linkedlistfunctions.h"
using namespace std;
bool detectY(Node *head1, Node *head2){
    unordered_set<Node*> hash;
    while(head1!=NULL){
        hash.insert(head1);
        head1=head1->next;
    }
    while(head2!=NULL){
        if(hash.find(head2)==hash.end()){
            return true;
        }
        hash.insert(head2);
        head2=head2->next;
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