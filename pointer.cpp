// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 5;
//     int *p;
//     p = &x;
//     cout << x << endl;
//     cout << &x << endl;
//     cout << p << endl;
//     cout << *p << endl;
// }
#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 10;
    int *p1, *p2;
    p1 = &x;
    p2 = &y;
    int sum=*p1+*p2;
    cout<<sum;
}