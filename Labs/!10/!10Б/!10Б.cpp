#include <iostream>
using namespace std;

void minToMax(int* px, int* py, int* pz) {
    if (*px < *py && *py < *pz)
    {
        int* i = px;
        *px = *pz;
        *pz = *i;
    }
}

int main()
{
    int x, y, z;
    int* px = &x;
    int* py = &y;
    int* pz = &z;
    cin >> x >> y >> z;
    cout << x << " " << y << " " << z << endl;
    minToMax(px, py, pz);
    cout << x << " " << y << " " << z << endl;
}

