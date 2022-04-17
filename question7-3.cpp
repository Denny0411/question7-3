#include <iostream>
using namespace std;

int exponentiation(int, int);

int main()
{
    int x, n, result;
    cout << "輸入x和n，將計算x^n: ";
    cin >> x >> n;
    result = exponentiation(x, n);
    cout << x << "^" << n << "=" << result;

    return 0;
}

int exponentiation(int x, int n)
{
    int result = x;
    if(n == 0)
    {
        return (1);
    }
    else
    {
        while(n > 1)
        {
            result *= x;
            n--;
        }
        return result;
    }
}