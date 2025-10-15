<h1 align="center">DSA LeetCode Solutions</h1>

<p align="center">
  <img src="https://img.shields.io/badge/DSA-LeetCode-0052CC?style=for-the-badge&logo=leetcode" />
  <img src="https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" />
  <img src="https://img.shields.io/badge/License-MIT-blue?style=for-the-badge&logo=mit" />
  <img src="https://img.shields.io/badge/PRs-Welcome-green?style=for-the-badge&logo=github" />
  <img src="https://img.shields.io/badge/Problems%20Solved-24-success?style=for-the-badge&logo=github" />
</p>

---


## Quick Navigation

- [Array Problems](#array-problems)
- [String Problems](#string-problems)
- [Two Pointers Problems](#two-pointers-problems)
- [Math Problems](#math-problems)
- [Binary Search Problems](#binary-search-problems)
- [Dynamic Programming Problems](#dynamic-programming-problems)
- [Hash Table Problems](#hash-table-problems)
- [Bit Manipulation Problems](#bit-manipulation-problems)

---

## Overview

This repository contains **Data Structures & Algorithms (DSA)** solutions for various **LeetCode problems** implemented in **C++**.  
The solutions are optimized for performance with detailed time and space complexity analysis.

---

## Problem Solutions

### Array Problems

| # | Problem | Solution | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | [C++](./Cpp/001_Two_Sum.cpp) | *O(n)* | *O(n)* | Easy | Array, Hash Map |
| 26 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | [C++](./Cpp/26_Remove_Duplicates_from_Sorted_Array.cpp) | *O(n)* | *O(1)* | Easy | Array, Two Pointers |
| 27 | [Remove Element](https://leetcode.com/problems/remove-element/) | [C++](./Cpp/27_Remove_Element.cpp) | *O(n)* | *O(1)* | Easy | Array, Two Pointers |
| 53 | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) | [C++](./Cpp/53_Maximum_Subarray.cpp) | *O(n)* | *O(1)* | Medium | Array, Kadane’s Algorithm |
| 88 | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | [C++](./Cpp/88_Merge_Sorted_Array.cpp) | *O(m+n)* | *O(1)* | Easy | Array, Two Pointers |
| 121 | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | [C++](./Cpp/121_Best_Time_to_Buy_and_Sell_Stock.cpp) | *O(n)* | *O(1)* | Easy | Array, Greedy |
| 136 | [Single Number](https://leetcode.com/problems/single-number/) | [C++](./Cpp/136_Single_Number.cpp) | *O(n)* | *O(1)* | Easy | Array, Bit Manipulation |
| 209 | [Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/) | [C++](./Cpp/209_Minimum_Size_Subarray_Sum.cpp) | *O(n)* | *O(1)* | Medium | Sliding Window |
| 283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/) | [C++](./Cpp/283_Move_zeroes.cpp) | *O(n)* | *O(1)* | Easy | Array, Two Pointers |
| 581 | [Shortest Unsorted Continuous Subarray](https://leetcode.com/problems/shortest-unsorted-continuous-subarray/) | [C++](./Cpp/581_Shortest_Unsorted_Continuous_Subarray.cpp) | *O(n)* | *O(1)* | Medium | Array, Sorting |
| 4 | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | [C++](./Cpp/Median_of_Two_Sorted_Arrays.cpp) | *O(log(min(n1,n2)))* | *O(1)* | Hard | Binary Search |
| 217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | [C++](./Cpp/Contains_Duplicate.cpp) | *O(n)* | *O(n)* | Easy | Hash Table, Array |
| 347 | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | [C++](./Cpp/Top_K_Frequent_Elements.cpp) | *O(n log k)* | *O(n)* | Medium | Hash Table, Heap |
| 11 | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | [C++](./Cpp/Container_With_Most_Water.cpp) | *O(n)* | *O(1)* | Medium | Array, Two Pointers, Greedy |
| 169 | [Majority Element](https://leetcode.com/problems/majority-element/) | [C++](./Cpp/Majority_Element.cpp) | *O(n)* | *O(1)* | Easy | Array, Hash Table, Boyer–Moore |
| 33 | [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | [C++](./Cpp/Search_in_Rotated_Sorted_Array.c) | *O(log n)* | *O(1)* | Medium | Array, Binary Search |
---

### String Problems

| # | Problem | Solution | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 14 | [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/) | [C++](./Cpp/14_Longest_Common_Prefix.cpp) | *O(n×m)* | *O(1)* | Easy | String, Array |
| 125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | [C++](./Cpp/125_Valid_Palindrome.cpp) | *O(n)* | *O(1)* | Easy | String, Two Pointers |
| 242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) | [C++](./Cpp/Valid_Anagram.cpp) | *O(n)* | *O(1)* | Easy | Hash Table, String |
| 49 | [Group Anagrams](https://leetcode.com/problems/group-anagrams/) | [C++](./Cpp/Group_Anagrams.cpp) | *O(NK)* | *O(NK)* | Medium | Array, Hash Table |
| 383 | [Ransom Note](https://leetcode.com/problems/ransom-note/) | [C++](./Cpp/Ransom_Note.cpp) | *O(n)* | *O(1)* | Easy | Array, Hash Table |
| 76 | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) | [C++](./Cpp/Minimum_Window_Substring.cpp) | *O(n)* | *O(k)* | Hard | String, Sliding Window |

---

### Two Pointers Problems

| # | Problem | Solution | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 26 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | [C++](./Cpp/26_Remove_Duplicates_from_Sorted_Array.cpp) | *O(n)* | *O(1)* | Easy | Array, Two Pointers |
| 27 | [Remove Element](https://leetcode.com/problems/remove-element/) | [C++](./Cpp/27_Remove_Element.cpp) | *O(n)* | *O(1)* | Easy | Array, Two Pointers |
| 88 | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | [C++](./Cpp/88_Merge_Sorted_Array.cpp) | *O(m+n)* | *O(1)* | Easy | Array, Two Pointers |
| 283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/) | [C++](./Cpp/283_Move_zeroes.cpp) | *O(n)* | *O(1)* | Easy | Array, Two Pointers |
| 11 | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | [C++](./Cpp/Container_With_Most_Water.cpp) | *O(n)*| *O(1)* | Medium| Array, Two Pointers, Greedy |
| 125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | [C++](./Cpp/125_Valid_Palindrome.cpp) | *O(n)* | *O(1)* | Easy | String, Two Pointers |

---

### Math Problems

| # | Problem | Solution | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 50 | [Pow(x, n)](https://leetcode.com/problems/powx-n/) | [C++](./Cpp/Pow(x,%20n).cpp) | *O(log N)* | *O(1)* | Medium | Math, Binary Exponentiation |

---

### Binary Search Problems

| # | Problem | Solution | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 4 | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | [C++](./Cpp/Median_of_Two_Sorted_Arrays.cpp) | *O(log(min(n1,n2)))* | *O(1)* | Hard | Binary Search |
| 33 | [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | [C++](./Cpp/Search_in_Rotated_Sorted_Array.c) | *O(log n)* | *O(1)* | Medium | Array, Binary Search |

---

### Dynamic Programming Problems

| # | Problem | Solution | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 53 | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) | [C++](./Cpp/53_Maximum_Subarray.cpp) | *O(n)* | *O(1)* | Medium | Dynamic Programming, Kadane’s Algorithm |

---

### Hash Table Problems

| # | Problem | Solution | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | [C++](./Cpp/001_Two_Sum.cpp) | *O(n)* | *O(n)* | Easy | Array, Hash Map |
| 217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | [C++](./Cpp/Contains_Duplicate.cpp) | *O(n)* | *O(n)* | Easy | Array, Hash Table |
| 347 | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | [C++](./Cpp/Top_K_Frequent_Elements.cpp) | *O(n log k)* | *O(n)* | Medium | Array, Hash Table, Heap |
| 49 | [Group Anagrams](https://leetcode.com/problems/group-anagrams/) | [C++](./Cpp/Group_Anagrams.cpp) | *O(NK)* | *O(NK)* | Medium | Array, Hash Table |
| 383 | [Ransom Note](https://leetcode.com/problems/ransom-note/) | [C++](./Cpp/Ransom_Note.cpp) | *O(n)* | *O(1)* | Easy | Array, Hash Table |
| 242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) | [C++](./Cpp/Valid_Anagram.cpp) | *O(n)* | *O(1)* | Easy | Hash Table, String |

---

### Bit Manipulation Problems

| # | Problem | Solution | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 136 | [Single Number](https://leetcode.com/problems/single-number/) | [C++](./Cpp/136_Single_Number.cpp) | *O(n)* | *O(1)* | Easy | Array, Bit Manipulation |

---

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request. For major changes, please open an issue first to discuss what you would like to change.

---

## License

This project is licensed under the **MIT License** – see the [LICENSE](LICENSE) file for details.
