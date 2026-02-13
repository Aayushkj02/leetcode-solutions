# 50. Pow(x, n)

Difficulty: Medium  
Language: C++  

---

## Approach

I used Binary Exponentiation (also called Fast Power).

Instead of multiplying x, n times, we reduce the number of multiplications by:

- Squaring the base when the power is even.
- Multiplying the result when the power is odd.
- Dividing the power by 2 at each step.

If n is negative:
- Convert x to 1/x.
- Make power positive.

To handle overflow when n = INT_MIN, I convert n to long long before processing.

---

## Time Complexity

O(log n)

The power is divided by 2 in each iteration.

---

## Space Complexity

O(1)

No extra recursion or data structures are used.
