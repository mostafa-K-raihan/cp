#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  long long a[30] = {0LL};
  for(int i=1;i<31;i++) {
    a[i] = (long long) pow(2, i);   
  }
 
  while(t--) {
    long long n;
    cin >> n;
    long long count1 = 0LL, count2 = 0LL;
    
    for(int i=1;i<n/2;i++){
      count1 += a[i];
    }
    count1 += a[n];
    for(int i=n/2;i<n;i++){
      count2 += a[i];
    }


    cout << llabs(count1 - count2) << endl;
  }
  return 0;
}
