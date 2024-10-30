class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M=matrix.size(),N=matrix[0].size();
        vector<int>up(N);//�ŧi�@�Ӱ}�C�A�O��b�W��up�A�Ψӥ��Ĥļе������X��(����)�n�R
        vector<int>left(M);//�ŧi�@�Ӱ}�C�A�O��b����left�A�Ψӥ��ĤĦ����X������n�R
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){//�J��0���ܡA�n�е�left[i]�Mup[j]
                    up[j]=1;//for(int ii=0;ii<M;ii++) matrix[ii][j]=0;
                    left[i]=1;//for(int jj=0;jj<N;jj++)matrix[i][jj]=0;



                }
            }

        }
        for(int i=0;i<M;i++){//�̫�A�⥦�ܦ�0
            if(left[i]==1) for(int jj=0;jj<N;jj++) matrix[i][jj]=0;//�p�G���䦳���ĤġA�N����R ���
        }
        for(int j=0;j<N;j++){
            if(up[j]==1) for(int ii=0;ii<M;ii++) matrix[ii][j]=0;//�p�G�W����[���Ĥ�]�A�N����R����
        }
    }
};
