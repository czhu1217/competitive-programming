
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
#include <stack>
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
int r, g, b, w;
int a, x, y, z;
void solve(){
    cin >> r >> g >> b >> w;
    a = r%2; x = g%2; y = b%2; z = w%2;
    if(a+x+y+z<=1){
        cout << "YES\n";
        return;
    }
    r--; g--; b--; w +=  3;
    if(r<0||g<0||b<0||w<0){
        cout << "NO\n";
        return;
    }
    a = r%2; x = g%2; y = b%2; z = w%2;
    if(a+x+y+z<=1) cout << "YES\n";
    else cout << "NO\n";

}
int main(){
    int t; cin >> t;
    while(t--)solve();
    return 0;
}