## 01. Subset Sums

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/subset-sums2234/1)

### Problem Description

**Task:** Given an array arr of integers, return the sums of all subsets in the list. Return the sums in any order.Examples:Input: arr[] = [2, 3]

#### Examples

##### Example 1

- **Output:**
```text
[0, 5, 6, 7, 11, 12, 13, 18]
```
- **Explanation:** The possible subset sums are 0 (no elements), 5, 6, 7, and their combinations.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(2^n)
- **Expected Auxiliary Space Complexity:** O(2^n)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-21 15:22:12
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> p = {0};

            for (int x : arr) {
                int n = p.size();

                for (int i = 0; i < n; i++) {
                    p.push_back(p[i] + x);
                }
            }

            return p;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-21 15:19:20
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    void sumSubset(int idx,int csum,vector<int>& arr,vector<int>& p){
        if(idx == arr.size()){
            p.push_back(csum);
            return;
        }
        sumSubset(idx+1,csum+arr[idx],arr,p); // pick
        sumSubset(idx+1,csum,arr,p);    // skip
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> p;
        sumSubset(0,0,arr,p);
        return p;
    }
};
```

*Generated on: 10/21/2026, 10:41:34 PM*