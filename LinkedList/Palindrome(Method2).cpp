#include "linkedlistfunctions.h"
using namespace std;
Node* reverseHalfList(Node **toBeRotated){
    Node *back=NULL,*current=(*toBeRotated),*ahead;
    while(current!=NULL){
        ahead=current->next;
        current->next=back;
        back=current;
        current=ahead;
    }
    return back;
}
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
        while(p2!=NULL && p2->next!=NULL && p2->next->next!=NULL){
            p1=p1->next;
            p2=p2->next->next;
        }    
        p1->next=reverseHalfList(&(p1->next));
        Node *start1=head,*start2=p1->next;
        while(start2!=NULL){
            if(start1->data!=start2->data){
                break;
            }
            start1=start1->next;
            start2=start2->next;
        }
        if(start2==NULL)
            cout<<"Palindrome";
        else
            cout<<"Not a Palindrome";
        cout<<endl;
    }
}