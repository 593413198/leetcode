/*!*********************
 * @brief:  leetcode-237-删除链表中的节点
 * @envir:  gcc 7.4.0
 * @date:   2019/5/6
 * @author: luhao
 * ********************/

//Definition for singly-linked list.
struct ListNode {
 	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
