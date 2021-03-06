#include <stdio.h>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <map>
#include <set>
#include <unordered_set>
#include <bitset>
#include <queue>
#include <unordered_map>
#include <string>
#include <climits>
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
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
const int N=1e5+5,M=205;
int n,k,a[N], par[N][M];
long long psa[N],dpc[N],dpp[N];
deque<int> dq;

double slope(int i,int j) {
    if(psa[i]==psa[j]) return -1e18;
    return 1.0*((dpp[i]-psa[i]*psa[i])-(dpp[j]-psa[j]*psa[j]))/(psa[j]-psa[i]);
}
int main() {
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;++i) scanf("%d",&a[i]),psa[i]=psa[i-1]+a[i];
    for(int j=1;j<=k;++j) {
        dq.clear();
        dq.pb(0);
        for(int i=1;i<=n;++i) {
            while(dq.size()>=2&&slope(dq[0], dq[1])<=psa[i]) dq.pop_front();
            int best = dq[0];
            dpc[i]=dpp[best]+psa[best]*(psa[i]-psa[best]);
            par[i][j]=best;
            while(dq.size()>=2&&slope(dq[dq.size()-2],dq[dq.size()-1])>=slope(dq[dq.size()-1],i)) dq.pop_back();
            dq.pb(i);
        }
        swap(dpp, dpc);
    }
    printf("%lld\n",dpp[n]);
    for(int x=n,i=k;i>=1;--i) x=par[x][i],printf("%d%c",x," \n"[i==1]);
    return 0;
}
