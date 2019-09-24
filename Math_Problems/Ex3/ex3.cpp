#include <iostream>

using namespace std;


unsigned int gcd(unsigned int a, unsigned int b)
{
    while (b != 0) {
        unsigned int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int const a, int const b)
{
    int h = gcd(a, b);
    return h ? (a * (b / h)) : 0;
}

int main()
{
   int GCD = gcd(16,24);
   int LCM = lcm(16,24);

    cout << "The gcd is " << GCD << endl;
     cout << "The LCM is " << LCM << endl;

    return 0;
}