char* toLowerCase(char* s) {
    for(int i=0;s[i]!=0;i++)///�r�ꪺ�j�� ������s[i]!=0�n�O�@�U
    {
      char c=s[i];///�h���@�|�A�S���XC
      if(isupper(c)) c=tolower(c);
      s[i]=c;    ///�h���@�|�A�S��^s[i]
    }
    return s;
}
