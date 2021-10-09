#include <iostream>
#include <vector>

using namespace std;

class Node{
    public:
    int value;
    Node *left;
    Node *right;
    Node(int value) {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
    

};

int main(){
    void printB(Node *root);
    Node *tree = new Node(20);
    tree->left = new Node(8);
    tree->left->left = new Node(4);
    tree->left->right = new Node(12);
    tree->left->right->right = new Node(14);
    tree->left->right->left = new Node(10);
    tree->right = new Node(22);
    tree->right->right->right = new Node(25);
    printB(tree);
    return 0;
}

void printB(Node* root){
    vector<int> track;
    //complete left tree top to bottom
    if(root == NULL) return;
    
    if(root ->left){
        
    }
    // leaf nodes
    //right bottom to top

}