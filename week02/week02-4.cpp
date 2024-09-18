//左邊s 右邊t，找出左右不同 多出來的那個字母(學習計畫第二題)
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256] = {};//陣列超大都設為0
        for(char c: s){//針對S裡的每個字C
            H[c]++;//把Histogram統計圖表H[c]加1多1次
        }
        for(char c: t){//針對右邊的字串t裡面的每個字c
            H[c]--;//用掉剛剛累積的那個H[c]++;
            if(H[c]<0) return c;//不夠用?找到兇手了
        }
        return 0;
    }
};
