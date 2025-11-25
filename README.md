<p align="center">
  <img src="https://img.shields.io/badge/DSA-LeetCode-0052CC?style=flat&logo=leetcode" />
  <img src="https://img.shields.io/badge/Language-C++-00599C?style=flat&logo=c%2B%2B&logoColor=white" />
  <img src="https://img.shields.io/badge/Languages-8-blue?style=flat&logo=programming" />
  <img src="https://img.shields.io/github/contributors/raushan728/DSA-LeetCode-Solutions?style=flat" />
  <img src="https://img.shields.io/badge/License-MIT-blue?style=flat&logo=mit" />
  <img src="https://img.shields.io/badge/PRs-Welcome-green?style=flat&logo=github" />
  <img src="https://img.shields.io/badge/Problems%20Solved-58-success?style=flat&logo=leetcode" />
</p>

---


## Quick Navigation

- [Array Problems](#array-problems)
- [Linked List Problems](#linked-list-problems)
- [Doubly Linked List Problems](#doubly-linked-list-problems)
- [Stack Problems](#stack-problems)
- [String Problems](#string-problems)
- [Two Pointers Problems](#two-pointers-problems)
- [Math Problems](#math-problems)
- [Binary Search Problems](#binary-search-problems)
- [Dynamic Programming Problems](#dynamic-programming-problems)
- [Hash Table Problems](#hash-table-problems)
- [Bit Manipulation Problems](#bit-manipulation-problems)
- [Recursion & Backtracking Problems](#recursion--backtracking-problems)

---

## Overview

This repository contains **Data Structures & Algorithms (DSA)** solutions for various **LeetCode problems** implemented in **C++**.  
The solutions are optimized for performance with detailed time and space complexity analysis.

---

## Problem Solutions

### Array Problems

| # | Problem | Solutions | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | [C++](./Cpp/001_Two_Sum.cpp) | *O(n)* | *O(n)* | Easy | Array, Hash Map |
| 4 | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | [C++](./Cpp/Median_of_Two_Sorted_Arrays.cpp) | *O(log(min(n1,n2)))* | *O(1)* | Hard | Binary Search, Array |
| 11 | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | [C++](./Cpp/Container_With_Most_Water.cpp) | *O(n)* | *O(1)* | Medium | Array, Two Pointers, Greedy |
| 14 | [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/) | [C++](./Cpp/14_Longest_Common_Prefix.cpp) | *O(n*m)* | *O(1)* | Easy | String, Array |
| 15 | [3Sum](https://leetcode.com/problems/3sum/) | [C++](./Cpp/3Sum.cpp) | *O(n²)* | *O(1)* | Medium | Array, Two Pointers |
| 18 | [4Sum](https://leetcode.com/problems/4sum/) | [C++](./Cpp/4Sum.cpp) | *O(n³)* | *O(1)* | Medium | Array, Two Pointers |
| 26 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | [C++](./Cpp/26_Remove_Duplicates_from_Sorted_Array.cpp) | *O(n)* | *O(1)* | Easy | Array, Two Pointers |
| 27 | [Remove Element](https://leetcode.com/problems/remove-element/) | [C++](./Cpp/27_Remove_Element.cpp) | *O(n)* | *O(1)* | Easy | Array, Two Pointers |
| 31 | [Next Permutation](https://leetcode.com/problems/next-permutation/) | [C++](./Cpp/Next_Permutation.cpp) | *O(n)* | *O(1)* | Medium | Array |
| 33 | [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | [C++](./Cpp/Search_in_Rotated_Sorted_Array.cpp) | *O(log n)* | *O(1)* | Medium | Array, Binary Search |
| 49 | [Group Anagrams](https://leetcode.com/problems/group-anagrams/) | [C++](./Cpp/Group_Anagrams.cpp) | *O(NK)* | *O(NK)* | Medium | Array, Hash Table |
| 53 | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) | [C++](./Cpp/53_Maximum_Subarray.cpp) | *O(n)* | *O(1)* | Medium | Array, Kadane’s Algorithm, Dynamic Programming |
| 75 | [Sort Colors](https://leetcode.com/problems/sort-colors/) | [C++](./Cpp/Sort_Colors.cpp) | *O(n)* | *O(1)* | Medium | Array, Two Pointers, Dutch National Flag |
| 88 | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | [C++](./Cpp/88_Merge_Sorted_Array.cpp) | *O(m+n)* | *O(1)* | Easy | Array, Two Pointers |
| 121 | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | [C++](./Cpp/121_Best_Time_to_Buy_and_Sell_Stock.cpp) | *O(n)* | *O(1)* | Easy | Array, Greedy |
| 136 | [Single Number](https://leetcode.com/problems/single-number/) | [C++](./Cpp/136_Single_Number.cpp) | *O(n)* | *O(1)* | Easy | Array, Bit Manipulation |
| 169 | [Majority Element](https://leetcode.com/problems/majority-element/) | [C++](./Cpp/Majority_Element.cpp) | *O(n)* | *O(1)* | Easy | Array, Hash Table, Boyer–Moore |
| 209 | [Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/) | [C++](./Cpp/209_Minimum_Size_Subarray_Sum.cpp) | *O(n)* | *O(1)* | Medium | Sliding Window, Array, Binary Search |
| 217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | [C++](./Cpp/Contains_Duplicate.cpp) | *O(n)* | *O(n)* | Easy | Hash Table, Array |
| 238 | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | [C++](./Cpp/Product_of_Array_Except_Self.cpp) | *O(n)* | *O(1)* | Medium | Array, Prefix/Suffix Product |
| 283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/) | [C++](./Cpp/283_Move_zeroes.cpp) | *O(n)* | *O(1)* | Easy | Array, Two Pointers |
| 287 | [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/) | [C++](./Cpp/Find_the_Duplicate_Number.cpp) | *O(n)* | *O(1)* | Medium | Array, Two Pointers, Cycle Detection |
| 383 | [Ransom Note](https://leetcode.com/problems/ransom-note/) | [C++](./Cpp/Ransom_Note.cpp) | *O(n)* | *O(1)* | Easy | Array, Hash Table |
| 496 | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/) | [C++](./Cpp/Next_Greater_Element_I.cpp) | *O(n+m)* | *O(n)* | Easy | Array, Stack, Hash Table |
| 540 | [Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/) | [C++](./Cpp/Single_Element_in_a_Sorted_Array.cpp) | *O(log n)* | *O(1)* | Medium | Array, Binary Search |
| 560 | [Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/) | [C++](./Cpp/Subarray_Sum_Equals_K.cpp) | *O(n)* | *O(n)* | Medium | Array, Hash Table, Prefix Sum |
| 581 | [Shortest Unsorted Continuous Subarray](https://leetcode.com/problems/shortest-unsorted-continuous-subarray/) | [C++](./Cpp/581_Shortest_Unsorted_Continuous_Subarray.cpp) | *O(n)* | *O(1)* | Medium | Array, Sorting |
| 852 | [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/) | [C++](./Cpp/Peak_Index_in_a_Mountain_Array.cpp) | *O(log n)* | *O(1)* | Medium | Array, Binary Search |
| 2596 | [Check Knight Tour Configuration](https://leetcode.com/problems/check-knight-tour-configuration/) | [C++](./Cpp/Check_Knight_Tour_Configuration.cpp) | *O(n²)* | *O(n²)* | Medium | Array, Backtracking |
| 2965 | [Find Missing and Repeated Values](https://leetcode.com/problems/find-missing-and-repeated-values/) | [C++](./Cpp/Find_Missing_and_Repeated_Values.cpp) | *O(n²)* | *O(n²)* | Easy | Array, Hash Table |

---

### Linked List Problems

| # | Problem | Solutions | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 21 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | [C++](./Cpp/Merge_Two_Sorted_Lists.cpp) | *O(n+m)* | *O(n+m)* | Easy | Linked List, Recursion |
| 24 | [Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/) | [C++](./Cpp/Swap_Nodes_in_Pairs.cpp) | *O(n)* | *O(1)* | Medium | Linked List, Two Pointers |
| 25 | [Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/) | [C++](./Cpp/Reverse_Nodes_in_k_Group.cpp) | *O(n)* | *O(n/k)* | Hard | Linked List, Recursion |
| 138 | [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/) | [C++](./Cpp/Copy_List_with_Random_Pointer.cpp) | *O(n)* | *O(n)* | Medium | Linked List, Hash Table |
| 141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) | [C++](./Cpp/Linked_List_Cycle.cpp) | *O(n)* | *O(1)* | Easy | Linked List, Two Pointers |
| 206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | [C++](./Cpp/Reverse_Linked_List.cpp) | *O(n)* | *O(1)* | Easy | Linked List |
| 430 | [Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/) | [C++](./Cpp/Flatten_a_Multilevel_Doubly_Linked_List.cpp) | *O(n)* | *O(1)* | Medium | Linked List, Doubly Linked List, Recursion, DFS |
| 876 | [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/) | [C++](./Cpp/Middle_of_the_Linked_List.cpp) | *O(n)* | *O(1)* | Easy | Linked List, Two Pointers |

---

### Doubly Linked List Problems

| # | Problem | Solutions | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 430 | [Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/) | [C++](./Cpp/Flatten_a_Multilevel_Doubly_Linked_List.cpp) | *O(n)* | *O(1)* | Medium | Linked List, Doubly Linked List, Recursion, DFS |

---

### Stack Problems

| # | Problem | Solutions | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 20 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | [C++](./Cpp/Valid_Parentheses.cpp) | *O(n)* | *O(n)* | Easy | String, Stack |
| 155 | [Min Stack](https://leetcode.com/problems/min-stack/) | [C++](./Cpp/Min_Stack.cpp) | *O(1)* | *O(n)* | Medium | Stack, Design |
| 496 | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/) | [C++](./Cpp/Next_Greater_Element_I.cpp) | *O(n+m)* | *O(n)* | Easy | Array, Stack, Hash Table |

---

### String Problems

| # | Problem | Solutions | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 14 | [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/) | [C++](./Cpp/14_Longest_Common_Prefix.cpp) | *O(n*m)* | *O(1)* | Easy | String, Array |
| 20 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | [C++](./Cpp/Valid_Parentheses.cpp) | *O(n)* | *O(n)* | Easy | String, Stack |
| 76 | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) | [C++](./Cpp/Minimum_Window_Substring.cpp) | *O(n)* | *O(k)* | Hard | String, Sliding Window |
| 125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | [C++](./Cpp/125_Valid_Palindrome.cpp) | *O(n)* | *O(1)* | Easy | String, Two Pointers |
| 131 | [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/) | [C++](./Cpp/Palindrome_Partitioning.cpp) | *O(n × 2^n)* | *O(n)* | Medium | Backtracking, Recursion, String |
| 151 | [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/) | [C++](./Cpp/Reverse_Words_in_a_String.cpp) | *O(n)* | *O(1)* | Medium | String, Two Pointers |
| 242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) | [C++](./Cpp/Valid_Anagram.cpp) | *O(n)* | *O(1)* | Easy | Hash Table, String |
| 443 | [String Compression](https://leetcode.com/problems/string-compression/) | [C++](./Cpp/String_Compression.cpp) | *O(n)* | *O(1)* | Easy | String, Two Pointers |
| 567 | [Permutation in String](https://leetcode.com/problems/permutation-in-string/) | [C++](./Cpp/Permutation_in_String.cpp) | *O(n)* | *O(1)* | Medium | String, Sliding Window |
| 1910 | [Remove All Occurrences of a Substring](https://leetcode.com/problems/remove-all-occurrences-of-a-substring/) | [C++](./Cpp/Remove_All_Occurrences_of_a_Substring.cpp) | *O(n×m)* | *O(1)* | Medium | String |

---

### Two Pointers Problems

| # | Problem | Solutions | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 11 | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | [C++](./Cpp/Container_With_Most_Water.cpp) | *O(n)* | *O(1)* | Medium | Array, Two Pointers, Greedy |
| 15 | [3Sum](https://leetcode.com/problems/3sum/) | [C++](./Cpp/3Sum.cpp) | *O(n²)* | *O(1)* | Medium | Array, Two Pointers |
| 18 | [4Sum](https://leetcode.com/problems/4sum/) | [C++](./Cpp/4Sum.cpp) | *O(n³)* | *O(1)* | Medium | Array, Two Pointers |
| 24 | [Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/) | [C++](./Cpp/Swap_Nodes_in_Pairs.cpp) | *O(n)* | *O(1)* | Medium | Linked List, Two Pointers |
| 26 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | [C++](./Cpp/26_Remove_Duplicates_from_Sorted_Array.cpp) | *O(n)* | *O(1)* | Easy | Array, Two Pointers |
| 27 | [Remove Element](https://leetcode.com/problems/remove-element/) | [C++](./Cpp/27_Remove_Element.cpp) | *O(n)* | *O(1)* | Easy | Array, Two Pointers |
| 75 | [Sort Colors](https://leetcode.com/problems/sort-colors/) | [C++](./Cpp/Sort_Colors.cpp) | *O(n)* | *O(1)* | Medium | Array, Two Pointers, Dutch National Flag |
| 88 | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | [C++](./Cpp/88_Merge_Sorted_Array.cpp) | *O(m+n)* | *O(1)* | Easy | Array, Two Pointers |
| 125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | [C++](./Cpp/125_Valid_Palindrome.cpp) | *O(n)* | *O(1)* | Easy | String, Two Pointers |
| 141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) | [C++](./Cpp/Linked_List_Cycle.cpp) | *O(n)* | *O(1)* | Easy | Linked List, Two Pointers |
| 151 | [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/) | [C++](./Cpp/Reverse_Words_in_a_String.cpp) | *O(n)* | *O(1)* | Medium | String, Two Pointers |
| 283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/) | [C++](./Cpp/283_Move_zeroes.cpp) | *O(n)* | *O(1)* | Easy | Array, Two Pointers |
| 287 | [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/) | [C++](./Cpp/Find_the_Duplicate_Number.cpp) | *O(n)* | *O(1)* | Medium | Array, Two Pointers, Cycle Detection |
| 443 | [String Compression](https://leetcode.com/problems/string-compression/) | [C++](./Cpp/String_Compression.cpp) | *O(n)* | *O(1)* | Easy | String, Two Pointers |
| 876 | [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/) | [C++](./Cpp/Middle_of_the_Linked_List.cpp) | *O(n)* | *O(1)* | Easy | Linked List, Two Pointers |

---

### Math Problems

| # | Problem | Solutions | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 50 | [Pow(x, n)](https://leetcode.com/problems/powx-n/) | [C++](./Cpp/Pow(x, n).cpp) | *O(log N)* | *O(1)* | Medium | Math, Binary Exponentiation |
| 509 | [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/) | [C++](./Cpp/Fibonacci_Number.cpp) | *O(n)* | *O(1)* | Easy | Math, Dynamic Programming, Recursion |

---

### Binary Search Problems

| # | Problem | Solutions | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 4 | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | [C++](./Cpp/Median_of_Two_Sorted_Arrays.cpp) | *O(log(min(n1,n2)))* | *O(1)* | Hard | Binary Search, Array |
| 33 | [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | [C++](./Cpp/Search_in_Rotated_Sorted_Array.cpp) | *O(log n)* | *O(1)* | Medium | Array, Binary Search |
| 209 | [Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/) | [C++](./Cpp/209_Minimum_Size_Subarray_Sum.cpp) | *O(n)* | *O(1)* | Medium | Sliding Window, Array, Binary Search |
| 540 | [Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/) | [C++](./Cpp/Single_Element_in_a_Sorted_Array.cpp) | *O(log n)* | *O(1)* | Medium | Array, Binary Search |
| 704 | [Binary Search](https://leetcode.com/problems/binary-search/) | [C++](./Cpp/Binary_Search.cpp) | *O(log n)* | *O(log n)* | Easy | Binary Search, Recursion |
| 852 | [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/) | [C++](./Cpp/Peak_Index_in_a_Mountain_Array.cpp) | *O(log n)* | *O(1)* | Medium | Array, Binary Search |

---

### Dynamic Programming Problems

| # | Problem | Solutions | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 53 | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) | [C++](./Cpp/53_Maximum_Subarray.cpp) | *O(n)* | *O(1)* | Medium | Array, Kadane’s Algorithm, Dynamic Programming |
| 509 | [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/) | [C++](./Cpp/Fibonacci_Number.cpp) | *O(n)* | *O(1)* | Easy | Math, Dynamic Programming, Recursion |

---

### Hash Table Problems

| # | Problem | Solutions | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | [C++](./Cpp/001_Two_Sum.cpp) | *O(n)* | *O(n)* | Easy | Array, Hash Map |
| 49 | [Group Anagrams](https://leetcode.com/problems/group-anagrams/) | [C++](./Cpp/Group_Anagrams.cpp) | *O(NK)* | *O(NK)* | Medium | Array, Hash Table |
| 138 | [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/) | [C++](./Cpp/Copy_List_with_Random_Pointer.cpp) | *O(n)* | *O(n)* | Medium | Linked List, Hash Table |
| 169 | [Majority Element](https://leetcode.com/problems/majority-element/) | [C++](./Cpp/Majority_Element.cpp) | *O(n)* | *O(1)* | Easy | Array, Hash Table, Boyer–Moore |
| 217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | [C++](./Cpp/Contains_Duplicate.cpp) | *O(n)* | *O(n)* | Easy | Hash Table, Array |
| 242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) | [C++](./Cpp/Valid_Anagram.cpp) | *O(n)* | *O(1)* | Easy | Hash Table, String |
| 347 | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | [C++](./Cpp/Top_K_Frequent_Elements.cpp) | *O(n log k)* | *O(n)* | Medium | Hash Table, Heap |
| 383 | [Ransom Note](https://leetcode.com/problems/ransom-note/) | [C++](./Cpp/Ransom_Note.cpp) | *O(n)* | *O(1)* | Easy | Array, Hash Table |
| 496 | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/) | [C++](./Cpp/Next_Greater_Element_I.cpp) | *O(n+m)* | *O(n)* | Easy | Array, Stack, Hash Table |
| 560 | [Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/) | [C++](./Cpp/Subarray_Sum_Equals_K.cpp) | *O(n)* | *O(n)* | Medium | Array, Hash Table, Prefix Sum |
| 2965 | [Find Missing and Repeated Values](https://leetcode.com/problems/find-missing-and-repeated-values/) | [C++](./Cpp/Find_Missing_and_Repeated_Values.cpp) | *O(n²)* | *O(n²)* | Easy | Array, Hash Table |

---

### Bit Manipulation Problems

| # | Problem | Solutions | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 136 | [Single Number](https://leetcode.com/problems/single-number/) | [C++](./Cpp/136_Single_Number.cpp) | *O(n)* | *O(1)* | Easy | Array, Bit Manipulation |

---

### Recursion & Backtracking Problems

| # | Problem | Solutions | Time | Space | Difficulty | Tags |
|---|---------|----------|------|-------|------------|------|
| 21 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | [C++](./Cpp/Merge_Two_Sorted_Lists.cpp) | *O(n+m)* | *O(n+m)* | Easy | Linked List, Recursion |
| 25 | [Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/) | [C++](./Cpp/Reverse_Nodes_in_k_Group.cpp) | *O(n)* | *O(n/k)* | Hard | Linked List, Recursion |
| 37 | [Sudoku Solver](https://leetcode.com/problems/sudoku-solver/) | [C++](./Cpp/Sudoku_Solver.cpp) | *Exponential* | *O(1)* | Hard | Backtracking, Recursion |
| 39 | [Combination Sum](https://leetcode.com/problems/combination-sum/) | [C++](./Cpp/Combination_Sum.cpp) | *O(2^n)* | *O(n)* | Medium | Backtracking, Recursion |
| 46 | [Permutations](https://leetcode.com/problems/permutations/) | [C++](./Cpp/Permutations.cpp) | *O(n × n!)* | *O(n)* | Medium | Backtracking, Recursion |
| 51 | [N-Queens](https://leetcode.com/problems/n-queens/) | [C++](./Cpp/N-Queens.cpp) | *Exponential* | *O(n)* | Hard | Backtracking, Recursion |
| 78 | [Subsets](https://leetcode.com/problems/subsets/) | [C++](./Cpp/Subsets.cpp) | *O(n × 2^n)* | *O(n)* | Medium | Backtracking, Recursion |
| 90 | [Subsets II](https://leetcode.com/problems/subsets-ii/) | [C++](./Cpp/Subsets_II.cpp) | *O(n × 2^n)* | *O(n)* | Medium | Backtracking, Recursion |
| 131 | [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/) | [C++](./Cpp/Palindrome_Partitioning.cpp) | *O(n × 2^n)* | *O(n)* | Medium | Backtracking, Recursion, String |
| 430 | [Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/) | [C++](./Cpp/Flatten_a_Multilevel_Doubly_Linked_List.cpp) | *O(n)* | *O(1)* | Medium | Linked List, Doubly Linked List, Recursion, DFS |
| 509 | [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/) | [C++](./Cpp/Fibonacci_Number.cpp) | *O(n)* | *O(1)* | Easy | Math, Dynamic Programming, Recursion |
| 704 | [Binary Search](https://leetcode.com/problems/binary-search/) | [C++](./Cpp/Binary_Search.cpp) | *O(log n)* | *O(log n)* | Easy | Binary Search, Recursion |
| 2596 | [Check Knight Tour Configuration](https://leetcode.com/problems/check-knight-tour-configuration/) | [C++](./Cpp/Check_Knight_Tour_Configuration.cpp) | *O(n²)* | *O(n²)* | Medium | Array, Backtracking |

---

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request. For major changes, please open an issue first to discuss what you would like to change.

---

## License

This project is licensed under the **MIT License** – see the [LICENSE](LICENSE) file for details.
