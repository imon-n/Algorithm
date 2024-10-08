#include<bits/stdc++.h>
using namespace std;
const int N =1e3+5;
bool visited[N][N];
vector<string>adj;
int n,m;
bool isValid(int i,int j)
{
    return(i>=0 && i<n && j>=0 && j<m);
}

void dfs(int i,int j)
{
    if(! isValid(i,j)) return;
    if(visited[i][j]) return;
    if(adj[i][j] == '#') return;

    visited[i][j]=true;

    dfs(i,j-1);
    dfs(i,j+1);
    dfs(i-1,j);
    dfs(i+1,j);
}

int main(){
   cin>>n>>m;
   for (int i=0; i<n; i++)
   {
       string x;
       cin>>x;
       adj.push_back(x);
   }

   int cc=0;

   for (int i=0; i<n; i++)
   {
       for (int j=0; j<m; j++)
       {
           if(adj[i][j] =='#') continue;
           if(visited[i][j]) continue;
           dfs(i,j);
           cc++;
       }
   }

   cout<<cc;
   
    return 0;
}


// 5 8
// ########
// #..#...#
// ####.#.#
// #..#...#
// ########
// 6 5
// ..#..
// ..#..
// #####
// .#...
// .####
// .....