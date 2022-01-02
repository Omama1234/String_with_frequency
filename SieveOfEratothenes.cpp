/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<bool>p(n+1,true);
    int cnt=0;
    p[0]=p[1]=false;
    for(int i=2;i<=n;i++)
    {
        if(p[i])
        {
            cnt++;
            for(int j=2*i;j<=n;j=i+j)
            {
                p[j]=false;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}

OUTPUT ->
11
5
