#include <iostream>
using namespace std;

void ReverseArray(int a[], int b[], int N)
{
    for(int i = 0; i < N; i++)
    {
        b[(N-1) - i] = a[i];
    }
}

void ExportArray(int *b, int N)
{
    for(int i = 0; i < N; i++)
    {
        cout << b[i] << " ";
    }
}

int main()
{
    int a[1500], b[1500];
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> a[i]; 
    }
    ReverseArray(a, b, N);
    ExportArray(b, N);
    return 0;
}