#include "linkedlistfunctions.h"
using namespace std;
int main(){
    Node *head=NULL;
    int a;
    do{
        cin>>a;
        if(a==-1){
            break;
        }
        insertAtBack(&head,a);
    }while(a!=-1);
    printList(head);
    reverseList(&head);
    printList(head);
    return 0;
}