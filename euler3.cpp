#include <iostream>
using namespace std;

int main()
{
    long long i;
    long long n = 600851475143;

    for(i = 3; i <= n; i += 2) 
    {
        while(n % i == 0) 
        { n /= i;}

        if (n == 1) break;
    }

    cout << "Largest prime factor " << i;
    
}
