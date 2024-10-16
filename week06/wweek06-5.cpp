//week06-5.cpp
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans;//放答案(生縮自如的陣列)，形狀要return一樣

        stringstream ss(text);//183把string轉成像cin cout的stream
        string word1,word2,word3;//第1、第2、地3個字
        ss >> word1;//向cin >> word1的方法，讀到資料
        ss >> word2;
        while(ss>>word3){
            if(word1==first &&word2==second) ans.push_back(word3);//放答案
            word1 = word2;
            word2 = word3;
        }
        return ans;
    }
};
