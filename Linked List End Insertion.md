## 01. Linked List End Insertion

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1)

### Problem Description

**Task:** You are given the head of a Singly Linked List and a value x, insert that value x at the end of the LinkedList and return the head of the modified Linked List.Examples :Input: x = 6, Output: 1 - > 2 - > 3 - > 4 - > 5 - > 6

#### Examples

##### Example 1

- **Explanation:** We can see that 6 is inserted at the end of the linkedlist.

##### Example 2

- **Input:**
```text
x = 1, Output: 4 - > 5 - > 1Explanation: We can see that 1 is inserted at the end of the linked list.
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (4)

#### Solution 1 (C++)

- **Submitted:** 2026-10-19 13:22:26
- **Status:** Correct
- **Marks:** 0

```cpp
/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {

               Node* newNode = new Node(x);

               if (head == nullptr)
                   return newNode;

               Node* last = head;

               while (last->next != nullptr) {
                   last = last->next;
               }

               last->next = newNode;
               return head;
    }
};
// Code here
        // Node* insert = new Node(x);
        // if(head == NULL) return insert;
        // Node* temp = head;
        // while(temp->next != NULL){
        //     temp = temp->next;
        // }
    
        // temp->next = insert;
        // temp = insert;
        // return head;
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-19 13:18:44
- **Status:** Correct
- **Marks:** 0

```cpp
/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        // Node* insert = new Node(x);
        // if(head == NULL) return insert;
        // Node* temp = head;
        // while(temp->next != NULL){
        //     temp = temp->next;
        // }
    
        // temp->next = insert;
        // temp = insert;
        // return head;
        Node* insert = new Node(x);

            if (head == NULL) {
                return insert;
            }

            Node* temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = insert;

            return head;
    }
};
```

#### Solution 3 (C++)

- **Submitted:** 2026-10-19 13:17:38
- **Status:** Correct
- **Marks:** 0

```cpp
/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* insert = new Node(x);
        if(head == NULL) return insert;
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
    
        temp->next = insert;
        temp = insert;
        return head;
    }
};
```

#### Solution 4 (C++)

- **Submitted:** 2026-10-19 13:13:36
- **Status:** Correct
- **Marks:** 1

```cpp
/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* insert = new Node(x);
        if(head == NULL || head->next == NULL) return insert;
        Node* temp = head;
        int n=0;
        while(temp->next != NULL){
            temp = temp->next;
            n++;
        }
        if(n == 0){
            head = temp = insert;
        }
        else{
             temp->next = insert;
             temp = insert;
        }
        return head;
    }
};
```

*Generated on: 21/10/2026, 11:28:28 pm*