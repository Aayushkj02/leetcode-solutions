# 155. Min Stack

Difficulty: Medium  
Language: Java  

---

## Approach

I used two stacks:

1. stack → stores all elements.
2. minStack → keeps track of the minimum element at each level.

While pushing:
- If the new value is smaller than or equal to the current minimum,
  push it to minStack.
- Otherwise, push the current minimum again.

This ensures that minStack always stores the minimum value
corresponding to each element in the main stack.

When popping:
- Pop from both stacks.

This allows getMin() to return the minimum element in O(1) time.

---

## Time Complexity

All operations (push, pop, top, getMin) run in O(1).

---

## Space Complexity

O(n)

An additional stack is used to store minimum values.
