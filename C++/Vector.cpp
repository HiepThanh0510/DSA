// v1.front() -> v1[0]
// v1.back() -> v1[1]
// v1.size() -> size of v1 (we can get size of vector through vector.size() function)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3};
    v1.insert(1, 10);
    cout << v1[0] << endl << v1[1] << endl;
    return 0;
}