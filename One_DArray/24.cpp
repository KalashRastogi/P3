/* in C++ new or delete operator  are used to allocate memory for array dynamically
*/
#include <bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
    int *foo;
    int n;
    cin>>n;
    foo = new int[n];
    for(int i=0;i<n;i++){
        cin>>foo[i];
    }
    cout<<"the numbers you just entered are stored in memory which was allocated by new operator dynamically";
    delete[] foo;
    cout<<"memory freed! using delete operator";
    return 0;
}