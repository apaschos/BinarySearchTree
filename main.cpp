#include "BST.hpp"


int main()
{
    BST<int> bstree;

    bstree.insert(50);
    bstree.insert(30);
    bstree.insert(70);
    bstree.insert(20);
    bstree.insert(40);
    bstree.insert(60);
    bstree.insert(80);

    bstree.display();

    return 0;
}
