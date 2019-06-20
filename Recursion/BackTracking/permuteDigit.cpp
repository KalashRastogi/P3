/*Not completed*/
#include<bits/stdc++.h>
using namespace std;
int digits[]={1,2,3,4,5,6,7,8,9};
void permute(string str,int l, int r){
	int i;
	if(l==r){
		cout<<str<<endl;
	}
	for(i=l;i<r;i++){
		swap(str[l],str[i]);
		permute(str,l+1,r);
		swap(str[l],str[i]);
	}
}
int main(){
	int k;
	cin>>k;
	char str[k+1];
	permute(str,0,k);
	return 0;
}
