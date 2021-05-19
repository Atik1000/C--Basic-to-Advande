#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> student[i];
        sum = sum + student[i];
    }
    float avg=(float) sum/n;
    cout<<"avg"<<avg<<endl;
    int max=student[0];
    for (int i = 1; i < n; i++)
    {
        if(max<student[i])
        {
            max=student[i];
           
        }
    }
    int min=student[0];
    for (int i = 1; i < n; i++)
    {
        if(min>student[i])
        {
            min=student[i];
            cout<<min;
        }
    }
     cout<<max<<endl;
     cout<<min<<endl;
}