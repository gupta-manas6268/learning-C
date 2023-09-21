#include <stdio.h>

int main(){
    char st1[100]; gets(st1);
    char st2[100];
    int n, m; scanf("%d %d", &n, &m);

    if(m == 0){
        strcpy(st2, st1);
        printf("%s", st2);
    }
    else{
        for(int i=n-1; i<=n-1+m; i++){
            st2[i-n+1] = st1[i];
        }    
        st2[m] = '\0';

        printf("%s", st2);
    }
    
    return 0;
}