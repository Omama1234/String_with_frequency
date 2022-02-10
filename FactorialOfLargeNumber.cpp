/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
#define MAX 1000000

using namespace std;

int multiply(int x,int res[],int res_size)
{
    int carry=0;
    for(int i=0;i<res_size;i++)
    {
        int prod=res[i]*x+carry;
        res[i]=prod%10;
        carry=prod/10;
        
    }
    while(carry)
    {
        res[res_size]=carry%10;
        carry=carry/10;
        res_size++;
    }
    return res_size;
}

void factorial(int n)
{
    int res[MAX];
    int res_size=1;
    res[0]=1;
    for(int i=2;i<=n;i++)
    {
        res_size=multiply(i,res,res_size);
    }
    for(int i=res_size-1;i>=0;i--)
    {
        cout<<res[i];
    }
}

int main()
{
    
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         factorial(n);
     }
    return 0;
}
