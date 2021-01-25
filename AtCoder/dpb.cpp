#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<ll> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
 
#define FOR(i, a, b) for (ll i=a; i<=(b); i++)
#define F0R(i, a) for (ll i=0; i<(a); i++)
#define FORd(i,a,b) for (ll i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (ll i = (a)-1; i >= 0; i--)
 
#define sz(x) (ll)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
const ll MM = 1e5+5;
ll n, k, a[MM], dp[MM];
int main(){
    memset(dp, 0x3f, sizeof dp);
    cin >> n >> k;
    FOR(i, 1, n) cin >> a[i];
    dp[0] = INT_MAX; dp[1] = 0;
    for(ll i=2;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                dp[i] = min(dp[i], dp[i-j]+abs(a[i-j]-a[i]));
            }
        }
    }
    cout << dp[n] << "\n";
    return 0;
}