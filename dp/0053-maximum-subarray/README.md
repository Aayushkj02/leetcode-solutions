# 53. Maximum Subarray

Difficulty: Medium  
Language: C++  

---

## Approach

For this problem, I used Kadane’s Algorithm.

I maintained two variables:

- `currSum` → keeps track of the current subarray sum  
- `maxSum` → stores the maximum sum found so far  

While traversing the array:

- Add each element to `currSum`.
- Update `maxSum` if `currSum` becomes larger.
- If `currSum` becomes negative, reset it to 0 because a negative sum will reduce any future subarray sum.

This way, we efficiently find the maximum possible subarray sum in one pass.

---

## Time Complexity

O(n)

We iterate through the array once.

---

## Space Complexity

O(1)

Only constant extra variables are used.
