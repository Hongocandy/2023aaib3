//week16-7.cpp
class Solution {
public:
    void helper(TreeNode* root,int level,vector<int> & ans ) {
        if(root==nullptr)return ;
        if(ans.size()<=level) ans.push_back(root->val);//�h�Ʈ�l�����N�b�[�@��
        else if(root->val > ans[level])ans[level]=root->val;//�p�G�Ʀr��j�N��s

        helper(root->left,level+1,ans);//���b��(�U�@�hlevel+1)
        helper(root->right,level+1,ans);//�k�U��(�U�@�hlevel+1)
    }
    vector<int> largestValues(TreeNode*root){
        vector<int>ans;
        helper(root,0,ans);
        return ans;
    }
};
