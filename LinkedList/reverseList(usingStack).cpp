#include "linkedlistfunctions.h"
using namespace std;
Node* rev(Node* hd){
    Node* newList=NULL;
    stack <Node*> st;
    while(hd->next!=NULL){
        st.push(hd);
        hd=hd->next;
    }
    newList = hd;
    while(!st.empty()){
        hd->next = st.top();
        hd=hd->next;
        st.pop();
    }
    hd->next=NULL;
    return newList;
}
int main(){
    Node* head=NULL, *reversedList;
    int a;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        insertAtBack(&head,a);
    }
    printList(head);
    reversedList = rev(head);
    printList(reversedList);
}