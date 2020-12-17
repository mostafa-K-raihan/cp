#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  double a;
  while(cin >> n >> m >> a) {
    long long b = ceil(n/a);
    long long c = ceil(m/a);
    
    cout << b*c  << endl;
  }
}
