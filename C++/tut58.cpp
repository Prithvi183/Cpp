#include<iostream>
#include<cstring>
using namespace std;

class CWH{
        protected:
        string title;
        float rating;
        public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display() = 0; // Do nothing function --> pure virtual function
};

class CWHVideo : public CWH{
    float videoLength;
    public:
    CWHVideo(string s, float r, float vl): CWH(s,r){
        videoLength = vl;
    }

    void display()
    {
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"Ratings: "<<rating<<" out of 5 stars."<<endl;
        cout<<"Length of the video is "<<videoLength<<" minutes."<<endl;
    }

};

class CWHText : public CWH{
    int words;
    public:
    CWHText(string s, float r, int wc): CWH(s,r){
        words = wc;
    }

    void display()
    {
        cout<<"This is an amazing text tutorial with title "<<title<<endl;
        cout<<"Ratings: "<<rating<<" out of 5 stars."<<endl;
        cout<<"No of word in this text tutorial is "<<words<<" words."<<endl;
    }

};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for code with harry video
    title = "Django tutorial.";
    rating = 4.89;
    vlen = 5.05;

    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // for code with harry textual tutorial
    title = "Django tutorial textual.";
    rating = 4.88;
    words = 750;

    CWHText djText(title, rating, words);
    // djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

/*
Rules for virtual functions
1. They cannot be static.
2. They are accessed by object pointers.
3. Virtual functions can be a friend of another class.
4. A virtual function in base class might not be used.
5. if a virtual function is defined in a base class, there is no necessity to redefine it in the derived class. 
*/