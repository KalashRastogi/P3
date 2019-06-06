#include<bits/stdc++.h>
using namespace std;
void primeFac(int n){
    int sq = sqrt(n);
    for(int i=2; i<=sq; i++){
        while(n%i == 0){
            n/=i;
        }
        cout<<i<<",";
        if(n!=1){
            cout<<n<<",";
        }
    }
} 
int main(int argc, const char** argv) {
    int num;
    cout<<"Enter a number:";
    cin>>num;
    primeFac(num);
    return 0;
}