# 169. Majority Element

Difficulty: Easy  
Language: C++  

---

## Approach

In this problem, I used the Boyer-Moore Voting Algorithm.

I maintained two variables:
- `ans` → stores the current candidate
- `freq` → keeps track of its frequency

While iterating through the array:

- If `freq` becomes 0, I update `ans` to the current element.
- If the current element matches `ans`, I increment `freq`.
- Otherwise, I decrement `freq`.

The idea behind this is that the majority element (which appears more than n/2 times) will not get completely cancelled out.

After finding the candidate, I run another loop to verify that it actually appears more than `n/2` times before returning it.

---

## Time Complexity

O(n)

- One pass to find the candidate  
- One pass to verify the count  

---

## Space Complexity

O(1)

Only constant extra variables were used.
