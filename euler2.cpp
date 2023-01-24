#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int y = 1;
    int z;
    int sum;
    
   while(y <= 4000000)
   {
    z = x + y;
    x = y;
    y = z;
    if(y % 2 == 0) 
    {
        sum += y;
    }
   }
    cout << "sum of the even-valued terms in fib seq." <<sum;
    cin.get();
}
