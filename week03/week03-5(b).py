#原則是:如果s是由許多小成分重複組合的話，那兩個字s+s接起來，也一定是重複
#更巧的是，如果頭尾個剪掉一個字母，因為有重複的部分在中間，所以還是找的到s在裡面
class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        s2=s+s #把字串s+s變成兩個長度
        s2 = s2[1:len(s2)-1] #左少1 右少1
        #print(s2)
        if s in s2:return True
        else: return False
