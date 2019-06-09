#include <bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
    int i,num,res;
    cin>>num;
    for(i=1;(i*i*i)<=num;i++);
    cout<<i-1;
    return 0;
}