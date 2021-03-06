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
const ll MM = 1003, M = 1e6;
ll n, a[MM*2], k;
int main(){
    cin >> n;
    FOR(i, 1, n) cin >> a[i];
    sort(a+1, a+1+n);
    FOR(i, n+1, n*2){
        a[i] = a[i-n] + M;
    }
    cin >> k;
    ll lo = 0, hi = M;
    ll st, mi;
    while(lo!=hi){
        ll mid = (lo+hi)/2;
        // cout << mid << "\n";
        mi = INT_MAX;
        FOR(i, 1, n){
            ll cnt = 0;
            st = a[i]; cnt++;
            FOR(j, i, i+n-1){
                if(a[j]-st>2*mid){cnt++; st=a[j];}
            }
            mi = min(mi, cnt);
            if(mi<=k) break;
        }
        if(mi <=k) hi = mid;
        else lo = mid+1;
    }
    cout << lo << "\n";

    return 0;
}