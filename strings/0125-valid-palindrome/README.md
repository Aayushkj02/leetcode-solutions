# 125. Valid Palindrome

Difficulty: Easy  
Language: C++  

---

## Approach

In this solution, I first remove all non-alphanumeric characters
and convert the remaining characters to lowercase.

I store the cleaned result in a new string.

Then, I use two pointers:
- One starting from the beginning
- One starting from the end

If at any point the characters do not match, I return false.
If the loop completes, the string is a palindrome.

---

## Time Complexity

O(n)

We traverse the string once to clean it and once more to check.

---

## Space Complexity

O(n)

An additional string is used to store the cleaned characters.
