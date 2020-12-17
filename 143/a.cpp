#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  while(cin >> n) {
    int p, v, t;
    int count = 0;
    for (int i=0;i<n;i++) {
       cin >> p >> v >> t;
       if (p + v + t >=2 ) {
          count ++;
       }
     }
    cout << count << endl;
   }
  return 0;
}
