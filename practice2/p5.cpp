/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define two() cout << "0"
#define ll long long int
#define intt long long
#define mp make_pair
#define fi first
#define se second
#define pb push_back

/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

#define mod 1000000007
 ll dp[2000][2000];


/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */ 
void solve()
{
   string s;
   cin >> s;
   ll d= 0;
   ll e = 0;
   if(s[0]>='A' && s[0]<='Z')
    d=1;
    for(int i=1;i <s.length();i++)
    {
    if(s[i]>='a' and s[i]<='z')
        {   e=1;
        break;
        }
    }

    if(e==1)
        cout << s;
    else if(d==1 && e==0)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
    else
    {
         transform(s.begin(), s.end(), s.begin(), ::tolower);
         s[0] = (char)s[0]-32;
            cout << s;
    }

}
int main()
{
    ll t;
    t= 1;
    while(t--)
    {
	solve();
    cout << endl;
    }
	return 0;
}