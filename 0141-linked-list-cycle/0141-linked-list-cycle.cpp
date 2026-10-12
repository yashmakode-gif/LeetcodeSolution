class Solution {
public:
    bool hasCycle(ListNode *head) {
        // If the list is empty or has only one node without a cycle
        if (!head || !head->next) return false;
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        // Traverse the list with two pointers at different speeds
        while (fast && fast->next) {
            slow = slow->next;          // Moves 1 step
            fast = fast->next->next;    // Moves 2 steps
            
            // If they meet, there is a cycle
            if (slow == fast) {
                return true;
            }
        }
        
        // If the fast pointer reaches the end, there is no cycle
        return false;
    }
};