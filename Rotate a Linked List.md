## 01. Rotate a Linked List

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1)

### Problem Description

**Task:** Given a singly linked list, you need to left rotate the linked list k times. Return the head of the modified linked list.Examples:Input: k = 4, Output: 50 - > 10 - > 20 - > 30 - > 40

#### Examples

##### Example 1

- **Explanation:** Rotate 1: 20 - > 30 - > 40 - > 50 - > 10Rotate 2: 30 - > 40 - > 50 - > 10 - > 20Rotate 3: 40 - > 50 - > 10 - > 20 - > 30Rotate 4: 50 - > 10 - > 20 - > 30 - > 40 Input: k = 6, Output: 30 - > 40 - > 10 - > 20

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-19 01:10:26
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // code here
        if(head == NULL || head->next == NULL) return head;
        Node* temp = head;
        int n =0;
        while(temp != NULL){
            temp = temp->next;
            n++;
        }
        k = k%n;
        if(k == 0) return head;
        temp =head;
        Node* a = NULL;
        Node* b = NULL;
        Node* c = NULL;
        for(int i=1;i<=n;i++){
            if(i == k) a = temp;
            if(i == k+1) b = temp;
            if(i == n) c = temp;
            temp = temp->next;
        }
        a->next = NULL;
        c->next = head;
        return b;
    }
};
```

*Generated on: 22/10/2026, 2:21:29 pm*