/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        ListNode* pre = NULL;
        int y = 0;
        int len1 = 0;
        int len2 = 0;
        while(ptr1 != NULL){
            len1++;
            ptr1 = ptr1 -> next;
        }
        while(ptr2 != NULL){
            len2++;
            ptr2 = ptr2-> next;
        }
        if(len1 >= len2){
            ptr1 = l1;
            ptr2 = l2;
            pre = l1;
        }else{
            ptr2 = l1;
            ptr1 = l2;
            pre = l2;
        }
        while (ptr1 != NULL){
            if(ptr2 == NULL){
                int x = ptr1 -> val + y;
                y = 0;
                if(x >= 10){
                    y = x / 10;
                    x = x % 10;
                }
                ptr1 -> val = x;
                pre = ptr1;
                ptr1 = ptr1 -> next;
            }else{
                int x = ptr1 -> val + ptr2->val + y;
                y = 0;
                if(x >= 10){
                    y = x / 10;
                    x = x % 10;
                }
                ptr1 -> val = x;
                pre = ptr1;
                ptr1 = ptr1 -> next;
                ptr2 = ptr2 -> next;
            }
        }
        while(y > 0){
            ListNode* temp = new ListNode(y%10);
            y = y/10;
            pre -> next = temp;
            pre = pre -> next;
        }
        if(len1 >= len2){
            return l1;
        }else{
            return l2;
        }
    }
};
// @lc code=end
