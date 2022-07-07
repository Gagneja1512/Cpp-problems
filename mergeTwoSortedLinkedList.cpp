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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
            return list2;
        
        if(list2 == NULL)
            return list1;
        
        ListNode* newnode ;
        if(list1->val <= list2->val)
        {
            newnode = list1; 
            list1 = list1->next;
        }
        else 
        {
            newnode = list2;
            list2 = list2->next;
        }
        ListNode* head = newnode ;
        while(list1!=NULL and list2!=NULL)
        {
            if(list1->val <= list2->val)
            {
                newnode->next = list1; 
                list1 = list1->next;
                newnode = newnode->next;
            }
            else 
            {
                newnode->next = list2;
                list2 = list2->next;
                newnode = newnode->next;
            }
        }
        
        while(list1!=NULL)
        {
            newnode->next = list1; 
            list1 = list1->next;
            newnode = newnode->next;
        }
        
        while(list2!=NULL)
        {
            newnode->next = list2;
            list2 = list2->next;
            newnode = newnode->next;
        }
        
        
        return head ;
    }
};