#include <iostream>
#include "bintree.h"

using namespace std;

int main()
{
    BinTree x;
    x.insertKey(30);
    x.insertKey(23);
    x.insertKey(4);
    x.insertKey(90);
    x.insertKey(55);
    x.insertKey(30);

    cout << x.searchKey(90) << endl;

    return 0;
}
