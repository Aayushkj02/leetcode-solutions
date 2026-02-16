# 69. Sqrt(x)

Difficulty: Easy  
Language: C++  

---

## Approach

I used Binary Search to find the integer square root.

Since the square root of a number lies between 1 and x,
I perform binary search in that range.

At each step:
- Compute mid.
- Check mid * mid.
- If it equals x, return mid.
- If it is smaller, move right and store mid as a possible answer.
- If it is larger, move left.

The variable `ans` keeps track of the last valid square root value.

Using `long long` prevents overflow when calculating mid * mid. 

---

## Time Complexity

O(log x)

Binary search reduces the search space by half each time.

---

## Space Complexity

O(1)

Only a few variables are used.
