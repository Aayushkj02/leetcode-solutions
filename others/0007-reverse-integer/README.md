# 7. Reverse Integer

Difficulty: Medium  
Language: C++  

---

## Approach

In this problem, I reverse the digits of the given integer.

- Extract the last digit using `x % 10`.
- Add it to the reversed number after multiplying the current reversed value by 10.
- Continue until the number becomes 0.

To handle overflow:
- Before multiplying by 10, I check whether the current value exceeds `INT_MAX / 10` or goes below `INT_MIN / 10`.
- If it does, I return 0 as required by the problem.

---

## Time Complexity

O(log n)

The number of digits in the integer determines the number of iterations.

---

## Space Complexity

O(1)

Only a few variables are used.
