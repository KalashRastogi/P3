#include "linkedlistfunctions.h"
int main(int argc, char const *argv[])
{
    Node *head=NULL;
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
        insertAtBack(&head,a[i]);
    }
    printList(head);
    return 0;
}
