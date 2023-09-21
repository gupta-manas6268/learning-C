    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
      int n, k;
      cin >> n >> k;
      vector<int> factors;
      for (int i = 2;i <= n;i++)
      {
        while (n % i == 0)
        {
          factors.push_back(i);
          n /= i;
        }
      }
      if (n > 1) factors.push_back(n);
     
      if (factors.size() < k)
      {
        cout << -1 << "\n";
        return 0;
      }
     
      vector<int> ans;
      for (int i = 0;i < k - 1;i++)
        ans.push_back(factors[i]);
     
      int last = 1;
      for (int i = k - 1;i < factors.size();i++)
        last *= factors[i];
     
      ans.push_back(last);
     
      for (int i = 0;i < ans.size();i++)
        cout << ans[i] << " ";
      cout << "\n";
      return 0;
    }