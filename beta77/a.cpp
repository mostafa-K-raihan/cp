#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  while(cin >> s) {
    char c = s[0];
    int  flag = 0;
    int count = 1;
    int index = 1;
    while(index < s.size()) {
      if (s[index] == c) {
         count ++;
        
      }else {
        count =1 ;
        
        c = s[index];
      }
      if (count >= 7) {
        flag = 1;
        break;
      }
      index ++;
    } 
    cout << (flag ? "YES" : "NO") << endl;
  }
  return 0;
}
