//week13-3.cpp �ϥ�Leetcode ��playgound �C�ֳ��g�{��
//Leetcode ��#include<iostream>�Musing namespace std;���g�n�F
//�k�U���A��stdin�i�H��J���
//3 4
//4 3
//2 5
//1 3
//3 9
//3 3
int main() {
    int a,b;
    vector<int>A,B;
    while(cin>>a>>b)
    {
        A.push_back(a);//��Ʀra��J�}�CA
        B.push_back(b);//��Ʀrb��J�}�CB
    }//�ؼЧ�ƦrA�AB�q�p��j�Ʀn
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        //cout << A[i]<<" ";//�L�X�ӡA�u���O[�p��j�Ʀn]
        ans+=abs(A[i]-B[i]);
    }
    cout<<"�[�_�Ӫ����ת��O"<<ans;
}
