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
    vector<int> def;

    int even_cnt = 0, four = 0;

    for(int i = 0; i < n; i++){
      int temp; cin >> temp;
      if(temp <= k){
        def.push_back(k - temp);
        if((k - temp) % 2 == 0){
          even_cnt++;
        }
      }
      else{
        int mult = ceil((double) temp / k);

        int new_k = k * mult;

        def.push_back(new_k - temp);
        if((new_k - temp) % 2 == 0){
          even_cnt++;
        }
        
      }
      if(temp % 4 == 0){
          four++;
      }
    }

    // for(auto a: def) cout << a << " ";
    // cout << endl;


    sort(def.begin(), def.end());
    
    if(k != 4){
      cout << def[0] << endl;
    }
    else{
      //  cout << even_cnt << "  " << four << endl;
      if(even_cnt >= 2 || four > 0){
        cout << 0 << endl;
      }
      else if(even_cnt == 1 || def[0] == 1){
        cout << 1 << endl;
      }
      else{
        cout << 2 << endl;
      }
    }
  }

  return 0;
}
