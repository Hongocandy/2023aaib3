//week15-4.cpp
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=myRevers(l1);
        l2=myRevers(l2);
        ListNode*ans=new ListNode();
        ListNode*now=ans;
        int carry=0;
        while(l1!=nullptr||l2!=nullptr){
            if(l1==nullptr){//�׶}l1(�⧹�㪩�K�W�ӡA�b�R��l1)
              int here=l2->val+carry;
              now->next=new ListNode(here%10);//�u�d�Ӧ��
              carry=here/10;

              l2=l2->next;
              now=now->next;
            }else if(l2==nullptr){//�׶}l2(�⧹�㪩�K�W�ӡA�b�R��l2)
              int here=l1->val+carry;
              now->next=new ListNode(here%10);//�u�d�Ӧ��
              carry=here/10;
              l1=l1->next;
              now=now->next;
            }else{//���㪩���g�o��
              int here=l1->val+l2->val+carry;
              now->next=new ListNode(here%10);//�u�d�Ӧ��
              carry=here/10;
              l1=l1->next;
              l2=l2->next;
              now=now->next;
            }

        }
        if(carry>0)now->next=new ListNode(carry);
        return myRevers(ans->next);//�I�s�禡
        }

    ListNode*myRevers(ListNode*l1){//�o�ΡB�ۭq�禡
        vector<int>a;//�̭��|��@��Ʀr
    while(l1!=nullptr){//�@����A�쵲��
        a.push_back(l1->val);//��
        l1=l1->next;//�U�@��
    }

    ListNode*ans=new ListNode();
    ListNode*now=ans;
    int N=a.size();
    for(int i=N-1;i>=0;i--)
    {
        now->next=new ListNode(a[i]);
        now=now->next;
    }
    return ans->next;
    }
};
