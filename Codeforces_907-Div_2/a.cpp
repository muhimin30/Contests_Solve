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
    
    int n; cin >> n;
    vector<int> num(n + 1);

    num[0] = 0;

    for(int i = 1; i <= n; i++){
        cin  >> num[i];
    }
    bool check = false;
    for(int i = 3; i <= n - 1; i++){
        if(num[i] <= num[i + 1]){
            check = true;
            break;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    for(int i = 5; i <= n - 1; i++){
        if(i == 8){
            break;
        }
       // cout << num[i] << " " << num[i + 1] << endl;
        if(num[i] <= num[i + 1]){
            check = true;
            
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    for(int i = 9; i <= n - 1; i++){
        if(i == 16){
            break;
        }
        if(num[i] <= num[i + 1]){
            check = true;
            
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
    for(int i = 17; i <= n - 1; i++){
        
        if(num[i] <= num[i + 1]){
            check = true;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

}


int main()
{
    bismillah();

    tc
    {
        solve();
    }
}


