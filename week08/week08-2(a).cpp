class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0;
        int N=mat.size();
        for(int i=0;i<N;i++){
            ans+=mat[i][i];//���W�k�U�Ai,i
            ans+=mat[i][N-1-i];//���U�k�W�Ai���AN-1-i�˹L�Ӫ�
        }
        if(N%2==1)ans-=mat[N/2][N/2];//�_��:�����������ƥΤF�⦸�A�n����
        return ans;
    }
};
