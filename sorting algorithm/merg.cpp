#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int r)
{
  int left_size = m-l+1;
  int right_size = r-m;
  int L[left_size],R[right_size];

  int k=0;

  for (int i=l; i<=m; i++)
  {
    L[k]=a[i];
    k++;
  }

  k=0;

  for (int i=m+1; i<=r; i++)
  {
    R[k]=a[i];
    k++;       
  }

  int i=0,j=0;
  int cur = l;

  while (i<left_size && j<right_size)
  {
    if(L[i] <= R[j])
    {
      a[cur]=L[i];
      i++;
    }
    else
    {
      a[cur]=R[j];
      j++; 
    }
    cur++;     
  }

  while (i<left_size)
  {
    a[cur] = L[i];
    i++;
    cur++;
  }

  while (j<right_size)
  {
    a[cur] = R[j];
    j++;
    cur++;
  }  
}

int main(){
  int n;
  cin>>n;
  int a[n];   
  for (int i=0; i<n; i++)
  {
    cin>>a[i];
  }

  int mid = n/2;
  // cout<<mid<<endl;  // confused hoite paro 

  merge(a,0,mid-1,n-1);

  for (int i=0; i<n; i++)
  {
    cout<<a[i]<<" ";
  } 
   
  return 0;
}
