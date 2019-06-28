#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(auto i=a.begin(); i<a.end(); i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    //sum
    cout<<"Sum:";
    int sum=0;
    cout<<accumulate(a.begin(),a.end(),sum);
    cout<<endl;
    //reverse
    cout<<"Reverse:";
    reverse(a.begin(),a.end());
    for(auto i=a.begin(); i<a.end(); i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    //min_element
    cout<<"Minimum element:";
    cout<<*min_element(a.begin(),a.end());
    cout<<endl;
    //max_element
    cout<<"Maximum element:";
    cout<<*max_element(a.begin(),a.end());
    cout<<endl;
    return 0;
}
