/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;
 
/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
#define ll long long int
#define mp make_pair
#define fi first
#define se second
#define pb push_back
 
/* loops */
#define inp(i,n,arr) for(ll i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(ll i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(ll i=0;i<n;i++)
#define arrs(i,n,arr,sum) for(ll i = 0 ; i < n ; i++) sum = sum + arr[i];
#define arrmax(i , n , arr , maxx) for(ll i = 1 ; i < n;i++) maxx = max(maxx , arr[i]);
#define arrmin(i , n , arr , minn) for(ll i = 0 ; i < n;i++) minn = min(minn , arr[i]); 
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/*code*/
int main() 
{
	ll t;
    t=1;
	while(t--)
	{
        ll n , k;
        cin >> n >> k;
        int a[n];
        inp(i , n , a);
        int x , y;

        vector<int> g[n];
        for(int i = 0 ; i < n-1 ; i++)
        {
            cin >> x >> y;
            g[x-1].push_back(y-1);
        }
        queue<pair<int , int > > q;
        q.push({0 , 1});
        int count = 0;
        while(!q.empty())
        {
            int r = q.front().first;
            int s = q.front().second;
            q.pop();
            bool l = false;
            for(int i = 0 ; i < g[r].size() ;i++)
               { 
                   l=true;
                   if(a[g[r][i]] == 0 && s<=k){ q.push({g[r][i] , s}); count++;}
                   else if(a[g[r][i]] == 1 && s<k) q.push({g[r][i] ,s+1});
               }
            if( !l && s<=k && a[r] == 1) count++;  
        }
    cout << count;
	}
	return 0;
}
