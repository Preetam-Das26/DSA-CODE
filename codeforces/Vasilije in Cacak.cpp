#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {

        long long n,k,x;
        cin>>n>>k>>x;
        
        long long sum=n*(n+1)/2;
        
        long long s=((sqrt((8*x+9))-1))/2;
        s+=1;
        
       
        
        long long s1=n*k-(k*(k-1)/2);
        long long s2=k*(k+1)/2;

        
       
        
    
       
        
        if(x>sum||k>n||x>s1||x<s2)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        


        
       



       








    }
    
    return 0;
}
