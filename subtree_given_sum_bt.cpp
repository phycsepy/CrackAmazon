#include<iostream>
#include <vector>

using namespace std;
// bool sumSubtree(BinaryTree *root,int sum);
// bool sumSubtreehelp(BinaryTree *root,int *curSum,int sum);
class BinaryTree{
public:
int value;
BinaryTree *left;
BinaryTree *right;

BinaryTree(int value){
    this->value = value;
    left = nullptr;
    right = nullptr;
}


};

int main(){
bool sumSubtree(BinaryTree *root,int sum);

    BinaryTree *tree = new BinaryTree(1);
    tree->left = new  BinaryTree(3);
    tree->left->left = new BinaryTree(5);
    tree->left->right = new BinaryTree(9);
    tree->right = new BinaryTree(6);
    tree->right->left = new BinaryTree(8);
    int sum = 17;

    cout<<sumSubtree(tree,sum);
}
    
bool sumSubtreehelp(BinaryTree *root,int *curSum,int sum){
    if(root == NULL) return false;
 int sum_left = 0,sum_right = 0;
 return (sumSubtreehelp(root->left,&sum_left,sum)||sumSubtreehelp(root->right,&sum_right,sum)||((*curSum = sum_left + sum_right + root->value)==sum)); 
}


bool sumSubtree(BinaryTree *root,int sum){
    int curSum = 0;
    return  sumSubtreehelp(root,&curSum,sum);   
}