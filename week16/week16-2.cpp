//week16-2.cpp
class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0) return 1;// 1*x*x*x*x
        if(n<0){//�J��t��n�t�t�o��
            n=-n;
            x=1/x;
        }
        if(n%2==0){
            double now=myPow(x,n/2);//�@�bx�ۭ�
            return now*now;//���@�b�S�@�b�b�ۭ�
        }else{//�_�ƭӬۭ�
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
            for(int i=0;i<-n;i++){//�S�O�w��n<0�έt�t�o���A������L�Ӫ��Φ�
                ans*=1/x;
            }
        }
        return ans;
    }
};
