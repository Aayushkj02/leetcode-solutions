# 225. Implement Stack using Queues

Difficulty: Easy  
Language: Java  

---

## Approach

In this problem, I implemented a stack using two queues.

Since a stack follows LIFO (Last In First Out) and
a queue follows FIFO (First In First Out),
we simulate stack behavior using two queues.

Push Operation:
- Insert the new element into q2.
- Move all elements from q1 to q2.
- Swap q1 and q2.

This ensures the most recently added element
always stays at the front of q1.

Pop Operation:
- Remove and return the front element of q1.

Top Operation:
- Return the front element of q1.

Empty Operation:
- Check if q1 is empty.

By rearranging elements during push,
we maintain stack order using queues.

---

## Time Complexity

Push: O(n)  
Pop: O(1)  
Top: O(1)  
Empty: O(1)

---

## Space Complexity

O(n)

Two queues are used to store the elements.
