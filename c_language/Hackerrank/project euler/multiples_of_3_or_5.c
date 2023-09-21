#include <stdio.h>

long long int solve(int n){
    long long int ans = 0;
    long long int n3 = (n-1)/3;
    long long int sum_of_3 = 3*(n3*(n3+1)/2);
    long long int n5 = (n-1)/5;
    long long int sum_of_5 = 5*(n5*(n5+1)/2);
    long long int n15 = (n-1)/15;
    long long int sum_of_15 = 15*(n15*(n15+1)/2);
    ans = sum_of_3 + sum_of_5 - sum_of_15;
    return ans;
}

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d", &n);
        long long int ans = solve(n);
        printf("%lld\n",ans);
    }
    return 0;
}