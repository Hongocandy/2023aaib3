//week09-4(a).cpp
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5=0,b10=0,b20=0;//�@�}�l���r��0�i
      for(int b:bills){
        if(b==5) b5++;
        else if(b==10){
            if(b5==0) return false;//�S�����i�H��A���V�F
            b10++; //�h�F�@�i10���r
            b5--; //�֤F�@�i5���r
        }else{//�ȤH��20���r�A��L�@�i10���B�@�i5��
           if(b10>0 && b5>0){
            b20++;
            b10--;
            b5--;
           }else if(b5>=3){
            b20++;
            b5-=3;
           }else return false; //�S��k����Asorry
           //�n���g���F�A�߱����b�}�ߪ��ɭ�
        }
      }
      return true; //�ਫ��̫�A�ܤ�²��!���ߧA�ͷN�s�a!
    }
};
