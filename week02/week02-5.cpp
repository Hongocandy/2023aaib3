//�P�˪��r���զ����r(�ǲ߭p�e�ĥ|�D)
class Solution {
public:
    bool isAnagram(string s, string t) {
        int H1[256]={},H2[256]={};//���O0
        for(char c: s){
            H1[c]++;
        }
        for(char c:t)
        {
            H2[c]++;
        }
        for(int i=0;i<256;i++){

            if(H1[i] != H2[i])return false;
        }//�p�G����  �k��X�{�����Ƥ��P�N����
        //�p�G�e�����S���� �A���ܦn��
        return true;//�N�O���\�F
    }
};
