//week16-3.cpp
class Solution {
public:
    void helper(TreeNode* root,vector<int> & ans) {
        if(root==nullptr)return;//終止條件、結束條件terminal condition

        helper(root->left,ans);//左半邊
        ans.push_back(root->val);//塞在中間
        helper(root->right,ans);//右半邊
    }
    vector<int>inorderTraversal(TreeNode*root){
        vector<int> ans;//準備ans答案(伸縮自如的陣列)
        helper(root,ans);//函式呼叫函式，幫我們把答案算出來
        return ans;//ans答案丟出去
    }
};
