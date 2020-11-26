#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef int BTData;

typedef struct _bTreeNde
{
    BTData data;
    struct _bTreeNode *left;
    struct _bTreeNode *right;
} BTreeNode;

BTreeNode *makeBTreeNode(void);
BTData getData(BTreeNode *b);
void setData(BTreeNode *bt, BTData data);

BTreeNode *getLeftSubTree(BTreeNode *bt);
BTreeNode *getRightSubTree(BTreeNode *bt);

void makeLeftSubTree(BTreeNode *main, BTreeNode *sub);
void makeRightSubTree(BTreeNode *main, BTreeNode *sub);

#endif