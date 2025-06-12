#include<bits/stdc++.h>
using namespace std;

/*
 * Create classes Rectangle and RectangleArea
 */
class RectangleArea{
public:
    void read_input(){
        int width, height; cin >> width >> height;
    }
    void display(){

    }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();

    return 0;
}