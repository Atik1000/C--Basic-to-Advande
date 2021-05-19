// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i <= 10; i += 2)
//     {
//         /* code */
//         if (i == 10)
//         {
//             break;
//         }
//         cout << i << endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i <= 100; i += 2)
//     {
//         /* code */
//         if (i == 10)
//         {
        
//             continue;
//         }
//         cout << i << endl;
//     }
// }


#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 100; i += 3)
    {
      
        if (i == 9)
        {
        
            continue;
        }
        if(i>13){
            break;
        }
        cout << i << endl;
    }
}

 