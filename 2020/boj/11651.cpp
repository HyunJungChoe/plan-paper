#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, i;
  cin >> n;

  vector<pair <int,int>> a(n); // 쌍 벡터 
  for(i =0; i<n; i++) {
    cin >> a[i].second >> a[i].first ;
  }

  sort(a.begin(), a.end());  
  
  for (int i = 0; i < n; i++)
    cout << a[i].second << " " << a[i].first <<"\n";

}