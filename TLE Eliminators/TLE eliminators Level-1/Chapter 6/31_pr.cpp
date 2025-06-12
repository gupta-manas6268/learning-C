#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool coprime(int a, int b){
    vector<int> vec1; vector<int> vec2;

    int i = 2, j = 0;
    int size1 = 0, size2 = 0;

    bool ans = false;

    while (a > 0){
        if(a % i == 0){ vec1.push_back(i); i--;}

        if(i == vec1[size1 - 1]){ size1--;}
        size1++;

        i++;
    }
    while (b > 0){
        if(b % j == 0){ vec1.push_back(j); j--;}
        
        if(j == vec1[size2 - 1]){ size2--;}
        size2++;

        j++;
    }

    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(vec1[i] == vec2[j]){ ans = true;}

        }
    }
    
    return ans;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin>>n;
        int arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        vector<int> vec;
        int size = 0;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                bool ans = coprime(arr[i], arr[j]);

                if(ans == false){
                    int a = arr[i] + arr[j];

                    vec.push_back(a);
                    size++;
                }
            }
        }
        int maximum = 0;
        for(int i=0; i<size; i++){
            maximum = max(maximum, vec[i]);t
        }

        cout << maximum << endl;
    }
}