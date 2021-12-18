

#include <bits/stdc++.h>
int countBits(int n)
{
    int res=0;
    while(n>0)
    {
        res++;
        n=(n&(n-1));
    }
    return res;
}

using namespace std;

int main()
{
    int n;
    int sum=0;
    cout<<"Enter the size of array ->";
    cin>>n;
    int arr[n];
    cout<<"Enter the array->"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of arr["<<i<<"]=";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=sum+countBits(arr[i]^arr[j]);
        }
    }
    cout<<sum<<endl;

    return 0;
}
