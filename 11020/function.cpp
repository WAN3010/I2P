#include "function.h"
#include <string.h>
using namespace std;

Array_BST::Array_BST(){
    memset(array, 0, sizeof(array));
}

void Array_BST::insert(const int &n){
    int counter = 1, i = 1;
    for(; array[i] != 0; counter++)
        if(n < array[i])
            i = 2*i;
        else if(n > array[i])
            i = 2*i + 1;
        else
            return;
    array[i] = n;
    Height = (counter > Height) ? counter : Height;
}

bool Array_BST::search(const int &n) const {
    for(int i = 1; i < (int)(sizeof(array)/sizeof(int));)
        if(array[i] != 0)
            if(n == array[i])
                return true;
            else if(n < array[i])
                i = 2*i;
            else
                i = 2*i + 1;
        else
            return false;
    return false;
}

List_BST::List_BST(){
    root = NULL;
}

void List_BST::insert(const int &i){
    ListNode *tmp = createLeaf(i), **t = &root;
    int counter = 1;
    while(*t && counter++)
        if(i < (*t)->key)
            t = &((*t)->left);
        else if(i > (*t)->key)
            t = &((*t)->right);
        else
            return;
    *t = tmp;
    Height = (counter > Height) ? counter : Height;
}

bool List_BST::search(const int &i) const {
    ListNode *tmp = root;
    while(tmp)
        if(i < tmp->key)
            tmp = tmp->left;
        else if(i > tmp->key)
            tmp = tmp->right;
        else
            return true;
    return false;
}
ListNode* List_BST::createLeaf(int key) const {
    return new ListNode(key);
}

void List_BST::deleteTree(ListNode *root){
    if(root->left)
        deleteTree(root->left);
    if(root->right)
        deleteTree(root->right);
    delete root;
}
