/*
File Name: mtalturki42_A.cpp
Name: Mohammed Alturki
Date: 09/14/2021
Description: finding gcd of two numbers using Euclid's algorithm
*/

#include<iostream>
#include<cstdlib>

using namespace std;


//finding gcd using Euclid's algorithm
int gcd(int m, int n)
{
    if (m == 0 || n == 0)
    {
        return 0;
    }

    if (m == n)
    {
        return m;
    }

    if (m > n)
    {
        return gcd(m-n, n);
    }

    return gcd(m, n-m);
}




int main(int argc, char *argv[])
{
    if(argc!=3)
    {
        cout<<"\n\nUsage: commandLine.rxe m n\n (where m & n are non-zero, non-negative numbers)\n\n";
        return 0;
    }

    //converting first agrument(number) to integer and setting it to m
    int m = atoi(argv[1]);

    //converting second agrument(number) to integer and setting it to n
    int n = atoi(argv[2]);

    if(n==0 && m==0)
    {
        cout<<"gcd(0, 0) is undefined"<<endl;
    }

    else
    {
        cout<<"gcd("<<m<<", "<<n<<") is "<<gcd(m, n)<<endl;
    }

    return 0;
}
