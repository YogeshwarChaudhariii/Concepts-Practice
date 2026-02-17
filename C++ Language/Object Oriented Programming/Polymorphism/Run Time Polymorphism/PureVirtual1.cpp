#include<iostream>
using namespace std;

class Video
{
    protected:
        string Title;
        float Rating;

    public:
        Video(string StrTitle, float r)
        {
            Title = StrTitle;
            Rating = r;
        }

        virtual void Display() = 0;     // do - nothing function    (pure-virtual function)
};

class Video2 : public Video
{
    private:
        float VideoLength;

    public:
        Video2(string StrTitle, float r, float val): Video(StrTitle, r)        // Video2 constructor inherit with class Video constructor (StrTitle, r)
        {
            VideoLength = val;
        }

        void Display()
        {
            cout<<"This is amazing video with title: "<<Title<<endl;
            cout<<"Ratings: "<<Rating<<" out of 5 star"<<endl;
            cout<<"Length of this video is: "<<VideoLength<<" mins"<<endl;
        }
};

class Video3 : public Video
{
    private:
        int Words;

    public:
        Video3(string StrTitle, float r, int wc): Video(StrTitle, r)        
        {
            Words = wc;
        }

        void Display()
        {
            cout<<"This is amazing text tutorial with title: "<<Title<<endl;
            cout<<"Ratings of this text tutorial: "<<Rating<<" out of 5 star"<<endl;
            cout<<"Number of words in this text tutorial: "<<Words<<" words"<<endl;
        }
};

int main()
{
    string Title;
    float Rating, VideoLen;
    int Words;

    Title = "C++ Tutorial";
    VideoLen =  4.56;
    Rating = 4.89;

    Video2 v2(Title, Rating, VideoLen);
    v2.Display();



    Title = "C# Tutorial";
    Words =  433;
    Rating = 4.19;

    Video3 v3(Title, Rating, Words);
    // v2.Display();

    Video* p1[2];
    p1[0] = &v2;
    p1[1] = &v3;

    p1[0]->Display();
    p1[1]->Display();
    

    return 0;
}

// Pure virtual function is used to create abstract base class function
// Abstract base class having 1 pure virtual function compulsory
