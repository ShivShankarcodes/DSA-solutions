## 01. Segregate Evens and Odds in a Linked List

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1)

### Problem Description

**Task:** Given the head of a singly linked list, rearrange the list in place so that all nodes containing even values appear before nodes containing odd values. Return the head of the modified linked list.

> **Note:** The relative order of the even nodes and the odd nodes should remain unchanged.

#### Examples

##### Example 1

- **Input:**
```text
Output: 8 - > 2 - > 4 - > 6 - > 17 - > 15 - > 9Explanation: Since 8, 2, 4, and 6 are even, they appear first in the list, followed by the odd numbers 17, 15, and 9.
```

##### Example 2

- **Input:**
```text
Output: 1 - > 3 - > 5 - > 7Explanation: There is no even number, so no modification is needed.
```

#### Constraints

- **1.** `1 ≤ number of nodes ≤ 10⁵¹ ≤ node- > data ≤ 10⁵`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-18 15:18:38
- **Status:** Correct
- **Marks:** 4

```cpp
/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
}; */
class Solution {
  public:
    Node* divide(Node* head) {
        // code here
        if(head == NULL || head->next == NULL) return head;
        Node* d1 = new Node(-1);
        Node* d2 = new Node(-1);
        Node* t1 = d1;
        Node* t2 = d2;
        Node* t = head;
        while(t != NULL){
            if(t->data %2 == 0){
                t1->next = t;
                t1 = t;
            }
            else {
                t2->next = t;
                t2 =t;
            }
            t = t->next;
        }
        t1->next = NULL;
        t2->next = NULL;
        t1->next = d2->next;
        return d1->next;
        
    }
};
```

*Generated on: 22/10/2026, 2:20:18 pm*