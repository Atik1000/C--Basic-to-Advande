// 1+2+3+4+..+n
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0,n,i;
//     cout<<"Enter the last number:";
//     cin>>n;
//     for ( i = 1; i <= n; i++)
//     {
//        sum=sum+i;
//     }
//     cout<<sum;
// }
// Sum of even numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0,n,i;
//     cout<<"Enter the last number:";
//     cin>>n;
//     for ( i = 2; i <= n; i=i+2)
//     {
//        sum=sum+i;
//     }
//     cout<<sum;
// }

#include<iostream>
using namespace std;
int main(){
    int sum=0,n,i;
    cout<<"Enter the last number:";
    cin>>n;
    for ( i = 1; i <= n; i=i+1)
    {
       sum=sum+i*i;
    }
    cout<<sum;
}
