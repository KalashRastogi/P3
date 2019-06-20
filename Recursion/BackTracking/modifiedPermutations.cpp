#include<bits/stdc++.h>
using namespace std;
void permute(string str,int l, int r){
	int i;
  static int count=1;
	if(l==r){
		cout<<count<<"."<<str<<endl;
    count++;
	}
	for(i=l;i<r;i++){
    if(i!=l && str[i]==str[l])
      continue;
		swap(str[l],str[i]);
		permute(str,l+1,r);
		swap(str[l],str[i]);
	}
}
int main(){
	string str;
	cin>>str;
	permute(str,0,str.length());
	return 0;
}
