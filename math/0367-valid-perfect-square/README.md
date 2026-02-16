# 367. Valid Perfect Square

Difficulty: Easy  
Language: C++  

---

## Approach

I used Binary Search to check whether a number is a perfect square.

The search range is from 1 to num.

At each step:
- Compute mid.
- Calculate mid * mid.
- If it equals num, return true.
- If it is greater, search in the left half.
- Otherwise, search in the right half.

If the loop ends without finding an exact match,
the number is not a perfect square.

Using `long long` avoids overflow when calculating mid * mid.

---

## Time Complexity

O(log n)

Binary search halves the range each time.

---

## Space Complexity

O(1)

No extra data structures are used.
