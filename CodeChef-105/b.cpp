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
        int n; cin >> n;

        vector<int> num(n);
        vector<int> def;
        cin >> num[0];

        int first = num[0];
        bool check = true;
        ll sum = 1LL * num[0];
        for(int i = 1; i < n; i++){
            cin >> num[i];
            if(num[i] != first){
                check = false;
            }
            //def.push_back(abs(num[i] - num[i - 1]));

            sum += 1LL * num[i];
        }

        if(check){
            cout << "Yes" << endl;
        }
        else if(sum % n != 0){
            cout << "No" << endl;
        }
        else{
            ll div_sum = 0;
            for(int i = 0;i < n; i++){
                div_sum += 1LL * num[i] / 2;
            }

            if(div_sum % n == 0){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
  return 0;
}
