#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <vector>
#include <math.h>
#include <map>
#include <set>
#include <unordered_set>
#include <bitset>
#include <queue>
#include <unordered_map>
#include <climits>
using namespace std;
typedef long long ll;
int N, a[1000005];
ll tot=0;
int main(){
    cin >> N;
    int lastOpen; bool open = false;
    for(int i=1;i<=N;i++){
        scanf("%d", &a[i]);
    }
    int h=a[1];
    for(int i=1;i<=N;i++){
        int cur=0;
        for(int j=i+1;j<=N;j++){
            if(a[j]>=a[i]){
                tot+=cur;
                i=j-1;
                break;
            }
            else{
                cur += a[i]-a[j];
            }
        }
    }
    cout << tot << "\n";
    return 0;


}