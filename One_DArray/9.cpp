#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double strikeRate,max=DBL_MIN;
    cin>>n;
    int runs[n],balls[n];
    for(int i=0;i<n;i++){
        cin>>runs[i];
    }
    for(int i=0;i<n;i++){
        cin>>balls[i];
    }
    for(int i=0;i<n;i++){
        strikeRate = (double)runs[i]/balls[i];
        if(strikeRate>max){
            max=strikeRate;
        }
    }
    cout<<"Max strikeRate by players:"<<max;
    return 0;
}