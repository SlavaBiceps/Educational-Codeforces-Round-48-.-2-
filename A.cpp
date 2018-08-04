#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n,m,x,z;
	cin >> n >> m;
	z=0;
	for (long long i=0; i<n; i++) {
		cin >> x;
		cout << (z+x)/m - z/m << endl;
		z+=x;
	}
	return 0;
}