#include <iostream>
using namespace std;

void update(int *p_a, int *p_b)
{
    int temp = *p_a;
    *p_a = *p_a + *p_b;
    *p_b = abs(temp - *p_b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    cout << a << endl << b;
    return 0;
}