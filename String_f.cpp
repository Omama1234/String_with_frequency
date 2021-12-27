#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s="GeeksforGeeks";
    unordered_map<char,int>m;
    
    for(char i:s)
    {
       m[i]++; 
    }
    for(char i:s)
    {
        if(m[i]!=0)
        {
            cout<<i<<"->"<<m[i]<<endl;
            m[i]=0;
        }
    }
    

    return 0;
}
OUTPUT ->
G->2
e->4
k->2
s->2
f->1
o->1
r->1
