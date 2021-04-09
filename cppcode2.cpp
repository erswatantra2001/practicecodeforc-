// practice questions on functions using c++...

//example 1

//sum of first 10 natural numbers...
/*
#include<bits/stdc++.h>
using namespace std;

int naturalsum(int n) {
    int num = 0;
    for(int i = 1;i <= n;i++)
    {
        num = num + i;
    }
    return num;
}

int main()
{
    int number;
    cout << "enter the number : " << endl;
    cin >> number;

    cout << naturalsum(number) << endl;
    return 0;
}

//check that the entered nuumbers are pythagorean triplet or not

#include<iostream>
using namespace std;

bool check(int x,int y,int z)
{
    int a = max(x,max(y,z));
    int b,c;
    if(a == x)
    {
        b = y;
        c = z;
    }

    else if(a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = y;
        c = x;
    }
    if(a*a == b*b + c*c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x,y,z;
    cout << "enter the value of x, y, z : ";
    cin >> x >> y >> z;
    if(check(x,y,z))
    {
        cout << "pythagorean triplet ";
    }
    else
    {
        cout << "not a pythagorean triplet ";
    }
    return 0;
}

*/
