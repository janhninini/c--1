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
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


bool isPowerOfTwo (ll x) 
{ 
    return x && (!(x&(x-1))); 
} 
 



/* code */
void solve()
{
    ll n ;
    cin >> n ;

    ll a , ll b ;
    ll p = 0 , q = 0;
    ll r = 0 , s = 0;
    pair<ll> arr[n] ;
    for( ll i = 0 ; i < n; i++ )
    {
        cin >> a ; 
        cin >> b;
        arr[i] = make_pair(a , b);
        p = min(p , a);
        q = max(q , a);
        r = min(r , b);
        s = max(s , b);
    }

vector<pair<ll , ll>> q = ;
    for(ll i = p ; i <= q ; i++)
    {
        for(ll j = r ; j <= s ; j++)
        {

            


        }
    }

}



int main() {

	ll t;
    cin>>t;

    while(t--)
	{ 
	   solve();
       cout << endl;
	
    }
    return 0 ;
}


