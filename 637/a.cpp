#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, n, a, b, c, d;
  cin >> t;
  while(t--) {
    cin >> n >> a >> b >> c >> d;
    string s =  (a-b)*n > (c+d) || (a+b)*n < (c-d) ? "No" : "Yes";
    cout <<  s << endl;
  }
}
