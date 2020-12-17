#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1, s2;

  while(cin >> s1 >> s2) {
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int v = s1.compare(s2);
    if (v < 0) {
      cout << -1;
    } else if (v > 0) {
      cout << 1;
    } else {
      cout << 0;
    }
    cout << endl;
  }
}
