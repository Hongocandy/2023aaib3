//week15-3.cpp
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return myRevers(l1);//�I�s�禡
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
