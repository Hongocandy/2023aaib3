///week12-3.cpp
class Solution {
public:
    ListNode*mergeTwoLists(ListNode*list1,ListNode*list2){
        ListNode*ans=new ListNode();//�ť]�u
        ListNode*now=ans;//���ש�bnow�̭�
        while(list1 != nullptr || list2!=nullptr){//�u�n����@���٦���ƴN�~��
            if(list1==nullptr){//���@�ӬO�Ū�
                now->next=list2;//�t�~�@�ӡA�������W
                list2=nullptr;//�M��
            }else if(list2==nullptr){
                now->next=list1;//�t�~�@�ӥ������W
                list1=nullptr;//�M��
            }else if(list1->val<list2->val){//list1�O�p��
                now->next=new ListNode(list1->val);//���ש�bnow���U�@���A��p��
                list1=list1->next;//list1���U�@��
                now=now->next;//�{�b�]���U�@��

            }else{//list2�O�p��
                now->next=new ListNode(list2->val);//���ש�bnow���U�@���A��p��
                list2=list2->next;//list2���U�@��
                now=now->next;//�{�b�]���U�@��
            }
        }
        return ans->next;//�ť]�u���U�@���~�O�u��������
    }
};
