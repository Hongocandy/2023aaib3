class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        ///這題我沒有甚麼頭緒，所以看了Solutuion裡別人的解答
        ///然後把s拿去比對，如果有出現，表示是repeated的patern
        ///我猜測他的原理 是因為s+s在剪掉頭尾，造成前半 後半都無法與s比對成功
        ///這時候，如果還成功比對，那一定是重複patern
        string s2=s + s;
        int N=s2.length();
        ///cout<<string::nops
        return s2.substr(1,N-2).find(s) != string::npos ;///nops動應:沒有這個位置，很大很大
        ///substr()切字串左1 右1(本來是0...N-1 現在變成是1....N-2)
    }
};
