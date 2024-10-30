class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {//最多錢的有錢人，有多少錢
        int ans=0;//迴圈前面ans=0
        for(auto a: accounts){
            int sum=0;//迴圈前面sum是0
            for(auto b:a){
                sum+=b;//迴圈中間sum+=b越加越多
            }//迴圈後面，看這個人的存款總數，是否更有錢
            if(sum>ans)ans=sum;//更有錢，就更新ans
        }
    return ans;//迴圈後面ans拿來用
    }


};
