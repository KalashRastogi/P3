#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
    int num_rows,toPrint,spaces=1,number=1;
    bool odd=true;
    cin>>num_rows;
    for(int i=num_rows;i>=1;i--){
        toPrint=(4*i)-1;
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        int k=0,prev;
        while(k<=toPrint){
            cout<<number;
            k++;
            if(k<toPrint)
                cout<<"*";
            k++;
            number++;
            if(k==(i*2)){
                prev=number;
                number+=((i-1)*i);
            }
        }
        number=prev;
        spaces+=1;
        cout<<endl;
    }
    return 0;
}