//week09-3(a).cpp

class Solution {
public:
    double average(vector<int>& salary) {

            sort(salary.begin(),salary.end());//從小到大排好
            double total=0;//陷阱有小數點
            for(int i=1;i<salary.size()-1;i++){
                total+=salary[i];
            }
        return total/(salary.size()-2);//平均，就是餘法
    }
};
