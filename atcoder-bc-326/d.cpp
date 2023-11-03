#include <bits/stdc++.h>
using namespace std;


typedef vector<int> vi;
typedef vector<long long> vii;
typedef pair<int,int> pii;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define tc int t; cin>>t; while(t--)

void solve()
{
    
    int n, m; cin >> n >> m;

    vi num(n);

    for(int i = 0; i < n; i++){
        cin >> num[i];
    }

    sort(all(num));

    int cnt = 1, mx_cnt = 1;
    for(int i = 1; i < n; i++){
        if(num[i] - num[i ] < m){
            cnt++;
            mx_cnt = max(mx_cnt, cnt);
        }
        else{
            cnt--;
        }
    }

    cout << mx_cnt << endl;

    // for(auto a: num) cout << a << " ";
    // cout << endl;

}


int main()
{
    bismillah();

    //tc
    //{
        solve();
    //}

}


