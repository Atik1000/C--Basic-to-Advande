// #include <iostream>
// using namespace std;
// int main()
// {
//     int digit;
//     cin >> digit;
//     switch (digit)
//     {
//     case 0:
//         cout << "Zero";
//         break;

//     case 1:
//         cout << "One";
//         break;

//     case 2:
//         cout << "Two";
//         break;

//     default:
//         break;
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    ch=tolower(ch);
    switch (ch)
    {
    case 'a':

    case 'e':

    case 'i':

    case 'o':

    case 'u':
        cout << "Vowel";
        break;

    default:
        cout << "Consonant";
        break;
    }
}