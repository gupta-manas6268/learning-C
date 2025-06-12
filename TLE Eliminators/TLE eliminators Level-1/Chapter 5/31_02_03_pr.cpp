    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin >> n;
     
     
        vector<long long> powerOf9(12);
     
        powerOf9[0] = 1;
        for (int i = 1;i < 12;i++)
            powerOf9[i] = powerOf9[i - 1] * 9;
     
        string s = to_string(n);
        long long len = s.length(), ans = 0;
        long long prefixProduct = 1;
        for (int i = 0;i < len;i++)
        {
            int digit = s[i] - '0';
            int remDigits = len - i - 1;
            if (digit > 1)
            {
                long long product = prefixProduct * (digit - 1) * (powerOf9[remDigits]);
                ans = max(ans, product);
            }
            else if (i == 0 && digit == 1)
            {
                long long product = (powerOf9[remDigits]);
                ans = max(ans, product);
            }
            prefixProduct = prefixProduct * (digit);
        }
        ans = max(ans, prefixProduct);
        cout << ans << "\n";
        return 0;
    }