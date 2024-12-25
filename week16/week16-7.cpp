//week16-7.cpp
class Solution {
public:
    void helper(TreeNode* root,int level,vector<int> & ans ) {
        if(root==nullptr)return ;
        if(ans.size()<=level) ans.push_back(root->val);//層數格子不夠就在加一格
        else if(root->val > ans[level])ans[level]=root->val;//如果數字更大就更新

        helper(root->left,level+1,ans);//左半邊(下一層level+1)
        helper(root->right,level+1,ans);//右下邊(下一層level+1)
    }
    vector<int> largestValues(TreeNode*root){
        vector<int>ans;
        helper(root,0,ans);
        return ans;
    }
};
