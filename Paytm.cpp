/*Guven an array of size arr[] of Size N which contains elements from 0 to N-1 , find all the elements Occuring 
more than once in the given array
if no such element is found return a vector containing -1,The extra space is only for the vector to be returned.
I/P -> arr[]={2,3,1,2,3};
O/P -> 2 3 
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={2,3,1};
    //int n=5;
    vector<int>v;
    int flag=0;
    map<int,int>m;
    for(int i:arr)
    {
        m[i]++;
    }
    for(int i:arr)
    {
        //flag=0;
        if(m[i]!=0 && m[i]>1)
        {
            v.push_back(i);
            flag=1;
            m[i]=0;
            
        }
    }
    if(flag==0)
    {
        v.push_back(-1);
    }
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}

OUTPUT ->
2 3 

