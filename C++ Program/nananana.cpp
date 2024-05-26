#include <stdio.h>
#include <iostream>

using namespace std;

float jumlah(float a, float b)
{
    return a + b;
}

int main()
{
    cout << jumlah(6.3, 3) << endl;
    cout << jumlah(0.9, 3);
}