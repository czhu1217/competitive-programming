#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
 
#define FOR(i, a, b) for (int i=a; i<=(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
const int MM = 405;
int n, l, r;
ll dp[MM][MM], sz[MM][MM];
int main(){
    memset(dp, 0x3f, sizeof dp);
    cin >> n;
    FOR(i, 1, n){
        cin >> sz[i][i];
        dp[i][i] = 0;
    }
    FOR(i, 2, n){
        FOR(j, 1, n-i+1){
            l = j; r = j+i-1;
            FOR(k, l, r-1){
                dp[l][r] = min(dp[l][r], dp[l][k]+dp[k+1][r]+sz[l][k]+sz[k+1][r]);
                sz[l][r] = sz[l][r-1]+sz[r][r];
            }
            //  cout << l << " " << r << " " << dp[l][r] << "\n";
        }  
    }
    cout << dp[1][n] << "\n";
    return 0;

}