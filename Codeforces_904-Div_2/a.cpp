#include <bits/stdc++.h>
using namespace std;


typedef vector<int> vi;
typedef vector<long long> vii;
typedef pair<int,int> pii;
typedef double dl;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define tc int t; cin>>t; while(t--)
#define TC ll t; cin>>t; while(t--)

void solve()
{
    
    ll n, k;
    cin >> n >> k;

    if(k < 9 && n <= k){
        cout << k << endl;
    }
    else{
        string s = to_string(n);
        ll sum = 0;
        for(auto a: s) sum += a - '0';

        if(sum % k == 0){
            cout << n << endl;
        }
        else{
            for(ll i = n; ; i++){
                string st = to_string(i);
                ll sum_t = 0;
                for(auto a: st) sum_t += a - '0';
                if(sum_t % k == 0){
                    cout << i << endl;
                    break;
                }

            }
        }
    }

}


int main()
{
    bismillah();

    tc
    {
        solve();
    }

}


