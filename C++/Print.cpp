#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl;
    cout << b << endl;
    cout << static_cast<char>(c) << endl;
    cout << fixed;
    cout << setprecision(3) << d << endl;
    cout << setprecision(5) << e << endl;
    return 0;
}