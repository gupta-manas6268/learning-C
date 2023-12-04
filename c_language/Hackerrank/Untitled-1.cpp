#include <iostream>
 
using namespace std;
 
int main()
{
    int arr[3][3];
    
    cout << "Enter the elements of the array: " << endl;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }
    
    int max[3];
    
    for(int i=0; i<3; i++){
        max[i]= arr[i][0];
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(max[i] >= arr[i][j]){
            }
            else {
                max[i] = arr[i][j];
            }
        }
    }
    
    int maximum = max[0];
    
    for(int i=0; i<3; i++){
        if(maximum >= max[i]){}
        
        else{
            maximum = max[i];
        }
    }
    
    cout << "The maximum element of the 2-D array is: " << maximum;
    
    return 0;
}
