#include "linkedlistfunctions.h"
void lastKnodePointer(Node* head, int k){
    stack <Node*> st;
    while(head!=NULL){
        st.push(head);
        head=head->next;
    }
    while(k!=0){
        st.pop();
        k--;
    }
    printList(st.top());
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
    printList(head);
    cout<<"k:";
    cin>>a;
    lastKnodePointer(head,a);    
    return 0;
}