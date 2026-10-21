## 01. Count Inversions

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1)

### Problem Description

**Task:** Given an array of integers arr[]. You have to find the Inversion Count of the array. Inversion count is the number of pairs of elements (i, j) such that i < j and arr[i] > arr[j].Examples:Input: arr[] = [2, 4, 1, 3, 5]Output: 3

#### Examples

##### Example 1

- **Explanation:** As all the elements of array are same, so there is no inversion count.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n log n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (3)

#### Solution 1 (C++)

- **Submitted:** 2026-10-21 22:37:12
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
  int merge(vector<int>& a, vector<int>& b, vector<int>& arr) {
             int i = 0, j = 0, k = 0;
             long long cnt = 0;

             while (i < a.size() && j < b.size()) {
                 if (a[i] <= b[j]) {
                     arr[k++] = a[i++];
                 } else {
                     arr[k++] = b[j++];
                     cnt += a.size() - i;
                 }
             }

             while (i < a.size())
                 arr[k++] = a[i++];

             while (j < b.size())
                 arr[k++] = b[j++];

             return cnt;
         }
    
    int mergeSort(vector<int>& arr) {
           int n = arr.size();
           if (n <= 1) return 0;

           vector<int> a(arr.begin(), arr.begin() + n / 2);
           vector<int> b(arr.begin() + n / 2, arr.end());

           int cnt = 0;
           cnt += mergeSort(a);
           cnt += mergeSort(b);
           cnt += merge(a, b, arr);

           return cnt;
        }
    int inversionCount(vector<int> &arr) {
        // code here
        return mergeSort(arr);
        }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-10-21 15:56:48
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int merge(vector<int>& a, vector<int>& b, vector<int>& arr) {
            int i = 0, j = 0, k = 0;
            long long cnt = 0;

            while (i < a.size() && j < b.size()) {
                if (a[i] <= b[j]) {
                    arr[k++] = a[i++];
                } else {
                    arr[k++] = b[j++];
                    cnt += a.size() - i;
                }
            }

            while (i < a.size())
                arr[k++] = a[i++];

            while (j < b.size())
                arr[k++] = b[j++];

            return cnt;
        }

        int mergeSort(vector<int>& arr) {
            int n = arr.size();
            if (n <= 1) return 0;

            vector<int> a(arr.begin(), arr.begin() + n / 2);
            vector<int> b(arr.begin() + n / 2, arr.end());

            int cnt = 0;
            cnt += mergeSort(a);
            cnt += mergeSort(b);
            cnt += merge(a, b, arr);

            return cnt;
        }
    int inversionCount(vector<int> &arr) {
        // code here
        return mergeSort(arr);
    }
};
```

#### Solution 3 (C++)

- **Submitted:** 2026-10-21 15:56:16
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
    long long merge(vector<int>& a, vector<int>& b, vector<int>& arr) {
            int i = 0, j = 0, k = 0;
            long long cnt = 0;

            while (i < a.size() && j < b.size()) {
                if (a[i] <= b[j]) {
                    arr[k++] = a[i++];
                } else {
                    arr[k++] = b[j++];
                    cnt += a.size() - i;
                }
            }

            while (i < a.size())
                arr[k++] = a[i++];

            while (j < b.size())
                arr[k++] = b[j++];

            return cnt;
        }

        long long mergeSort(vector<int>& arr) {
            int n = arr.size();
            if (n <= 1) return 0;

            vector<int> a(arr.begin(), arr.begin() + n / 2);
            vector<int> b(arr.begin() + n / 2, arr.end());

            long long cnt = 0;
            cnt += mergeSort(a);
            cnt += mergeSort(b);
            cnt += merge(a, b, arr);

            return cnt;
        }
    int inversionCount(vector<int> &arr) {
        // code here
        return mergeSort(arr);
    }
};
```

*Generated on: 10/21/2026, 10:45:12 PM*