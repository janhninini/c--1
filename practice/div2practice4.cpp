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
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */ 

void solve()
{
    ll n , a, b , c , p , q , r;
     cin >> n >> a >> b >> c ;
     if(n%a == 0 || n%b == 0 || n%c == 0)
        {
          zero();  
          return ;
        }
     ll t;   
     if(n > a )
        {
            t = n / a;
            p = ((t+1) * a); 
        }
    else
        p = a ;
    if(n > b )
    {
            t = n / b;
            q = ((t+1) * b); 

    }
    else
        q = b;
    if(n > c )
    {
        t = n / c;
        r = ((t+1) * c);
    }
    else
        r = c ;
    

    p = min(p , q);
    p = min(p , r);
    cout << p - n ;

}
    

int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve();
            cout << endl;
        }
    return 0 ;
}