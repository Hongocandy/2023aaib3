class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        ///�o�D�ڨS���ƻ��Y���A�ҥH�ݤFSolutuion�̧O�H���ѵ�
        ///�M���s���h���A�p�G���X�{�A��ܬOrepeated��patern
        ///�ڲq���L����z �O�]��s+s�b�ű��Y���A�y���e�b ��b���L�k�Ps��令�\
        ///�o�ɭԡA�p�G�٦��\���A���@�w�O����patern
        string s2=s + s;
        int N=s2.length();
        ///cout<<string::nops
        return s2.substr(1,N-2).find(s) != string::npos ;///nops����:�S���o�Ӧ�m�A�ܤj�ܤj
        ///substr()���r�ꥪ1 �k1(���ӬO0...N-1 �{�b�ܦ��O1....N-2)
    }
};
