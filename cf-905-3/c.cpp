#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

const ll mx = 1e18;
int main()
{
  bismillah();
  int t; cin >> t;
  while(t--){
    ll n, k; cin >> n >> k;
    ll mn = mx;

    ll prod = 1;
    vector<ll> num(n);

    for(int i = 0; i < n; i++){
      cin >> num[i];
      prod *= num[i];
    }

    if(prod % k == 0){
      cout << 0 << endl;
    }
    

  }

  return 0;
}
