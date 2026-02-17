# 1480. Running Sum of 1D Array

Difficulty: Easy  
Language: C++  

---

## Approach

I iterate through the array while maintaining a cumulative sum.

For each index:
- Add the current element to the running total.
- Update the same index with the new sum.

This modifies the original array to store the running sum directly.

---

## Time Complexity

O(n)

The array is traversed once.

---

## Space Complexity

O(1)

No extra array is used since the result is stored in-place.
