//week15-3.cpp
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return myRevers(l1);//呼叫函式
        }

    ListNode*myRevers(ListNode*l1){//發用、自訂函式
        vector<int>a;//裡面會塞一堆數字
    while(l1!=nullptr){//一直塞，到結束
        a.push_back(l1->val);//塞
        l1=l1->next;//下一筆
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
