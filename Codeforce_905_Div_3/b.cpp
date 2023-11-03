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
    int n, k; cin >> n >> k;

    string s; cin >> s;

    map<char, int> m;

    for(int i = 0; i < s.size(); i++){
      m[s[i]]++;
    }

    int odd_cnt = 0, pair_cnt = 0;

    for(auto a:m){
      if(a.second % 2 != 0){
        odd_cnt++;
        pair_cnt += a.second / 2; 
      }
      else{
        pair_cnt += a.second/ 2;
      }

      //cout << a.first << " " << a.second << endl;
    }

    //cout << pair_cnt << " " << odd_cnt << endl;


    if((n - k) % 2 == 0){
      if(odd_cnt - k > 0){
        cout << "NO" << endl;
      }
      else{
        cout << "YES" << endl;
      }
    }
    else{
      if(odd_cnt - k > 1){
        cout << "NO" << endl;
      }
      else{
        cout << "YES" << endl;
      }
    }
  }

  return 0;
}
