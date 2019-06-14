#include "linkedlistfunctions.h"
using namespace std;
bool detectY(Node *head1, Node *head2){
    Node *temp=head2;
    while(head1->next!=NULL){
        head2=temp;
        while(head2->next!=NULL){
            if(head1->next == head2->next){
                return true;
            }
            head2=head2->next;
        }
        head1=head1->next;
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