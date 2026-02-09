/* Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive) */

/*
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM
*/

#include<iostream>
using namespace std;

void DisplaySchedule(char cDiv)
{
    if ((cDiv == 'A') || (cDiv == 'a'))
    {
        cout<<"Your exam at 7 AM"<<endl;
    }
    else if ((cDiv == 'B') || (cDiv == 'B'))
    {
        cout<<"Your exam at 8.30 AM"<<endl;
    }
    else if ((cDiv == 'C') || (cDiv == 'c'))
    {
        cout<<"Your exam at 9.20 AM"<<endl;
    }
    else if ((cDiv == 'D') || (cDiv == 'd'))
    {
        cout<<"Your exam at 10.30 AM"<<endl;
    }
    else
    {
        cout<<"Invalid choice"<<endl;
    }
}

int main()
{
    char ch = '\0';

    cout<<"Enter your division: "<<endl;
    cin>>ch;

    DisplaySchedule(ch);

    return 0;
}