#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int adjmat[N][N];
int main(){
   int n,m;
   cin>>n>>m;
   for (int i=0; i<m; i++)
   {
       int u,v,w;

    //    cin>>u>>v;
    //    adjmat[u][v]=1;
    //    adjmat[v][u]=1;
        cin>>u>>v>>w;
        adjmat[u][v]=w;
        adjmat[v][u]=w;    
   }
   for (int i=1; i<=n; i++)
   {
       for (int j=1; j<=n; j++)
       {
           cout<<adjmat[i][j]<<" ";
       }
       cout<<endl;
   }
   
    return 0;
}
// 4
// 5
// 1 2
// 1 3
// 2 4
// 4 3
// 3 2

// 4
// 5
// 1 2 8
// 1 3 9
// 2 4 11
// 4 3 17
// 3 2 15