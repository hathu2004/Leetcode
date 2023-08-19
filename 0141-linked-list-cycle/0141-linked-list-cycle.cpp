/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        unordered_set<ListNode*>se;
        while(head!=NULL)
        {
            if(se.count(head)>0){return true;}
            se.insert(head);
            head=head->next;
        }
        return false;
    }
};