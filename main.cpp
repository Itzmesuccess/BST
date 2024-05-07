#include <iostream>
#include <cstdlib>
#include <ctime>
#include "BTree.h"

using namespace std;

int main() 
{
    srand(time(NULL));  //Seed the random number generator with current time

    BTree myBTree;

    //Generate and save 40 random natural numbers < 100.

    int numbers[40];

    cout << "Generated numbers:\n";

    for (int i = 0; i < 40; i++)

    {
        int num = rand() % 100; //Generate random numbers between 0 and 99

        numbers[i] = num;

        cout << num << " ";

        myBTree.insertNode(num);
    }

    // Pre-order traversal

    cout << "Pre-order traversal:\n";

    myBTree.traversePreOrder(myBTree.getRoot()); 

    cout << endl;

    // In-order traversal

    cout << "In-order traversal:\n";

    myBTree.traverseInOrder(myBTree.getRoot()); 

    cout << endl;

    // Post-order traversal

    cout << "Post-order traversal:\n";

    myBTree.traversePostOrder(myBTree.getRoot()); // Use getRoot() method
    cout << endl;

    return 0;
}
