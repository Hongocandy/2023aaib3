//week14-2.cpp
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode();
        ListNode*now=ans;//模仿前兩周的寫法
        int carry=0;
        while(l1!=nullptr||l2!=nullptr)
        {   if(l1==nullptr)
            {
                int here =l2->val+carry;
                now->next=new ListNode(here%10);//建新node
                carry=here/10;
                l2=l2->next;
                now=now->next;
            }
            else if(l2==nullptr){
                int here =l1->val+carry;
                now->next=new ListNode(here%10);//建新node
                carry=here/10;
                l1=l1->next;//下一筆
                now=now->next;
            }
            else{//完美照舊
                int here =l1->val+l2->val+carry;
                now->next=new ListNode(here%10);//建新node
                carry=here/10;
                l1=l1->next;//下一筆
                l2=l2->next;
                now=now->next;
            }

        }
        if(carry==1) now->next=new ListNode(carry);
        return ans->next;//等一下要return ans->next
    }
};
