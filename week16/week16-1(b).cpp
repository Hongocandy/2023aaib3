//week16-1(b).cpp
class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(n>0){

        for(int i=0;i<n;i++)
        {
            ans*=x;
        }
        }else if(n<0){
            for(int i=0;i<-n;i++){//特別針對n<0用負負得正，換成到過來的形式
                ans*=1/x;
            }
        }
        return ans;
    }
};
