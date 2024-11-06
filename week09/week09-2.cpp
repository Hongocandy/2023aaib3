//week09-2.cpp，學習計畫Math第一題
//找low...high 中間，有幾個奇數(頭尾有包含)
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=(high-low)/2;//這個方法是錯的
        if(low%2==1 && high%2==1)ans++;//頭尾都是奇數，就要+1
        //不知道為甚麼，交給大家想想看
        return ans;//先不要送出，我們在Testcase裡測試，多試幾個
    }
};
