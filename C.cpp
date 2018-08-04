#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b;
    long long rost[300003][2];
    long long f[300003][2],val[300003][2];
    long long now,res;
    now=0;
    res=0;
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> rost[i][0];
    }
    for (int i=1; i<=n; i++){
        cin >> rost[i][1];
    }
    for (int i=n; i>0; i--){
        f[i][0]=f[i+1][0]+rost[i][0];
        f[i][1]=f[i+1][1]+rost[i][1];
    }
    for(int i=n; i>0; i--){
        val[i][0]=val[i+1][0]+f[i+1][0]+f[i+1][1]+rost[i][1]*((n-i+1)*2-1);
        val[i][1]=val[i+1][1]+f[i+1][0]+f[i+1][1]+rost[i][0]*((n-i+1)*2-1);
    }
    for(int i=0; i<n; i++){
        res = max(res,now+val[i+1][i%2]+i*2*(f[i+1][0]+f[i+1][1]));
        now += rost[i+1][i%2]*2*i+rost[i+1][(i+1)%2]*(2*i+1);
    }
    cout << res;
}