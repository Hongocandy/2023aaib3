//week13-6.cpp

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a;//�ΰ}�C�sLinked List��val��
        while(head !=nullptr){//�u�n�٦��F��
            a.push_back(head->val);//�N��ȡA����J�}�C
            head=head->next;//���U�@��
        }
        ListNode*ans=new ListNode();//�M�e�@�D�@��
        ListNode * now=ans;//�M�e�@�D�@��
        for(int i=a.size()-1;i>=0;i--){//�ϹL�Ӫ��}�C
            now->next=new ListNode(a[i]);
            now=now->next;//���U�@��
        }
        return ans->next;//�M�e�@�D�@��
    }
};
