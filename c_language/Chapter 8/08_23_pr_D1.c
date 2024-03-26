#include <stdio.h>
#include <string.h>

void slice(char *st, int m, int n){
    int i = 0;
    while((m+i)<=n){
        st[i] = st[i+m];
        i++;
    }
    st[i] = '\0';
}

int main(){
    char st[] = "Manasfdlskjalsjks";

    int n, m; scanf("%d %d", &m, &n);

    if(m == n){ puts(st);}

    else{
        slice(st, m, n);
        printf("%s", st);
    }
    
    return 0;
}