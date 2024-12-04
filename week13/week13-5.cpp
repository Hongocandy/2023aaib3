//week13-5.cpp學習計畫

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*ans=new ListNode();
    ListNode * now=ans;//現在要處理的ListNode 是ans往下走
    while(list1 != nullptr || list2 !=nullptr){//只要還有1個還有值
        if(list1==nullptr){
            now->next=list2;//舊街上list2
            list2=nullptr;//list2也清空
        }
        else if(list2==nullptr){//list2也是空的
            now->next =list1;//就接上list1
            list1=nullptr;//list1也清空
        }
        else{
            if(list1->val < list2->val){//左邊list1小
                now->next=new ListNode(list1->val);
                list1=list1->next;
            }else{//加邊list2
            now->next=new ListNode(list2->val);
            list2=list2->next;
        }
        now=now->next;
        }

    }
    return ans->next;
    }

};
