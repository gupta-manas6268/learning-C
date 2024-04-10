int M = 1e9 + 7;

ll int pow(ll int a, ll int e){
    if(e == 0)
        return 1ll;
    else if(e == 1)
        return a % M;
    
    else{
        long long int p = pow(a, e/2);

        if(e % 2 == 0)
            return ((p * p)%M);
        else
            return ((p * a * p)%M);
    };

    pos(a, b);
}