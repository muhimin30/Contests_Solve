#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

int main()
{
  bismillah();

  int t; cin >> t;
  while(t--){
  string s; cin >> s;

  vector<int> num;
  num.push_back(1);
  for(auto a: s){
    if(a == '0'){
      num.push_back(10);
    }
    else{
      num.push_back(a - '0');
    }
  }
  int sum = 0;
  for(int i = 1; i < num.size(); i++){
    sum += abs(num[i-1] - num[i]);
  }
  cout << sum + 4 << endl;

  }


  return 0;
}
