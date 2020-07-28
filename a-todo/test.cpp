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
#define f first
#define s second
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
const int MM = 3005;
int n, k; ld dp[MM][MM];
deque<int> dq;

int main(){
    memset(dp, 0, sizeof dp);
    cin >> n >> k;
    memset(dp[0], 0, sizeof dp[0]);
    for(int i=1;i<=k;i++){
        dp[i][0] = 0;
        for(int j=1;j<=n;j++){
            int best=0;
            for(int x=0; x<j;x++){
                ld ori = dp[i][j];
                dp[i][j] = max(dp[i][j], dp[i-1][x]+1.0/(n-x)*(j-x));
                if(dp[i][j]>ori) best = x;
            }
            cout << best << "\n";
        }
    }
    double ans = dp[k][n];
    printf("%.9f\n", ans);

    return 0;
}