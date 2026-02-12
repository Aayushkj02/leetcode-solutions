# 136. Single Number

Difficulty: Easy  
Language: C++  

---

## Approach

In this problem, every element appears twice except one.

I used the XOR operation.

Properties of XOR:
- a ^ a = 0
- a ^ 0 = a

When we XOR all elements of the array:
- Duplicate numbers cancel each other.
- The remaining value is the single number.

---

## Time Complexity

O(n)

We traverse the array once.

---

## Space Complexity

O(1)

No extra data structures are used.
