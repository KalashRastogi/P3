#include "linkedlistfunctions.h"
int main(){
    Node *head=NULL;
    int choice, num, pos;
    bool valid=true;
    while(valid){
        cout<<"1. InsertBack"<<endl;
        cout<<"2. InsertFront"<<endl;
        cout<<"3. InsertBetween"<<endl;
        cout<<"4. DeleteFront"<<endl;
        cout<<"5. DeleteBack"<<endl;
        cout<<"6. Delete a key"<<endl;
        cout<<"7. Print"<<endl;
        cout<<"8. Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            cin>>num;
            insertAtBack(&head, num);
            break;
            case 2:
            cin>>num;
            insertAtFront(&head, num);
            break;
            case 3:
            cin>>num>>pos;
            if(pos==1)
                insertAtFront(&head, num);
            else
                insertInMiddle(&head, num, pos);
            break;
            case 4:
            cin>>num;
            deleteFromFront(&head);
            break;
            case 5:
            cin>>num;
            deleteFromBack(&head);
            break;
            case 6:
            cin>>num;
            deleteNode(&head, num);
            break;
            case 7:
            printList(head);
            break;
            case 8:
            valid=false;
            break;
            default:
            cout<<"Enter again!"<<endl;
        }
    }
    return 0;
}