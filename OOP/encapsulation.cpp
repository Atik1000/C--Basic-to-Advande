// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     int id;
//     string name;
//     void display()
//     {
//         cout<<id<<endl;
//         cout<<name<<endl;
//     }
// };
// int main(){
//     Student s1;
//     s1.id=101;
//     s1.name="Atik";
//     s1.display()
// }
// #include<iostream>
// using namespace std;
// class Student{

//     int id;

//     void display()
//     {
//         cout<<id<<endl;

//     }
// };
// int main(){
//     Student s1;
//     s1.id=101;

//     s1.display()
// }
#include <iostream>
using namespace std;
class Student
{
  
  private:
    int id;

public:
    void setId(int x)
    {

        id = x;
    }
    int getId()
    {
        return id;
    }
    void display()
    {
        cout << id << endl;
    }
};
int main()
{
    Student s1;
    s1.setId(101);
    cout << s1.getId();
}
