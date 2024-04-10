#include <bits/stdc++.h>
using namespace std;
bool checkPrime(int no){
	for (int x = 2; x * x <= no; x++)
	{
		if (no % x == 0)
			return false;
	}
	return true;
}
int main(){
	int n, k;
	cin >> n >> k;
	int count = 0;
	vector<int> isPrime(n + 1, false);
	vector<int> allPrimes;

	for (int no = 2; no <= n; no++){

		if (checkPrime(no)){
			isPrime[no] = true;
			allPrimes.push_back(no);
		}
	}
	for (int i = 0; i < (int)allPrimes.size() - 1; i++){
		int x = allPrimes[i], y = allPrimes[i + 1];

		int formedNo = x + y + 1;
		if (formedNo <= n && isPrime[formedNo])
			count++;
	}
	if (count >= k)
		cout << "YES\n";
	else
		cout << "NO\n";
		
	return 0;
}