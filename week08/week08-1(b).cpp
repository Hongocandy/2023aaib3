class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {//�̦h���������H�A���h�ֿ�
        int ans=0;//�j��e��ans=0
        for(auto a: accounts){
            int sum=0;//�j��e��sum�O0
            for(auto b:a){
                sum+=b;//�j�餤��sum+=b�V�[�V�h
            }//�j��᭱�A�ݳo�ӤH���s���`�ơA�O�_�󦳿�
            if(sum>ans)ans=sum;//�󦳿��A�N��sans
        }
    return ans;//�j��᭱ans���ӥ�
    }


};
