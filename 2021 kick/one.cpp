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



void solve(ll t)
{

    ll n , k;
    cin >> n;
    cin >> k;
    string s;
    cin >> s;
    string p = "";
    ll i = 0;
    for(i = n-1 ; i >=0; i--)
    {
        p = p + s[i];
    }
    ll c = n / 2;
    ll count = 0 ;
     i = 0;
    while(i < c)
    {   
        if(s[i] != p[i])
            count++;
            i++;
    }
        cout << "Case #"<<t << ": "<< abs(k - count) ;
}
int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve(i);
            cout << endl;
        }
    return 0 ;
}



