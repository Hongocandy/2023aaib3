//week14-1.cpp
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode();
        ListNode*now=ans;//模仿前兩周的寫法
        while(l1!=nullptr)
        {
            now->next=new ListNode(l1->val);//建新node
            l1=l1->next;//下一筆
            now=now->next;//下一筆
        }
        return ans->next;//等一下要return ans->next
    }
};
