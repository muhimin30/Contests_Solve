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
	
	int arr[12][12];
	bool ans = true;

	vector<bool> check(10, false);
	for(int i = 1; i <= 9; i++){
		for(int j = 1; j <= 9; i++){
			cin >> arr[i][j];
		}
	}

	for(int i = 1; i <= 9; i++){
		vector<bool> v_check(10, false);
		vector<bool> h_check(10, false);
		for(int j = 1; j <= 9; i++){
			if(v_check[arr[i][j]] == false){
				v_check[arr[i][j]]  = true;
			}
			else if(v_check[arr[i][j]]){
				ans = false;
			}
			if(h_check[arr[j][i]] == false){
				h_check[arr[j][i]]  = true;
			}
			else if(h_check[arr[j][i]]){
				ans = false;
			}
		}
	}

	// vector<bool> check1(10, false);
	// for(int i = 1; i <= 3; i++){
	// 	for(int j = 1; j <= 3; j++){
	// 		if(check1[arr[i][j]] == false){
	// 			check1[arr[i][j]]  = true;
	// 		}
	// 		else if(check1[arr[i][j]]){
	// 			ans = false;
	// 		}
	// 	}
	// }
	// check1.clear();
	// for(int i = 1; i <= 3; i++){
	// 	for(int j = 4; j <= 6; j++){
	// 		if(check1[arr[i][j]] == false){
	// 			check1[arr[i][j]]  = true;
	// 		}
	// 		else if(check1[arr[i][j]]){
	// 			ans = false;
	// 		}
	// 	}
	// }
	// check1.clear();
	// for(int i = 1; i <= 3; i++){
	// 	for(int j = 7; j <= 9; j++){
	// 		if(check1[arr[i][j]] == false){
	// 			check1[arr[i][j]]  = true;
	// 		}
	// 		else if(check1[arr[i][j]]){
	// 			ans = false;
	// 		}
	// 	}
	// }
	// check1.clear();
	// for(int i = 4; i <= 6; i++){
	// 	for(int j = 1; j <= 3; j++){
	// 		if(check1[arr[i][j]] == false){
	// 			check1[arr[i][j]]  = true;
	// 		}
	// 		else if(check1[arr[i][j]]){
	// 			ans = false;
	// 		}
	// 	}
	// }
	// check1.clear();
	// for(int i = 4; i <= 6; i++){
	// 	for(int j = 4; j <= 6; j++){
	// 		if(check1[arr[i][j]] == false){
	// 			check1[arr[i][j]]  = true;
	// 		}
	// 		else if(check1[arr[i][j]]){
	// 			ans = false;
	// 		}
	// 	}
	// }
	// check1.clear();
	// for(int i = 4; i <= 6; i++){
	// 	for(int j = 7; j <= 9; j++){
	// 		if(check1[arr[i][j]] == false){
	// 			check1[arr[i][j]]  = true;
	// 		}
	// 		else if(check1[arr[i][j]]){
	// 			ans = false;
	// 		}
	// 	}
	// }
	// check1.clear();
	// for(int i = 7; i <= 9; i++){
	// 	for(int j = 7; j <= 9; j++){
	// 		if(check1[arr[i][j]] == false){
	// 			check1[arr[i][j]]  = true;
	// 		}
	// 		else if(check1[arr[i][j]]){
	// 			ans = false;
	// 		}
	// 	}
	// }
	// check1.clear();
	// for(int i = 7; i <= 9; i++){
	// 	for(int j = 1; j <= 3; j++){
	// 		if(check1[arr[i][j]] == false){
	// 			check1[arr[i][j]]  = true;
	// 		}
	// 		else if(check1[arr[i][j]]){
	// 			ans = false;
	// 		}
	// 	}
	// }
	// check1.clear();
	// for(int i = 7; i <= 9; i++){
	// 	for(int j = 4; j <= 6; j++){
	// 		if(check1[arr[i][j]] == false){
	// 			check1[arr[i][j]]  = true;
	// 		}
	// 		else if(check1[arr[i][j]]){
	// 			ans = false;
	// 		}
	// 	}
	// }



	if(ans) {
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
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


