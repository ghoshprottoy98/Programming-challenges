include <iostream>
using namespace std;

int reverse(int num)
{
   int num2 = 0;
   while (num > 0)
   {
       num2 *= 10;
       num2 += (num % 10);
       num = ( num - ( num % 10 ) ) / 10;
   }
   return num2;
}

bool is_palindorme(int num)
{
    int rev = reverse(num);
    if (rev == num)
    {
        return true;
    }
    return false;
}

int main()
{
    int num = 0,largest_plan = 0;
    for (int i=100; i < 1000; i++)
{
    for (int j=100; j < 1000; j++)
    {
        num = i*j;
        if (is_palindorme(num))
        {
            if (num > largest_plan)    
            {
                largest_plan = num;
            }
        }
    }
}
    
    cout << largest_plan << endl;

}
