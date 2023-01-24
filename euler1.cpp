
#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int i;
    
     for (i=0; i < 4000000; i++)
     {
        if (i%2 == 0)
         { sum += i;}
     }
   cout<<"The sum of multiples of 3 and 5 below 1000 is "<<  sum;
   return 0;
    
}
