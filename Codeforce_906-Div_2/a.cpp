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
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vi num(3);
        map<int, int> freq;

        for(int i = 0; i < n; i++){
            int temp; cin >> temp;

            freq[temp] ++;
        }

        if(freq.size() > 2){
            cout << "No" << endl;
        }
        else if(freq.size() == 1){
            cout << "Yes" << endl;
        }
        else{
            int ind = 0;
            for(auto a: freq){
                num[ind] = a.second;
                ind++;
            }

            if(abs(num[0] - num[1]) <= 1 ){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }

}


int main()
{
    bismillah();

    //tc
    //{
        solve();
    //}

}


