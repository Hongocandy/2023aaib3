//week12-2.cpp學習計畫linkedlist 第一題(還沒寫完)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public://*代表指標，老師把他叫槍上，用來瞄準的[準星]
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode*ans=list1;///可以轉接(舊的)List1過去
          ListNode*ans=new ListNode(99);//可以開新的(放99)
          ListNode*ans=new ListNode(99,new ListNode(99));
          ///開新的Node裡面放99，後面轉接[新的Node裡有99]
        return ans;
    }///請把三種版本都執行過，看Test Result裡面紅色output

};
