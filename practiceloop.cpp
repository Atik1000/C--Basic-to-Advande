// Display Multiplication table
/*
#include<iostream>
using namespace std;
int main(){
    int num,i;
    cin>>num;
    for(i=1;i<=10;i++){
        cout<<num<<"X"<<i<<"="<<num*i<<endl;

    }
}
*/
// Factorial number
/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <=n; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }

    return 0;
}
*/
// Prime number
/*
#include <iostream>
using namespace std;

int main() {
    int i, n;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;
}
*/
// Digit of sum
/*
#include<iostream>

using namespace std;

int main()
{
	int number, reminder, digitSum;
	
	cout << "Please Enter the Number to calculate Sum of Digits =  ";
	cin >> number;
	
	for(digitSum = 0; number > 0; number = number / 10)
	{
    	reminder = number % 10;
    	digitSum += reminder;
    	
    	cout << "\nDigit = " << reminder << " and the Digit Sum = " << digitSum;
	}
	cout << "\nThe Sum of all Digits in a given Number = " << digitSum;
		
 	return 0;
}
*/
// Find LCM
/*
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, max;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    // maximum value between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
            ++max;
    } while (true);
    
    return 0;
}
*/
// Find GCD
/*
#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }

    cout << "HCF = " << n1;
    return 0;
}
*/
// Paline dorme
/*
#include <iostream>
using namespace std;
int main()
{
    int i, n, r, s = 0;

    cout << "\n Enter The Number:";
    cin >> n;

    for (i = n; i > 0;)
    {
        r = i % 10;
        s = s * 10 + r;
        i = i / 10;
    }

    if (s == n)
    {
        cout << n << " is a Palindrome Number";
    }
    else
    {
        cout << n << " is a not Palindrome Number";
    }
}
*/
// Armstrong number
/*
#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
        
        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
*/
// Sreong number
/*
    #include<iostream>
    using namespace std;
    //main Program
    int main()
    {
        int ip,sum=0;
        cout<<"Enter number to check: ";
            //user input
        cin>>ip;
        int save=ip;
        //logic to check for Strong Number starts
        while(ip)
        {
            int num=ip%10;
            int fact = 1;
            //finding factorial of each digit of input
            for(int i=num;i>0;i--)
            {
                fact=fact*i;
            }
            sum+=fact;
            ip/=10;
        }
        //checking for Strong Nunber
        if(sum==save)
        {
            cout<<save<< " is a Strong Number";
        }
        else
        {
            cout<<save<<" is not a Strong Number";
        }
        //logic ends
        return 0;
    }
    */
//    count number of digit in a number
#include <iostream>
using namespace std;

int main()
{

    cout << " Program to count the number of digits in a given number\n";

    //variable declaration
    int n, n1, num = 0;

    //taking input from the command line (user)
    cout << " Enter a positive integer :  ";
    cin >> n;

    n1 = n; //storing the original number

    //Logic to count the number of digits in a given number
    while (n != 0)
    {
        n /= 10; //to get the number except the last digit.
        num++;   //when divided by 10, updated the count of the digits
    }

    cout << "\n\nThe number of digits in the entered number: " << n1 << " is " << num;

    return 0;
}