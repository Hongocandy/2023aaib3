//week16-3.cpp
class Solution {
public:
    void helper(TreeNode* root,vector<int> & ans) {
        if(root==nullptr)return;//�פ����B��������terminal condition

        helper(root->left,ans);//���b��
        ans.push_back(root->val);//��b����
        helper(root->right,ans);//�k�b��
    }
    vector<int>inorderTraversal(TreeNode*root){
        vector<int> ans;//�ǳ�ans����(���Y�ۦp���}�C)
        helper(root,ans);//�禡�I�s�禡�A���ڭ̧⵪�׺�X��
        return ans;//ans���ץ�X�h
    }
};
