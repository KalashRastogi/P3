#include "linkedlistfunctions.h"
Node* findMin(Node* head){
    int min=INT_MAX;
    Node* minimum;
    stack <Node*> mini;
    while(head!=NULL){
        mini.push(head);
        if(mini.top()->data<min){
            minimum=mini.top();
            min=mini.top()->data;
        }
        head=head->next;
    }
    return minimum;

}
int main(){
    Node* head=NULL;
    int a;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        insertAtBack(&head,a);
    }
    cout<<findMin(head)->data;
}