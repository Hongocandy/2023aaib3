//week09-2.cpp�A�ǲ߭p�eMath�Ĥ@�D
//��low...high �����A���X�ө_��(�Y�����]�t)
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=(high-low)/2;//�o�Ӥ�k�O����
        if(low%2==1 && high%2==1)ans++;//�Y�����O�_�ơA�N�n+1
        //�����D���ƻ�A�浹�j�a�Q�Q��
        return ans;//�����n�e�X�A�ڭ̦bTestcase�̴��աA�h�մX��
    }
};
