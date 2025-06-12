    #include<bits/stdc++.h>
    using namespace std;
     
    bool prime[200001];
    void SieveOfEratosthenes()
    {
        memset(prime, true, sizeof(prime));
        for (int p = 2; p * p <= 200000; p++)
        {
            if (prime[p] == true)
            {
                for (int i = p * p; i <= 200000; i += p)
                    prime[i] = false;
            }
        }
    }
    int main()
    {
        int t;
        cin >> t;
        SieveOfEratosthenes();
        while (t--) {
            int d;
            cin >> d;
            long long p, q;
            for (int i = 1 + d;; i++)
            {
                if (prime[i])
                {
                    p = i;
                    break;
                }
            }
            for (int i = p + d;;i++)
            {
                if (prime[i])
                {
                    q = i;
                    break;
                }
            }
            cout << min(p * q, p * p * p) << "\n";
        }
    }