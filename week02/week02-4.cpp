//����s �k��t�A��X���k���P �h�X�Ӫ����Ӧr��(�ǲ߭p�e�ĤG�D)
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256] = {};//�}�C�W�j���]��0
        for(char c: s){//�w��S�̪��C�ӦrC
            H[c]++;//��Histogram�έp�Ϫ�H[c]�[1�h1��
        }
        for(char c: t){//�w��k�䪺�r��t�̭����C�Ӧrc
            H[c]--;//�α����ֿn������H[c]++;
            if(H[c]<0) return c;//������?������F
        }
        return 0;
    }
};
