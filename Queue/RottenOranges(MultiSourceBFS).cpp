/*We have a m*n matrix in which there are three types of cell
0-empty cell
1-cell having fresh oranges
2-cell having rotten oranges
one rotten orange can rot all his 4 neighbours in one unit of time.
find the minimum time it takes to rot all the oranges. */
#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
int cell[MAX][MAX];
void printq(queue<pair<int,int>> helpingQueue){
    while(!helpingQueue.empty()){
        cout<<helpingQueue.front().first<<helpingQueue.front().second<<endl;
        helpingQueue.pop();
    }
}
void rotCells(int m,int n,queue<pair<int,int>> &helpq){
    int i=helpq.front().first,j=helpq.front().second;
    helpq.pop();
    if(i!=-1 && j!=-1){
        if(i+1<m){
            if(cell[i+1][j]==1){
                cell[i+1][j]=2;
                helpq.push(make_pair(i+1,j));
            }
        }
        if(i-1>=0){
            if(cell[i-1][j]==1){
                cell[i-1][j]=2;
                helpq.push(make_pair(i-1,j));
            }
        }
        if(j-1>=0){
            if(cell[i][j-1]==1){
                cell[i][j-1]=2;
                helpq.push(make_pair(i,j-1));
            }
        }
        if(j+1<n){
            if(cell[i][j+1]==1){
                cell[i][j+1]=2;
                helpq.push(make_pair(i,j+1));
            }
        }
    }
}
int timeTaken(int m,int n){
    queue <pair<int,int>> helpingQueue;
    int time=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(cell[i][j]==2){
                helpingQueue.push(make_pair(i,j));
            }
        }
    }
    helpingQueue.push(make_pair(-1,-1));
    printq(helpingQueue);
    while(!helpingQueue.empty()){
        if(helpingQueue.front().first!=-1 && helpingQueue.front().second!=-1) 
            rotCells(m,n,helpingQueue);
        else{
            if(helpingQueue.size()==1){
                helpingQueue.pop();
            }
            else{
                //printq(helpingQueue);
                time+=1;
                helpingQueue.pop();
                helpingQueue.push(make_pair(-1,-1));
            }
        }
    }
    return time;
}
int main(){
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>cell[i][j];
        }
    }
    cout<<timeTaken(m,n)<<endl;
    return 0;
}