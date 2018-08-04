#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,q,x,y;
    int s[1002];
    char a[1002],b[1002];
    for (int i=0;i<1002;i++) {
        s[0]=0;
    }
    cin >> n >> m >> q;
    cin >> a;
    cin >> b;
    for (int i=0; i<=n-m; i++) {
        s[i+1]=1;
        for (int j=0; j<m; j++) {
            if (a[i+j]!=b[j]) {
                s[i+1]=0;
                break;
            }
        }
        s[i+1]+=s[i];
    }
    for (int i=0; i<q; i++) {
        cin >> x >> y;
        y=y-m+1;
        if (x<=y) {
            cout << s[y]-s[x-1] << endl;
        } else {
            cout << "0" << endl;
        }
    }
    return 0;
}