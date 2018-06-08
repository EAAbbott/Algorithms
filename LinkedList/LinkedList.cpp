#include <iostream>
#include <stdlib.h>

using namespace std;

struct node
{
    int value;
    node *next;
};

int main()
{
    node *root; //root points to a node
    node *pointer; //points to each node and traverses the list

    root = new node; //root points to a new node

    root->next = 0; //set next pointer to null
    root->value = 5; // set root node value to 5

    //add 9 new nodes to the list with random values
    pointer = root;
    if (pointer != 0 && pointer->next == 0)
    {
        for (int i = 0; i < 10; i++)
        {
            pointer->next = new node;
            pointer = pointer->next;
            pointer->value = rand() % 100;
            pointer->next = 0; //have to null for the last item in list
        }
    }


    //print contents of linked list
    node *checker;
    checker = root;
    if (checker != 0)
    {
        while (checker->next != 0)
        {
            cout << checker->value << endl;
            checker = checker->next;
        }
    }

    return 0;
}
