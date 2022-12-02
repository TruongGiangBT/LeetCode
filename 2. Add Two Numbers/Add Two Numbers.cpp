struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l1_ = l1;
        ListNode* l2_ = l2;
        ListNode* l3 = new ListNode();
        ListNode* l3_ = l3;
        int reminder = 0;
        while (true)
        {
            int l1_val, l2_val;
            if (l1_ == nullptr)
                l1_val = 0;
            else    
                l1_val = l1_->val;
            if (l2_ == nullptr)
                l2_val = 0;
            else    
                l2_val = l2_->val;

            l3_->val = (l1_val + l2_val + reminder) % 10;
            reminder = (l1_val + l2_val + reminder) / 10;

            if (l1_ != nullptr)
                l1_ = l1_->next;
            if (l2_ != nullptr)
                l2_ = l2_->next;
            if (l1_ == nullptr and l2_== nullptr and reminder == 0)
                break;
            l3_->next = new ListNode();
            l3_ = l3_->next;            
        }
        return l3;
    }
};