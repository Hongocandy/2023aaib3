bool isRobotBounded(string instructions) {
        int dx[4] = {1,0,-1,0};//���ʪ���V
        int dy[4] = {0,1,0,-1};
        int x=0,y=0,dir=0;//dir��Vdirection:0:�k 1:�U 2:�� 3:�k
        for(char c:instructions){
            if(c=='G'){
                x += dx[dir];
                y += dy[dir];
            }
            if(c=='L') dir=(dir+3)%4;//���४-1�A���|���t���A�b+4�b%4���l�ơA��+3
            if(c=='R') dir=(dir+1)%4;//0�K1��2��3��0��1��2��3��0...
        }
        if(x==0 && y==0) return true;//�d�b��a
        else if(dir==0) return false;//���A��a�A�B�b��Ӫ���V�A�N�|�V���V��
        else return true;//��V����A�N�@�w�|¶���
    }
};