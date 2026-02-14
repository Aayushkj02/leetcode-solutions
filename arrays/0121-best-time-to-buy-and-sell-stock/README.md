# 121. Best Time to Buy and Sell Stock

Difficulty: Easy  
Language: C++  

---

## Approach

In this problem, we are allowed to complete only one transaction (buy once and sell once).

I keep track of:
- The minimum price seen so far (bestBuy)
- The maximum profit possible

While iterating through the array:
- If the current price is greater than bestBuy, I calculate the profit.
- I update the maximum profit if it improves.
- I also update bestBuy if I find a lower price.

This ensures we always buy at the lowest price before selling.

---

## Time Complexity

O(n)

We traverse the array only once.

---

## Space Complexity

O(1)

Only a few variables are used.
