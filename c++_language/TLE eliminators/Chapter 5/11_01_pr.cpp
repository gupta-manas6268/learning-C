    #include <bits/stdc++.h>
    using namespace std;
    int main(){
    	int t;
    	cin >> t;
    	while (t--){
    		long long n;
    		cin >> n;
    		vector<long long> almostDivisors(n);
    		for (long long i = 0; i < n; i++)
    			cin >> almostDivisors[i];
     
    		sort(almostDivisors.begin(), almostDivisors.end());
     
    		long long x = almostDivisors[0] * almostDivisors[n - 1];
    		vector<long long> divisors;
    		for (long long i = 2; i * i <= x; i++){
    			if (x % i != 0)
    				continue;
    			int a = i;
    			int b = x / i;
    			if (a != b){
    				divisors.push_back(a);
    				divisors.push_back(b);
    			}
    			else
    				divisors.push_back(a);
    		}
    		sort(divisors.begin(), divisors.end());
     
    		if (almostDivisors == divisors)
    			cout << x << "\n";
    		else
    			cout << -1 << "\n";
    	}
    	return 0;
    }