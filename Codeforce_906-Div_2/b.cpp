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
    string s, t; cin >> s >> t;

    bool check = true;
    for(int i = 0; i < s.size() - 1; i++){
        //cout << s[i] << " " << s[i + 1] << endl;
        if(s[i] == s[i + 1]){
            //cout <<"HELLO" << endl;
            check = false;
        }
    }

    if(check){
        cout << "Yes" << endl;
    }
    else{
        bool same = false;
        for(int i = 0; i < t.size() - 1; i++){
            if(t[i] == t[i + 1]){
                same = true;
            }
        }
        if(same){
            cout << "No" << endl;
        }
        else{
            char first = t[0], last = t[t.size() - 1];

            for(int i = 0; i < s.size() - 1; i++){
                if(s[i] == s[i + 1]){
                    if(s[i] == first || s[i + 1] == last){
                        cout << "No" << endl;
                        return;
                    }
                }
            }
            cout << "Yes" << endl;
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


