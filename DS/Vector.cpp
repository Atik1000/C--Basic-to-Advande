// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int>myVector(3,1); /// {}
//     myVector.push_back(32); /// {3}
//     myVector.push_back(54); /// {3, 2}
//     myVector.push_back(1); /// {3, 2, 1}

//     // sort(myVector.begin(), myVector.end()); /// Intro Sort -> {Insertion, Quick, Heap}

//     for(int i = 0; i < myVector.size(); i++)
//     {
//          cout << myVector[i] << " "<<endl;
//         // printf("%d\n",myVector[i]);
//     }

//     cout << myVector.size() << endl;
// // }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> myVector; /// {}
    vector<int>::iterator it;
    for (int i = 0; i <= 5; i++)
    {
        myVector.push_back(i);
    }

    for (int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << " "
             << "\t";
    }
    it = myVector.begin();
    cout << *it << endl;
}