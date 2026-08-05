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
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> values;
        if(head==nullptr)
        {
            return head;
        }
        while(head->next)
        {
            values.push_back(head->val);
            head=head->next;
        }
        values.push_back(head->val);
        head= new ListNode(values[values.size()-1]);
        ListNode* current=head;
        for(int i=1; i<values.size(); i++)
        {
            current->next= new ListNode(values[values.size()-1-i]);
            current=current->next;
        }
        return head;
        
    }
};
