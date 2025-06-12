// Problem-3: Largest substring which repeats atleast
//             twice.
// Ans=> See Slide-1, Page-34 to 37.
//      By using Custom Unordered-Map, TC = O(n*log(n)).
//   See 'Custom Unordered-Map' on Internet for better
//    understanding.
// 
//   'Custom Unordered-Map' has its own 'Hash' table which
//    reduces Collision by a lot.


// This is a H.W. Question. Solve it Yourself.

// 

// 1044. Longest Duplicate Substring
// https://leetcode.com/problems/longest-duplicate-substring/description/




#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}


class Solution {
public:
    int mul(int a, int b, int mod){
        return (int)((1ll * a * b) % mod);
    }

    vector<pair<int,int>> powers(int n, int BASE1, int BASE2, int MOD){
        vector<pair<int,int>> Pow(n+1);
        Pow.assign(n+1, {1,1});
        for(int i=0; i < n; i++){
            Pow[i + 1] = {(1ll * Pow[i].first * BASE1) % MOD,
                (1ll * Pow[i].second * BASE2) % MOD};
        }

        return Pow;
    }

    vector<pair<int,int>> Hash(string s, vector<pair<int,int>> Hashes, vector<pair<int,int>> Pow, int MOD){
        // We are maintaining 1-based indexing, because it is better.
        for(int i=0; i < s.size(); i++){
            Hashes[i + 1] = {(1ll * Hashes[i].first + mul((s[i] - 'a' + 1), Pow[i].first, MOD) + MOD) % MOD,
                             (1ll * Hashes[i].second + mul((s[i] - 'a' + 1), Pow[i].second, MOD) + MOD) % MOD};
            // '1ll' in above line ensures that the multiplication operation is performed  
            // in 64-bit integer space (long long), avoiding overflow for 32-bit integers.
        }

        return Hashes;
    }

    // 'l' & 'r' => They are in 0-based indexing.
    pair<int,int> get(int l, int r, vector<pair<int,int>> &Hashes, vector<pair<int,int>> &Pow, int MOD){
        l++, r++;

        int hash1 = (1ll * Hashes[r].first - mul(Hashes[l-1].first, Pow[r-l+1].first, MOD) + MOD) % MOD;
        int hash2 = (1ll * Hashes[r].second - mul(Hashes[l-1].second, Pow[r-l+1].second, MOD) + MOD) % MOD;

        return {hash1, hash2};
    }

    string longestDupSubstring(string s) {
        const int MOD = 1e9 + 7;
        const int BASE1 = 5689; // '5689' & '8861' are random prime
        const int BASE2 = 8861; //  no.'s

        int n = s.length();
        
        vector<pair<int,int>> Pow = powers(n, BASE1, BASE2, MOD);

        vector<pair<int,int>> Hashes(n+1);
        Hashes.assign(s.size() + 1, {0,0});
        Hashes = Hash(s, Hashes, Pow, MOD);

        string ans = "";
        bool Yes = false;
        int left = 1, right = n;
        vector<pair<pair<int,int>, int>> vec;
        while(left <= right){
            int mid = (left + right)/ 2;

            for(int l=1; l <= (n-mid+1); l++){
                int r = (mid+l-1);
                pair<int,int> hash = get(l, r, Hashes, Pow, MOD);
                vec.push_back({hash, l});
            }
            sort(vec.begin(), vec.end());
            for(int i=1; i < vec.size(); i++){
                if((vec[i].first.first == vec[i-1].first.first) && (vec[i].first.second == vec[i-1].first.second)){
                    int l = vec[i].second, r = (mid+l-1);
                    string temp;
                    for(int i=l-1; i <= r-1; i++){
                        temp += s[i];
                    }
                    ans = temp;

                    Yes = true; break;
                }
            }

            // Binary Search
            if(Yes == true){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }

        return ans;
    }
};