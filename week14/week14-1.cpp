//week14-1.cpp
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode();
        ListNode*now=ans;//�ҥ�e��P���g�k
        while(l1!=nullptr)
        {
            now->next=new ListNode(l1->val);//�طsnode
            l1=l1->next;//�U�@��
            now=now->next;//�U�@��
        }
        return ans->next;//���@�U�nreturn ans->next
    }
};
