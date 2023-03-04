#include <iostream>

using namespace std;

int Sum(int a, int b)
{
    return a - b;
}

float Sum(float a, float b)
{
    return a * b;
}

template <typename T1, typename T2>
auto Sum(T1 a, T2 b)
{
    return a + b;
}

int main()
{
    cout << Sum(10, 20) << "\n";

    float x = 4.6f;
    float y = 23.78f;

    cout << Sum(x, y) << "\n";

    cout << Sum(10, 20.5);
}
