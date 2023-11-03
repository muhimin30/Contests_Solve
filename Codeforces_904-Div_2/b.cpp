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
    
    ll n; cin >> n;

    vii zero_pos;
    vii ans;
    string num; cin >> num;
    reverse(all(num));
    ll total_zero = 0;
    for(int i = 1; i <= n; i++){
        if(num[i - 1] == '0'){
            zero_pos.push_back(i);
            total_zero++;
        }
    }

    ll track = 0;
    ll cnt = 1;

    cout << num << endl;
    for(auto a:zero_pos) cout << a << " ";
    cout << endl;

    for(int i = 0; i < zero_pos.size(); i++){
        ans.push_back(zero_pos[i] - cnt + track);
        cout << "ind v " << zero_pos[i] << " cnt " << cnt << " track " << track << " V = " << zero_pos[i] - cnt + track << endl;
        track += zero_pos[i] - cnt;
        cnt++;
    }
    for(int i = 0; i < n - total_zero; i++){
        ans.push_back(-1);
    }
    

    for(auto a: ans) cout << a << " ";
    cout << endl;

}


int main()
{
    bismillah();

    tc
    {
        solve();
    }

}


