#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  while(cin >> s) {
    string res = "";

    for(int i=0;i<s.size();i++) {
      char c = s[i];
      if (c == 'A' || c == 'a'
          || c == 'E' || c == 'e'
          || c == 'I' || c == 'i'
          || c == 'O' || c == 'o'
          || c == 'U' || c == 'u'
          || c == 'Y' || c == 'y'
        ) {

      } else {
        res += ".";
        res += tolower(c);
      }
    }
    cout << res << endl;
  }
  return 0;
}
