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
    ListNode *makeNode(int x)
    {
        ListNode *newNode=new ListNode();
        newNode->val=x;
        newNode->next=NULL;
        return newNode;
    }
    void pushfront(ListNode *&head, int x)
    {
        ListNode *newNode=makeNode(x);
        newNode->next=head;
        head=newNode;
    }
    void popfront(ListNode *&head)
    {
        if(head==NULL){return;}
        ListNode *temp=head;
        head=head->next;
        delete temp;
    }
    ListNode* reverseList(ListNode* head) 
    {
        ListNode *rev=NULL;
        while(head!=NULL)
        {
        pushfront(rev, head->val);
        popfront(head);
        }
        return rev;
    }
};