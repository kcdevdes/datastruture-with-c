#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

int main(void)
{
    BTreeNode *bt1 = makeBTreeNode();
    BTreeNode *bt2 = makeBTreeNode();
    BTreeNode *bt3 = makeBTreeNode();
    BTreeNode *bt4 = makeBTreeNode();

    setData(bt1, 1);
    setData(bt2, 2);
    setData(bt3, 3);
    setData(bt4, 4);

    makeLeftSubTree(bt1, bt2);
    makeRightSubTree(bt1, bt3);
    makeLeftSubTree(bt2, bt4);

    printf("%d \n", getData(getLeftSubTree(bt1)));
    printf("%d \n", getData(getLeftSubTree(getLeftSubTree(bt1))));

    return 0;
}