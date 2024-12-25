//week16-2.cpp
class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0) return 1;// 1*x*x*x*x
        if(n<0){//遇到負的n負負得正
            n=-n;
            x=1/x;
        }
        if(n%2==0){
            double now=myPow(x,n/2);//一半x相乘
            return now*now;//左一半又一半在相乘
        }else{//奇數個相乘
            double now=myPow(x,n/2);
            return now*now*x;
        }
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
