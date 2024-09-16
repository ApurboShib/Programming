#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;
int arr[N];
int main()
{
    int i,j;
    arr[0]=arr[1]=1;
    for(i=2; i*i<=N; i++)
    {
        if(arr[i]==0)
        {
            for(j=2; i*j<=N; j++)
            {
                arr[i*j]=1;
            }
        }
    }
    int n,t;
    cin>>n;
    long long int in;
    for(int i=0; i<n; i++)
    {
        cin>>in;
        t=sqrt(in);
        if(t==sqrt(in)&&arr[t]==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}