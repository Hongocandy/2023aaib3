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
            for(int i=0;i<-n;i++){//�S�O�w��n<0�έt�t�o���A������L�Ӫ��Φ�
                ans*=1/x;
            }
        }
        return ans;
    }
};
