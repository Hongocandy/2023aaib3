//���word1 word2 ���ans��(�ǲ߭p�e�Ĥ@�D)
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;//�ǳƦn����
        for(int i=0;i<word1.length() || i<word2.length();i++){
           if(i<word1.length()) ans+= word1[i];
           if(i<word2.length()) ans+=word2[i];
        }

        return ans;//���װe�X�h
    }
};