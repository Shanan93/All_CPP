#include <iostream>

using namespace std;

/**
unsigned int gcd(unsigned int const a, unsigned int const b)
{
    return b == 0 ? a : gcd(b, a % b);
}
**/

unsigned int gcd(unsigned int a, unsigned int b)
{
    while (b != 0) {
        unsigned int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
   int GCD = gcd(16,24);
    cout << "The gcd is " << GCD << endl;

    return 0;
}