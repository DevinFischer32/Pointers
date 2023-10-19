#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    /*
        Holds the memory location for x not x's value
        & derefrences the data and sends back the memory location
        Allows for multiple varibles that go to same location; instead of creating a new memory location
    */
    int *pX = &x;
    int **ppX = &pX;

    cout << pX << endl;
    cout << &x << endl;
    cout << ppX << endl;

    return 0;
}
