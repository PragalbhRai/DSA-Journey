#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
    TreeNode(int data){
        val = data;
        left = right= NULL;
    }
};
int height(TreeNode* root){
    if(root== NULL)return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+1;
}
int main(){
    struct TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    int ans = height(root);
    cout<<"Height of tree is: "<<ans;
    return 0;
}