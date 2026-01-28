#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;

  // so basically the number of days with diff socks = min(a,b)
  // days with same socks = remaining/2 which is |a-b|/2
  
  int diff = min(a,b);
  int same = abs(a-b)/2;

  cout << diff << " " << same << "\n";
  return 0;
}
