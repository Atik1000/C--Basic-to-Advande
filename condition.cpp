// positive and negetive
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     if (num > 0)
//     {
//         cout << "Positive number is:" << num;
//     }
//     else if (num < 0)
//     {
//         cout << "negetive number is:" << num;
//     }
//     else
//     {
//         cout << " number is zero:" << num;
//     }
// }
// even and odd
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     if (num % 2 == 0)
//     {
//         cout << "Even number:" << num;
//     }
//     else
//     {
//         cout << "Odd number is:" << num;
//     }
// }
// Large nad small between three
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num1, num2, num3;
//     cin >> num1 >> num2 >> num3;
//     if (num1 > num2 && num1 > num3)
//     {
//         cout << "Number1 is Big:" << num1;
//     }
//     else if (num2 > num1 && num2 > num3)
//     {
//         cout << "Number2 is Big:" << num2;
//     }
//     else
//     {
//         cout << "Number3 is Big:" << num3;
//     }
// }

// pass or fail
#include <iostream>
using namespace std;
int main()
{
    int Marks;
    cin >> Marks;
    if (Marks >= 33)
    {
        cout << "You are pass:" << Marks;
    }

    else
    {
        cout << "You are fail:" << Marks;
    }
}
// Absolute value
// Letter grade