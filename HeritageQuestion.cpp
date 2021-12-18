#include <iostream>

using namespace std;

int main()
{
    try{
        throw 10;
    }
    catch(...)
    {
        cout<<"default exception";
    }
    catch(int param)
    {
        cout<<"int exception";
    }
    

    return 0;
}
/*catch(...)
{
}
This must be last catch block for its try block
*/

OUTPUT ->
HeritageQuestion.cpp:18:5: error: ‘...’ handler must be the last handler for its try block [-fpermissive]
   18 |     catch(...)
      |     ^~~~~
