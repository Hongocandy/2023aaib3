//week09-1(b).cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M=matrix.size();
        int N=matrix[0].size();
        int i=0,j=0,dir=0;
        int dI[4]={0,1,0,-1};//左手i的增減值
        int dJ[4]={1,0,-1,0};//右手j增減值
        vector<int>ans;
        for(int k=0;k<N-1;k++){
            ans.push_back(matrix[i][j]);//把答案放入ans
            j+=dI[dir];//移動的值
            j+=dJ[dir];//移動的值
        }
        dir=(dir+1)%4;
        for(int kk=1;kk<=M+1;kk++)
        {
           for(int k=0;k<M-kk;k++)
           {
            ans.push_back(matrix[i][j]);//把答案放入ans
            i+=dI[dir];//移動的值
            j+=dJ[dir];//移動的值
           }
        }

        dir=(dir+1)%4;
        for(int k=0;k<N-2;k++)
        {
            ans.push_back(matrix[i][j]);
            i+=dI[dir];
            j+=dJ[dir];
        }
        return ans;

    }//還差一點


};
