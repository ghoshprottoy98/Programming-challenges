#include <iostream>
using namespace std;
int main()
{
    int num1, num2, gcd;
    cout << "\n\n Find the Greatest Common Divisor of two numbers:\n";
    cout << "-----------------------------------------------------\n";
    cout << " Input the first number: ";
    cin >> num1;
    cout << " Input the second number: ";
    cin >> num2;

    for (int i = 1; i <= num1 && i <= num2; i++) 
    {
        if (num1 % i == 0 && num2 % i == 0) 
        {
            gcd = i;
        }
    }
    cout << " The Greatest Common Divisor is: " << gcd << endl;
    return 0;
}



int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
 
int main()
{
    int n = 9;
    cout << fib(n);
    getchar();
    return 0;
}







