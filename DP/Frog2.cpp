#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int k, h[N], dp[N];
int magic(int i){
    int cost = INT_MAX;
    if(i==0)return 0;
    if(dp[i] != -1)return dp[i];
    for(int j=1;j<=k;++j){
        if(i-j >= 0)
        cost = min(cost , magic(i-j) + abs(h[i]-h[i-j]));
   }




return dp[i] = cost;
}

int main(){
    memset(dp , -1 , sizeof(dp));
    int n; cin >> n >> k;
    for(int i=0;i<n;++i){
        cin >> h[i];
    }
    cout << magic(n-1);
}