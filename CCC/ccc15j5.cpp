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
ll n, k, dp[255][255][255];
int main(){
    cin.tie(0);cin.sync_with_stdio(0);
    cin >> n >> k;
    FOR(i, 1, n) dp[1][i][i]++;
    FOR(i, 1, k){
        FOR(j, 1, n){
            FOR(m, 1, n){
                if(dp[i][j][m]){
                    FOR(q, m, n-j){
                        dp[i+1][j+q][q]+=dp[i][j][m];
                    }
                }
            }
        }
    } 
    ll ans=0;
    FOR(i, 1, n)
        ans += dp[k][n][i];
    cout << ans << "\n";

    return 0;
}