#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
	ios::sync_with_stdio(false); cin.tie(NULL);

	int tc; cin >> tc;

	while (tc--){
		int n; cin >> n;

		vector<int> almostDivisors(n);
		for(int i=0; i<n; i++){
			cin >> almostDivisors[i];
		}
		sort(almostDivisors.begin(), almostDivisors.end());

		int x = almostDivisors[0] * almostDivisors[n - 1];
		vector<int> divisors;

		for(int i=2; i*i <= x; i++){
			if(x % i != 0){
				continue;
			}
			int a = i;
			int b = x / i;
			if(a != b){
				divisors.push_back(a);
				divisors.push_back(b);
			}
			else{
				divisors.push_back(a);
			}
			sort(divisors.begin(), divisors.end());

			if(almostDivisors == divisors){
				cout << x << "\n";
			}
			else{
				cout << -1 << "\n";
			}
		}
	}
}