# 1. Two Sum

Difficulty: Easy  
Language: C++  

---

## Approach

In this solution, I used a brute force approach. Though it is not the best approach!!

I check every possible pair of elements in the array:
- For each element at index i,
- I compare it with every element after it (j = i + 1).

If the sum of nums[i] and nums[j] equals the target,
I return their indices.

Although this is not the most optimal solution, it is simple and works correctly.

---

## Time Complexity

O(n²)

Two nested loops are used to check all possible pairs.

---

## Space Complexity

O(1)

No extra data structures are used.
