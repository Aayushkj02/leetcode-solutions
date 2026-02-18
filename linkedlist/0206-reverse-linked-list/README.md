# 206. Reverse Linked List

Difficulty: Easy  
Language: C++  

---

## Approach

I used an iterative approach with three pointers:

- prev (initially NULL)
- curr (starting at head)
- next (temporary pointer)

For each node:
- Store the next node.
- Reverse the current node’s pointer.
- Move prev and curr one step forward.

At the end, prev becomes the new head of the reversed list.

---

## Time Complexity

O(n)

Each node is visited once.

---

## Space Complexity

O(1)

The reversal is done in-place without extra memory.
