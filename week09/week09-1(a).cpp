//week09-1(a).cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M=matrix.size();
        int N=matrix[0].size();
        int i=0,j=0,dir=0;
        int dI[4]={0,1,0,-1};//����i���W���
        int dJ[4]={1,0,-1,0};//�k��j�W���
        vector<int>ans;

            ans.push_back(matrix[i][j]);//�⵪�ש�Jans
            j+=dI[dir];//���ʪ���
            j+=dJ[dir];//���ʪ���
            ans.push_back(matrix[i][j]);//�⵪�ש�Jans
            i+=dI[dir];//���ʪ���
            j+=dJ[dir];//���ʪ���

        }

        return ans;
    }
};
