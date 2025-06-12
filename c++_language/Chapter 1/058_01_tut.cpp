// There is no Screenshot notes in this Lecture.

// Because of line-18, this code will give error.

#include<bits/stdc++.h>
using namespace std;

class CodeWithHarry{

protected:
    string title;
    float rating;
public:
    CodeWithHarry(string s, float r){
        title = s;
        rating = r;
    }
    virtual void display() = 0; // do-nothing function --> pure virtual function
};

class CodeWithHarryVideo : public CodeWithHarry{
    float videoLength;
public:
    CodeWithHarryVideo(string s, float r, float vL) : CodeWithHarry(s, r){
        videoLength = vL;
    }

    // void display(){
    //     cout << "This is an amazing video with title " << title << endl;
    //     cout << "Ratings of this Video: " << rating << " out of 5 stars" << endl;
    //     cout << "Length of this video is: " << videoLength << " minutes" << endl;
    // }
};

class CodeWithHarryText : public CodeWithHarry{
    int words;
public:
    CodeWithHarryText(string s, float r, int wC) : CodeWithHarry(s, r){
        words = wC;
    }

    void display(){
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No. of words in this text tutorial is: " << words << " words" << endl;
    }
};

int main(){
    string title;
    float rating, videoLength;
    int words;

    // For Code With Harry Video
    title = "Django tutorial Video";
    videoLength = 4.56;
    rating = 4.89;

    CodeWithHarryVideo djVideo(title, rating, videoLength);
    djVideo.display();

    cout << endl;

    // For Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;

    CodeWithHarryVideo djText(title, rating, videoLength);
    // djText.display();  // This line will work fine.

    CodeWithHarry* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    cout << endl;
    tuts[1]->display();

    return 0;
}