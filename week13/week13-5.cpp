//week13-5.cpp�ǲ߭p�e

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*ans=new ListNode();
    ListNode * now=ans;//�{�b�n�B�z��ListNode �Oans���U��
    while(list1 != nullptr || list2 !=nullptr){//�u�n�٦�1���٦���
        if(list1==nullptr){
            now->next=list2;//�µ�Wlist2
            list2=nullptr;//list2�]�M��
        }
        else if(list2==nullptr){//list2�]�O�Ū�
            now->next =list1;//�N���Wlist1
            list1=nullptr;//list1�]�M��
        }
        else{
            if(list1->val < list2->val){//����list1�p
                now->next=new ListNode(list1->val);
                list1=list1->next;
            }else{//�[��list2
            now->next=new ListNode(list2->val);
            list2=list2->next;
        }
        now=now->next;
        }

    }
    return ans->next;
    }

};
