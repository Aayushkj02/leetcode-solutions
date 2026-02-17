# 704. Binary Search

Difficulty: Easy  
Language: C++  

---

## Approach

I used the standard Binary Search technique.

- Initialize two pointers: start and end.
- Calculate mid in each iteration.
- If the middle element matches the target, return its index.
- If the middle element is smaller than the target, search in the right half.
- Otherwise, search in the left half.

If the target is not found, return -1.

---

## Time Complexity

O(log n)

Binary search reduces the search space by half each time.

---

## Space Complexity

O(1)

Only a few variables are used.
