#��h�O:�p�Gs�O�ѳ\�h�p�������ƲզX���ܡA����Ӧrs+s���_�ӡA�]�@�w�O����
#�󥩪��O�A�p�G�Y���Ӱű��@�Ӧr���A�]�������ƪ������b�����A�ҥH�٬O�䪺��s�b�̭�
class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        s2=s+s #��r��s+s�ܦ���Ӫ���
        s2 = s2[1:len(s2)-1] #����1 �k��1
        #print(s2)
        if s in s2:return True
        else: return False
