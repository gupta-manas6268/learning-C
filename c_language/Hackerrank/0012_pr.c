t
// Small Triangles, Large Triangles
// This code is working properly but didn't work in hackkerrank.

// https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem?isFullScreen=true



#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void Swaping(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int n, triangle *tr){
    for(int i=0; i<n; i++){
        if(arr[i] > arr[i+1]){
            Swaping(&arr[i], &arr[i+1]);
            Swaping(&tr[i].a, &tr[i+1].a);
            Swaping(&tr[i].b, &tr[i+1].b);
            Swaping(&tr[i].c, &tr[i+1].c);

            for(int j=i; j>=1; j--){
                if(arr[j-1] > arr[j]){
                    Swaping(&arr[j-1], &arr[j]);

                Swaping(&tr[j-1].a, &tr[j].a);
                Swaping(&tr[j-1].b, &tr[j].b);
                Swaping(&tr[j-1].c, &tr[j].c);
                }
                else{
                    break;
                }
            }
        }
    }
}
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    int ans[n];

    for(int i=0; i<n; i++){
        int p = (tr[i].a + tr[i].b + tr[i].c)/2;

        ans[i] = p * (p-tr[i].a) * (p-tr[i].b) * (p-tr[i].c);

    }
    sort(ans, n, tr);
    
}

int main(){
	int n;
    scanf("%d", &n);

	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}

	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}

	return 0;
}