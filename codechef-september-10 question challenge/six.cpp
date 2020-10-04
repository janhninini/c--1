#include<bits/stdc++.h>

using namespace std;

#define int long long int

unsigned long long power(unsigned long long x,int y,int p=1000000007)
{
    unsigned long long res =1;
    x=x%p;

    while(y>0)
    {
        if(y&1)
            res=(res*x)%p;

        y=y>>1;
        x=(x*x)%p;
    }
    return res;
}

unsigned long long modi(unsigned long long n,int p=1000000007)
{
    return power(n,p-2,p);
}

unsigned long long ncrmodf(unsigned long long n,int r,int p=1000000007)
{
    if(r==0)
        return 1;

    unsigned long long fac[n+1];
    fac[0]=1;
    for(int i=1;i<=n;i++)
    {
        fac[i]=(fac[i-1]*i)%p;
    }
    return (fac[n]*modi(fac[r],p)%p*modi(fac[n-r],p)%p)%p;
}

signed main(){
int t;
cin>>t;
while(t--)
{
    map<int,int> mp;
    int n;
    cin>>n;
    int a[n];
    int maxi=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]=mp[a[i]]+1;
        maxi=max(a[i],maxi);
    }
    int f=mp[maxi];
    int left=power(2,n-f);
    int right=power(2,f);
    if(f%2==0)
        right=right-ncrmodf(f,f/2);
    right=right % 1000000007;
    cout<<left * right % 1000000007 <<endl;

}
return 0;
}



