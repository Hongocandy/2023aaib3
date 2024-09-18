//交錯word1 word2 放到ans裡(學習計畫第一題)
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;//準備好答案
        for(int i=0;i<word1.length() || i<word2.length();i++){
           if(i<word1.length()) ans+= word1[i];
           if(i<word2.length()) ans+=word2[i];
        }

        return ans;//答案送出去
    }
};
