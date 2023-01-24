#include <iostream>
#include <climits>
using namespace std;

static bool is_multiple_of_all(int n, int max)
{
    for (int i = 10;  i <= max;  ++i) {
        if (n % i != 0) {
            return false;
        }
    }
    return true;
}


int main()
{
    const int target = 20;
    for (int candidate = 2 * target;
         candidate <= INT_MAX - target;
         candidate += target)
    {
        if (is_multiple_of_all(candidate, target)) {
            cout << candidate;
            return 0;
        }
    }
  
    return 1;
}
