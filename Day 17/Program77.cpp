#include<iostream>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    public:
    TreeNode(int x){
      this->data = x;
      this->left = NULL;
      this->right = NULL;
    }
};

int main(){
    TreeNode* T1 = new TreeNode(1);
    TreeNode* T2 = new TreeNode(2);

    T1 -> left = T2;
    T1 -> right = NULL;
    T2 -> left = NULL;
    T2 -> right = NULL;
    cout << "Root Node: " << T1 -> data << endl;
}