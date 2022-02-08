#include <iostream>
using namespace std;


class TreeNode{


public:
    TreeNode() = default;
    TreeNode(int k, TreeNode *l, TreeNode *r): key(k), left(l), right(r) {}
    int getKey() {return TreeNode::key;}
    void keyChange(int K) { key = K; }
    void connect(TreeNode* l, TreeNode *r){
        left = l;
        right = r;
    }

private:
    bool Null = 0;
    TreeNode* left;
    TreeNode* right;
    int key = 0;
};

class BinarySearchTree{
    friend TreeNode;
    TreeNode TreeRoot;
};
int main(){
TreeNode root;
cout << root.getKey();
}