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
int main(){
    int T; cin >> T;
    while(T--){
        int N; scanf("%d", &N);

        if(((N/2)%2)==1){
            printf("NO");

        }
        else{
            printf("YES\n");
            for(int i=1;i<=N/2;i++){
                printf("%d ", i*2);
            }
            for(int i=1;i<=N/4;i++){
                printf("%d ", -1+i*2);
            }
            for(int i=N/2;i>N/4;i--){
                printf("%d ", 1+i*2);
            }
        }
        printf("\n");
        

    }
    return 0;
}