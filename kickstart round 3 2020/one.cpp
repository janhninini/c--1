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

  

/* code */
void solve()
{

     ll n ;
    cin >> n;
    ll a[n];
    ll b[n];
    ll c[n];
    ll d[n];
    for(ll i = 0 ; i <n ; i++)
    {
        cin >> a[i];
        cin >> b[i];
        d[i] = b[i];
    }
    for(ll i = 0 ; i < n; i++)
    {
        cin >> c[i];
    }





    for(ll i = 1 ; i < n; i++)
    {
       ll st_time = a[i]-b[i-1] + c[i];
       if(ceil(abs(b[i]-a[i]/2) > b[i])
       {

       }
       else
       {
           b[i]
       }

       a[i] = a[i] + c[i];
    }
    cout << a[i];
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