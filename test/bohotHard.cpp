#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int i,r[n],min[n],max[n],timei[n];
        string rating[n],color[n];
        bool player[n];
        bool flag[4];
        bool temp=false;
        memset(flag,false,sizeof(flag));
        memset(player,false,sizeof(player));
        for(i=0;i<n;i++){
            cin>>r[i]>>min[i]>>max[i]>>timei[i]>>rating[i]>>color[i];
        }
        cout<<"wait"<<endl;
        for(int i=2;i<=n;i++){
            memset(flag,false,sizeof(flag));
            temp=false;
            for(int j=1;j<i;j++){
                if(j==i)
                    continue;
                if(player[j-1]){
                    temp=true;
                    continue;
                }
                    
                if((min[j-1]<=r[i-1] && max[j-1]>=r[i-1]&&(min[i-1]<=r[j-1] && max[i-1]>=r[j-1]))){
                    flag[0]=true;
                    if(rating[i-1]==rating[j-1]){
                        flag[1]=true;
                        if(timei[i-1]==timei[j-1]){
                            flag[2]=true;
                            if((color[i-1]=="random" && color[j-1]=="random") || (color[i-1]=="black" && color[j-1]=="white") || (color[i-1]=="white" && color[j-1]=="black")){
                                flag[3]=true; 
                            }
                        }
                    }
                }
                if(flag[0] && flag[1] && flag[2] && flag[3]){
                    cout<<j<<endl;
                    temp=false;
                    player[j-1]=true;
                    break;
                }
                else{
                    temp=true;
                    memset(flag,false,sizeof(flag));
                }
            }
            if(temp){
                cout<<"wait"<<endl;
            }
        }
    }
    return 0;
}