#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin >> n >> m;
    long long arr1[n];
    long long arr2[m];
    long long s1,s2;
    s1=0;
    s2=0;
    for(int i=0; i<n; i++) {
        cin >> arr1[i];
        s1=s1^arr1[i];
    }
    for(int i=0; i<m; i++){
        cin>>arr2[i];
        s2=s2^arr2[i];
    }
    if(s1!=s2){
        cout << "NO";
        return 0;
    }
    cout << "YES" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 && j==m-1)
                cout << ((s2^arr2[m-1])^arr1[0]) << " ";
            else if (i==0) {
                cout << arr2[j] << " ";
            } else if (j==m-1) {
                cout << arr1[i] << " ";
            } else cout<<"0 ";
        }
        cout << endl;
    }

}