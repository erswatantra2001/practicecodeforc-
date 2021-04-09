//functions in c++
//add of two number example...
/*
#include<iostream>
using namespace std;

void print(int num)
{
    cout << num << endl;
}

int add(int num1,int num2){
    print(num1);
    print(num2);

    int sum = num1+num2;
    return sum;
     
}
int main()
{
    int val1;
    cout << "enter the value 1 : ";
    cin >> val1;

    int val2;
    cout << "enter the value 2 : ";
    cin >> val2;

    cout << "the sum is : "<< add(val1,val2) << endl;
    return 0;
} 

//print factorial of a number...
//by iterative method...

#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i= n;i >=1;i--)
    {
        fact = fact * i;
        n--;
    }
}

int main(){
    int number;
    cout << "enter the number : " << endl;
    cin >> number;

    cout << "factorial of the number is : " << factorial(number) << endl;
    return 0;
}


//check that the number is prime or not...

#include <iostream>
#include<cmath>
using namespace std;

bool isprime(int number)
{
    for (int i = 2; i < sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int a;
    int b;
    cout << "enter the value of a and b : ";
    cin >> a >> b;

    for(int i = a;i <= b;i++)
    {
        if(isprime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}


//fibbnocci series of number between two numbers...

#include<iostream>
using namespace std;

void fibb(int n)
{
    int fib1 = 0;
    int fib2 = 1;
    int next;
    for(int i = 0; i < n; i++)
    {
        cout << fib1 << endl;
        next = fib1 + fib2;
        fib1 = fib2;
        fib2 = next;
    }
    return;
}

int main()
{
    int number ;
    cout << "enter the number : ";
    cin >> number;
    fibb(number);
    return 0;
}
*/

