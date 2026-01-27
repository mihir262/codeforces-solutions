#include <bits/stdc++.h>
using namespace std;

int main(){
  string situation; 
  cin >> situation;
  
  int maxcount = 1;
  int current =1;

  for (int i=1; i < situation.length(); i++){
    if (situation[i] == situation[i-1]){
      current++;
      maxcount = max(maxcount, current);
    }
    else {
      current = 1;
    }
  }
  if (maxcount>=7){
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}
