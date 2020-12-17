#include <bits/stdc++.h>
using namespace std;

int main() {

  int p, q, x;
  for (int i=0;i<5;i++) {
    for (int j=0;j<5;j++) {
      cin >> x;
      if (x == 1) {
        p = i, q = j;
      }
    }
  }
  cout << abs((2-p)) + abs((2-q)) << endl;
  return 0;
}
