void precomput(){
    fact[0] = fact[1] = 1;
    for(int i=2; i<N; i++){

        fact[i] = fact[i-1] * i;
        fact[i] %= MOD;
    }

    for(int i=N-2; i>=0; i--){
        invfact[i] = modinv(fact[i]);   // return, pow(fact[i], MOD-2)
        invfact[i] %= MOD;
    }
}

ll int nCr(ll int x, ll int y){
    if(y > x)
        return 0;

    ll int num = fact[x];

    num *= invfact[y];
    num %= MOD;

    num *= invfact[x-y];
    num %= MOD;
    
    return num;
}