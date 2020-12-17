#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k;
  while(cin >> n >> k) {
    vector <int> v(n);
    for (int i=0; i<n; ++i) {
      cin >> v[i];
    }
    int t = v[k-1];
    if (t<=0) {
      int count = 0;
      for (int i=0; i<k; i++) {
        count += (v[i]>0?1:0);
      }
      cout << count << endl;
    }
    else {
      int count = k;
      for (int i=k;i<n;i++) {
        if (v[i] == t) {
          count ++;
        } 
      }
      cout << count << endl;
    }
  }
  return 0;
}
