#include <iostream>
using namespace std;

int exponentiation(int, int);

int main()
{
    int x, n, result;
    cout << "輸入x和n，將計算x^n: ";
    cin >> x >> n;
    result = exponentiation(x, n);
    cout << x << " ^ " << n << " = " << result;

    return 0;
}

int exponentiation(int x, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else if(n >= 1)
    {
        return (x * exponentiation(x, n - 1));
    }
}
