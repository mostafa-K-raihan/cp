#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t, n, k;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		vector <int> v(n);
		vector <bool> b(n);
		vector <int> pre(n);
		
		for (int i=0; i<n; i++) {
			cin >> v[i];
		}
		
		for (int i=1; i<n-1; i++) {
			if (v[i-1] < v[i] && v[i] > v[i+1]) {
				b[i] = true;
			}
		}
		pre[0] = 0;
		for (int i=1; i<n; i++) {
			pre[i] = pre[i-1] + (b[i] == true ? 1 : 0);
		}
		
		int count = -1;
		int index = -1;
		for (int i=0; i<=n-k; i++) {
			int c = pre[i+k-1] - pre[i];
			if (b[i+k-1]) c--;
			if (b[i]) c--; 
			if (count < c) {
				count = c;
				index = i;
			}
		}
		cout << count+1 << ' ' << index+1 << endl;
	}
}
