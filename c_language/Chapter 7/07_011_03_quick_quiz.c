l
# include <stdio.h>
void show ( int ( *q )[ 4 ], int row, int col){
    int i, j ;
    for ( i = 0 ; i < row ; i++ ){
        for ( j = 0 ; j < col ; j++ )
            printf ( "%d ", * ( q + i * col + j ) ) ;
            printf ( "\n" ) ;
}
    printf ("\n" ) ;
}
int main( ){    
    int a[ 3 ][ 4 ] = {(1, 2, 3, 4), (5, 6, 7, 8), (9, 0, 1, 6)};
    show ( a, 3, 4 ) ;
    t // This code is not working from page-275 of Let Us C.
    
    return 0 ;
}
