# 122. Best Time to Buy and Sell Stock II

Difficulty: Medium  
Language: C++  

---

## Approach

In this problem, multiple transactions are allowed.

The idea is simple:
- If the price increases from one day to the next, we take that profit.

While iterating:
- If prices[i] > prices[i-1], add the difference to total profit.

This works because adding all small upward gains results in the maximum overall profit.

---

## Time Complexity

O(n)

We iterate through the array once.

---

## Space Complexity

O(1)

No extra data structures are used.
