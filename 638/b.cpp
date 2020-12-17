#include <bits/stdc++.h>

using namespace std;

int main() {
  
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while(t--) {
    int n,k;
    cin >> n >> k;
    vector <int> v(n);
    set <int> s;
    for(int i=0;i<n;i++){
       cin >> v[i];
       s.insert(v[i]);
    }
    if (s.size() > k) {
        cout << -1 << endl;
    }else {
      cout << n*k << endl;
      vector<int> vv(s.begin(), s.end());
      for(int i=vv.size();i<k;i++){
        vv.push_back(1);
      }
      for(int i=1;i<n;i++){
        for(int j=0;j<vv.size();j++) {
          cout << vv[j] << ' ';
        }
      }
      for(int j=0;j<vv.size()-1;j++) {
        cout << vv[j] << ' ';
      }
      cout << vv[vv.size() -1 ] << endl;
    }
  
  }
  return 0;
}
