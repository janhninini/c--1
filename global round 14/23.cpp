/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;
 
/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define two() cout << "0"
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
 
/* code */
void solve()
	{
		ll n , x;
		cin >> n >> x;
		ll p = x+2;
		if(n>=1 && n<=2)
			cout << 1;
		else if(n>=3 && n <= x+2)
			cout << 2;
		else
		{
			ll count = 3;
			ll start = x+3;
			ll end = (2 * x) + 2;
			ll i = 3;
			while(!(n>=start && n<=end))
			{
				start = end + 1;
				end = (i * x) + 2; 
				i++;
				count++;
			}	
			cout << count;
		}
	}

int main() 
{	
	int t;
	cin >> t;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}