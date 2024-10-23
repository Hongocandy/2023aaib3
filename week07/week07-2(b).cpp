//week07-2.cpp
class Solution {
public:
    void myDrawBoard(int board[3][3]){
        for(int i=0;i<3;i++){//Step04:�L�X�������ѽL���e
            for(int j=0;j<3;j++){
                cout << board[i][j] << ' ';
            }
            cout <<'\n';
        }
        cout << "\n";
    }
    bool testWin(int board[3][3],int now){
        if(board[0][0]==now && board[0][1]==now && board[0][2]==now) return true; //�W�����
        if(board[1][0]==now && board[1][1]==now && board[1][2]==now) return true; //�������
        if(board[2][0]==now && board[2][1]==now && board[2][2]==now) return true; //�U�����
        //�A�ӬO����
        if(board[0][0]==now && board[1][0]==now && board[2][0]==now) return true; //������
        if(board[0][1]==now && board[1][1]==now && board[2][1]==now) return true; //������
        if(board[0][2]==now && board[1][2]==now && board[2][2]==now) return true; //�k����
        //�A�Ӽg�ת��﨤�u
        if(board[0][0]==now && board[1][1]==now && board[2][2]==now) return true; //���W�k�U
        if(board[2][0]==now && board[1][1]==now && board[0][2]==now) return true; //���U�k�W
        return false;
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3]={};//Step03:C���}�C�A�̭�����0�N��S����J�F��
        //myDrawBoard(board);
        int now=1;
        for(auto move : moves){//Step01:C++�i���j��
            int i=move[0],j=move[1];//step02:���X�}�C�̭�����
            board[i][j]=now;
            myDrawBoard(board);
            if(testWin(board,now)){
                if(now==1) return "A";
                else return "B";
            }
            now=3-now;
        }
        cout << moves.size() << endl;
        if(moves.size()==9) return "Draw";//����9�B�A����
        else return "Pending";//�٨S����9�B�A�b���H�~��U�A�s"Pending"����
        //return "B";//"A" or"B"or"Draw"����
    }
};
