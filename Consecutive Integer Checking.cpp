/*
File Name: mtalturki42_B.cpp
Name: Mohammed Alturki
Date: 09/14/2021
Description: finding gcd of two numbers using Consecutive Integer Checking algorithm
*/

#include<iostream>
#include<cstdlib>

using namespace std;


//finding gcd using Consecutive Integer Checking algorithm
int gcd(int m, int n) 
{
    int min;

    //Getting the minimum of m and n
    if(m<n)
    {
        min = m;
    }

    else
    {
        min = n;
    }

    while(min > 0) 
    {

        if(m % min == 0 && n % min == 0)
        {
            return min;
        }

        min = min - 1;
    }
    return 0;
}


int main(int argc, char *argv[])
{
    //if the user did not enter 2 numbers
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