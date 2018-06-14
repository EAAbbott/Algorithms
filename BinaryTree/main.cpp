#include <iostream>
#include <stdlib.h>
#include "bintree.h"

using namespace std;

int main()
{
    BinTree x;
    for (int i = 0; i < 10; i++)
    {
        x.insertKey(rand() % 100);
    }

    x.printTree();

    return 0;
}
