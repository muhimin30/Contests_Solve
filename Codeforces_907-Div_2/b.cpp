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
        int n, q; cin >> n >>q;
        vector<int>num(n);
        vector<int>x(1);

        for(int i = 0; i < n; i++){
            cin >> num[i];
        }

        cin >> x[0];
        for(int i = 1; i < q; i++){
            int temp; cin >> temp;
             if(x[x.size() - 1] > temp){
                //cout << temp << endl;
                x.push_back(temp);
             }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < x.size(); j++){
                if(num[i] % (1<<x[j]) == 0){
                    //cout << num[i] <<" "<< x[j] << endl;
                    num[i] += 1 << (x[j] - 1);
                }
            }
        }

        //for(auto a:x) cout << a << " ";
        //cout << endl;
        for(auto a: num){
            cout << a << " ";
        }
        cout << endl;
    }

  return 0;
}
