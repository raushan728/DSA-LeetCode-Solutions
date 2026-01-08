<p align="center">
  <img src="https://img.shields.io/badge/DSA-LeetCode-0052CC?style=flat&logo=leetcode" />
  <img src="https://img.shields.io/badge/Language-C++-00599C?style=flat&logo=c%2B%2B&logoColor=white" />
  <img src="https://img.shields.io/badge/Languages-8-blue?style=flat&logo=programming" />
  <img src="https://img.shields.io/github/contributors/raushan728/DSA-LeetCode-Solutions?style=flat" />
  <img src="https://img.shields.io/badge/License-MIT-blue?style=flat&logo=mit" />
  <img src="https://img.shields.io/badge/PRs-Welcome-green?style=flat&logo=github" />
  <img src="https://img.shields.io/badge/Problems%20Solved-141-success?style=flat&logo=leetcode" />
</p>

---

## Quick Navigation

- [Array Problems](#array-problems)
- [String Problems](#string-problems)
- [Two Pointers Problems](#two-pointers-problems)
- [Linked List Problems](#linked-list-problems)
- [Stack Problems](#stack-problems)
- [Queue Problems](#queue-problems)
- [Tree Problems](#tree-problems)
- [Graph Problems](#graph-problems)
- [Binary Search Problems](#binary-search-problems)
- [Dynamic Programming Problems](#dynamic-programming-problems)
- [Hash Table Problems](#hash-table-problems)
- [Bit Manipulation Problems](#bit-manipulation-problems)
- [Recursion & Backtracking Problems](#recursion--backtracking-problems)
- [Math Problems](#math-problems)
- [Trie Problems](#trie-problems)
- [Design Problems](#design-problems)
- [Sliding Window Problems](#sliding-window-problems)
- [Heap Problems](#heap-problems)
- [Sorting Problems](#sorting-problems)
- [Greedy Problems](#greedy-problems)

---

## Overview

This repository contains **Data Structures & Algorithms (DSA)** solutions for various **LeetCode problems** implemented in **C++**.
The solutions are optimized for performance with detailed time and space complexity analysis.

---

## Problem Solutions

### Array Problems

| #    | Problem                                                                                                                         | Solutions                                                       | Time                    | Space   | Difficulty | Tags                                           |
| ---- | ------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------- | ----------------------- | ------- | ---------- | ---------------------------------------------- |
| 1    | [Two Sum](https://leetcode.com/problems/two-sum/)                                                                               | [C++](./Cpp/001_Two_Sum.cpp)                                    | _O(n)_                  | _O(n)_  | Easy       | Array, Hash Map                                |
| 1011 | [Capacity To Ship Packages Within D Days](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/)               | [C++](./Cpp/Capacity_To_Ship_Packages_Within_D_Days.cpp)        | _O(Nlog(Sum(Weights)))_ | _O(1)_  | Medium     | Array, Binary Search                           |
| 11   | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)                                           | [C++](./Cpp/Container_With_Most_Water.cpp)                      | _O(n)_                  | _O(1)_  | Medium     | Array, Two Pointers, Greedy                    |
| 121  | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)                               | [C++](./Cpp/121_Best_Time_to_Buy_and_Sell_Stock.cpp)            | _O(n)_                  | _O(1)_  | Easy       | Array, Greedy                                  |
| 134  | [Gas Station](https://leetcode.com/problems/gas-station/)                                                                       | [C++](./Cpp/Gas_Station.cpp)                                    | _O(n)_                  | _O(1)_  | Medium     | Array, Greedy                                  |
| 136  | [Single Number](https://leetcode.com/problems/single-number/)                                                                   | [C++](./Cpp/136_Single_Number.cpp)                              | _O(n)_                  | _O(1)_  | Easy       | Array, Bit Manipulation                        |
| 15   | [3Sum](https://leetcode.com/problems/3sum/)                                                                                     | [C++](./Cpp/3Sum.cpp)                                           | _O(n²)_                 | _O(1)_  | Medium     | Array, Two Pointers                            |
| 169  | [Majority Element](https://leetcode.com/problems/majority-element/)                                                             | [C++](./Cpp/Majority_Element.cpp)                               | _O(n)_                  | _O(1)_  | Easy       | Array, Hash Table, Boyer–Moore                 |
| 18   | [4Sum](https://leetcode.com/problems/4sum/)                                                                                     | [C++](./Cpp/4Sum.cpp)                                           | _O(n³)_                 | _O(1)_  | Medium     | Array, Two Pointers                            |
| 189  | [Rotate Array](https://leetcode.com/problems/rotate-array/)                                                                     | [C++](./Cpp/Rotate_Array.cpp)                                   | _O(n)_                  | _O(1)_  | Medium     | Array                                          |
| 209  | [Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/)                                           | [C++](./Cpp/209_Minimum_Size_Subarray_Sum.cpp)                  | _O(n)_                  | _O(1)_  | Medium     | Sliding Window, Array, Binary Search           |
| 217  | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)                                                         | [C++](./Cpp/Contains_Duplicate.cpp)                             | _O(n)_                  | _O(n)_  | Easy       | Hash Table, Array                              |
| 238  | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)                                     | [C++](./Cpp/Product_of_Array_Except_Self.cpp)                   | _O(n)_                  | _O(n)_  | Medium     | Array                                          |
| 239  | [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)                                                 | [C++](./Cpp/Sliding_Window_Maximum.cpp)                         | _O(n)_                  | _O(1)_  | Hard       | Array, Sliding Window                          |
| 2596 | [Check Knight Tour Configuration](https://leetcode.com/problems/check-knight-tour-configuration/)                               | [C++](./Cpp/Check_Knight_Tour_Configuration.cpp)                | _O(n²)_                 | _O(n²)_ | Medium     | Array, Backtracking                            |
| 26   | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)                       | [C++](./Cpp/26_Remove_Duplicates_from_Sorted_Array.cpp)         | _O(n)_                  | _O(1)_  | Easy       | Array, Two Pointers                            |
| 268  | [Missing Number](https://leetcode.com/problems/missing-number/)                                                                 | [C++](./Cpp/Missing_Number.cpp)                                 | _O(n)_                  | _O(1)_  | Easy       | Array, Math                                    |
| 27   | [Remove Element](https://leetcode.com/problems/remove-element/)                                                                 | [C++](./Cpp/27_Remove_Element.cpp)                              | _O(n)_                  | _O(1)_  | Easy       | Array, Two Pointers                            |
| 283  | [Move Zeroes](https://leetcode.com/problems/move-zeroes/)                                                                       | [C++](./Cpp/283_Move_zeroes.cpp)                                | _O(n)_                  | _O(1)_  | Easy       | Array, Two Pointers                            |
| 287  | [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)                                           | [C++](./Cpp/Find_the_Duplicate_Number.cpp)                      | _O(n)_                  | _O(1)_  | Medium     | Array, Two Pointers, Cycle Detection           |
| 2965 | [Find Missing and Repeated Values](https://leetcode.com/problems/find-missing-and-repeated-values/)                             | [C++](./Cpp/Find_Missing_and_Repeated_Values.cpp)               | _O(n²)_                 | _O(n²)_ | Easy       | Array, Hash Table                              |
| 3    | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | [C++](./Cpp/Longest-Substring-Without-Repeating-Characters.cpp) | _O(n)_                  | _O(n)_  | Medium     | Array, Hash Map                                |
| 31   | [Next Permutation](https://leetcode.com/problems/next-permutation/)                                                             | [C++](./Cpp/Next_Permutation.cpp)                               | _O(n)_                  | _O(1)_  | Medium     | Array                                          |
| 33   | [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)                                 | [C++](./Cpp/Search_in_Rotated_Sorted_Array.cpp)                 | _O(log n)_              | _O(1)_  | Medium     | Array, Binary Search                           |
| 383  | [Ransom Note](https://leetcode.com/problems/ransom-note/)                                                                       | [C++](./Cpp/Ransom_Note.cpp)                                    | _O(n)_                  | _O(1)_  | Easy       | Array, Hash Table                              |
| 4    | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)                                       | [C++](./Cpp/Median_of_Two_Sorted_Arrays.cpp)                    | _O(log(min(n1,n2)))_    | _O(1)_  | Hard       | Binary Search, Array                           |
| 41   | [First Missing Positive](https://leetcode.com/problems/first-missing-positive/)                                                 | [C++](./Cpp/First-Missing-Positive.cpp)                         | _O(n)_                  | _O(1)_  | Hard       | Array                                          |
| 410  | [Split Array Largest Sum](https://leetcode.com/problems/split-array-largest-sum/)                                               | [C++](./Cpp/Split_Array_Largest_Sum.cpp)                        | _O(Nlog(Sum(Nums)))_    | _O(1)_  | Hard       | Array, Binary Search                           |
| 42   | [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)                                                       | [C++](./Cpp/Trapping_Rain_Water.cpp)                            | _O(n)_                  | _O(1)_  | Hard       | Array, Two Pointers                            |
| 49   | [Group Anagrams](https://leetcode.com/problems/group-anagrams/)                                                                 | [C++](./Cpp/Group_Anagrams.cpp)                                 | _O(NK)_                 | _O(NK)_ | Medium     | Array, Hash Table                              |
| 493  | [Reverse Pairs](https://leetcode.com/problems/reverse-pairs/)                                                                   | [C++](./Cpp/Reverse-Pairs.cpp)                                  | _O(n)_                  | _O(n)_  | Hard       | Array                                          |
| 496  | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/)                                                 | [C++](./Cpp/Next_Greater_Element_I.cpp)                         | _O(n+m)_                | _O(n)_  | Easy       | Array, Stack, Hash Table                       |
| 53   | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)                                                             | [C++](./Cpp/53_Maximum_Subarray.cpp)                            | _O(n)_                  | _O(1)_  | Medium     | Array, Kadane’s Algorithm, Dynamic Programming |
| 540  | [Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/)                             | [C++](./Cpp/Single_Element_in_a_Sorted_Array.cpp)               | _O(log n)_              | _O(1)_  | Medium     | Array, Binary Search                           |
| 56   | [Merge Intervals](https://leetcode.com/problems/merge-intervals/)                                                               | [C++](./Cpp/Merge_Intervals.cpp)                                | _O(n log n)_            | _O(n)_  | Medium     | Array, Sorting                                 |
| 560  | [Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)                                                   | [C++](./Cpp/Subarray_Sum_Equals_K.cpp)                          | _O(n)_                  | _O(n)_  | Medium     | Array, Hash Table, Prefix Sum                  |
| 581  | [Shortest Unsorted Continuous Subarray](https://leetcode.com/problems/shortest-unsorted-continuous-subarray/)                   | [C++](./Cpp/581_Shortest_Unsorted_Continuous_Subarray.cpp)      | _O(n)_                  | _O(1)_  | Medium     | Array, Sorting                                 |
| 632  | [Smallest Range Covering Elements from K Lists](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/)   | [C++](./Cpp/Smallest_Range_Covering_Elements_from_K_Lists.cpp)  | _O(n log k)_            | _O(k)_  | Hard       | Array, Hash Map, Heap                          |
| 73   | [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)                                                           | [C++](./Cpp/Set-Matrix-Zeroes.cpp)                              | _O(n)_                  | _O(n)_  | Medium     | Array                                          |
| 75   | [Sort Colors](https://leetcode.com/problems/sort-colors/)                                                                       | [C++](./Cpp/Sort_Colors.cpp)                                    | _O(n)_                  | _O(1)_  | Medium     | Array, Two Pointers, Dutch National Flag       |
| 79   | [Word Search](https://leetcode.com/problems/word-search/)                                                                       | [C++](./Cpp/Word-Search.cpp)                                    | _O(n)_                  | _O(n)_  | Medium     | Array                                          |
| 84   | [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/)                                 | [C++](./Cpp/Largest_Rectangle_in_Histogram.cpp)                 | _O(n)_                  | _O(n)_  | Hard       | Array, Stack                                   |
| 852  | [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)                                 | [C++](./Cpp/Peak_Index_in_a_Mountain_Array.cpp)                 | _O(log n)_              | _O(1)_  | Medium     | Array, Binary Search                           |
| 875  | [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/)                                                       | [C++](./Cpp/Koko_Eating_Bananas.cpp)                            | _O(Nlogm)_              | _O(1)_  | Medium     | Array Binary Search                            |
| 88   | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)                                                         | [C++](./Cpp/88_Merge_Sorted_Array.cpp)                          | _O(m+n)_                | _O(1)_  | Easy       | Array, Two Pointers                            |

---

### String Problems

| #    | Problem                                                                                                                                 | Solutions                                                           | Time         | Space  | Difficulty | Tags                            |
| ---- | --------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------- | ------------ | ------ | ---------- | ------------------------------- |
| 125  | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)                                                                     | [C++](./Cpp/125_Valid_Palindrome.cpp)                               | _O(n)_       | _O(1)_ | Easy       | String, Two Pointers            |
| 131  | [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/)                                                       | [C++](./Cpp/Palindrome_Partitioning.cpp)                            | _O(n × 2^n)_ | _O(n)_ | Medium     | Backtracking, Recursion, String |
| 151  | [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/)                                                   | [C++](./Cpp/Reverse_Words_in_a_String.cpp)                          | _O(n)_       | _O(1)_ | Medium     | String, Two Pointers            |
| 1910 | [Remove All Occurrences of a Substring](https://leetcode.com/problems/remove-all-occurrences-of-a-substring/)                           | [C++](./Cpp/Remove_All_Occurrences_of_a_Substring.cpp)              | _O(n×m)_     | _O(1)_ | Medium     | String                          |
| 20   | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)                                                                   | [C++](./Cpp/Valid_Parentheses.cpp)                                  | _O(n)_       | _O(n)_ | Easy       | String, Stack                   |
| 208  | [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/)                                               | [C++](<./Cpp/Implement_Trie_(Prefix_Tree).cpp>)                     | _O(n)_       | _O(n)_ | Medium     | Trie, Design, String            |
| 242  | [Valid Anagram](https://leetcode.com/problems/valid-anagram/)                                                                           | [C++](./Cpp/Valid_Anagram.cpp)                                      | _O(n)_       | _O(1)_ | Easy       | Hash Table, String              |
| 28   | [Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/) | [C++](./Cpp/Find_the_Index_of_the_First_Occurrence_in_a_String.cpp) | _O(N + M)_   | _O(M)_ | Easy       | String, Two Pointers            |
| 387  | [First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/)                                 | [C++](./Cpp/First_Unique_Character_in_a_String.cpp)                 | _O(n)_       | _O(1)_ | Easy       | Hash Table, String              |
| 443  | [String Compression](https://leetcode.com/problems/string-compression/)                                                                 | [C++](./Cpp/String_Compression.cpp)                                 | _O(n)_       | _O(1)_ | Easy       | String, Two Pointers            |
| 567  | [Permutation in String](https://leetcode.com/problems/permutation-in-string/)                                                           | [C++](./Cpp/Permutation_in_String.cpp)                              | _O(n)_       | _O(1)_ | Medium     | String, Sliding Window          |
| 76   | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)                                                     | [C++](./Cpp/Minimum_Window_Substring.cpp)                           | _O(n)_       | _O(k)_ | Hard       | String, Sliding Window          |

---

### Two Pointers Problems

| #   | Problem                                                                                                                                 | Solutions                                                           | Time       | Space  | Difficulty | Tags                                     |
| --- | --------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------- | ---------- | ------ | ---------- | ---------------------------------------- |
| 11  | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)                                                   | [C++](./Cpp/Container_With_Most_Water.cpp)                          | _O(n)_     | _O(1)_ | Medium     | Array, Two Pointers, Greedy              |
| 125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)                                                                     | [C++](./Cpp/125_Valid_Palindrome.cpp)                               | _O(n)_     | _O(1)_ | Easy       | String, Two Pointers                     |
| 141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)                                                                   | [C++](./Cpp/Linked_List_Cycle.cpp)                                  | _O(n)_     | _O(1)_ | Easy       | Linked List, Two Pointers                |
| 142 | [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)                                                             | [C++](./Cpp/Linked_List_Cycle_II.cpp)                               | _O(n)_     | _O(1)_ | Medium     | Linked List, Two Pointers                |
| 15  | [3Sum](https://leetcode.com/problems/3sum/)                                                                                             | [C++](./Cpp/3Sum.cpp)                                               | _O(n²)_    | _O(1)_ | Medium     | Array, Two Pointers                      |
| 151 | [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/)                                                   | [C++](./Cpp/Reverse_Words_in_a_String.cpp)                          | _O(n)_     | _O(1)_ | Medium     | String, Two Pointers                     |
| 18  | [4Sum](https://leetcode.com/problems/4sum/)                                                                                             | [C++](./Cpp/4Sum.cpp)                                               | _O(n³)_    | _O(1)_ | Medium     | Array, Two Pointers                      |
| 234 | [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)                                                         | [C++](./Cpp/Palindrome_Linked_List.cpp)                             | _O(n)_     | _O(1)_ | Easy       | Linked List, Two Pointers                |
| 24  | [Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/)                                                               | [C++](./Cpp/Swap_Nodes_in_Pairs.cpp)                                | _O(n)_     | _O(1)_ | Medium     | Linked List, Two Pointers                |
| 26  | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)                               | [C++](./Cpp/26_Remove_Duplicates_from_Sorted_Array.cpp)             | _O(n)_     | _O(1)_ | Easy       | Array, Two Pointers                      |
| 27  | [Remove Element](https://leetcode.com/problems/remove-element/)                                                                         | [C++](./Cpp/27_Remove_Element.cpp)                                  | _O(n)_     | _O(1)_ | Easy       | Array, Two Pointers                      |
| 28  | [Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/) | [C++](./Cpp/Find_the_Index_of_the_First_Occurrence_in_a_String.cpp) | _O(N + M)_ | _O(M)_ | Easy       | String, Two Pointers                     |
| 283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/)                                                                               | [C++](./Cpp/283_Move_zeroes.cpp)                                    | _O(n)_     | _O(1)_ | Easy       | Array, Two Pointers                      |
| 287 | [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)                                                   | [C++](./Cpp/Find_the_Duplicate_Number.cpp)                          | _O(n)_     | _O(1)_ | Medium     | Array, Two Pointers, Cycle Detection     |
| 42  | [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)                                                               | [C++](./Cpp/Trapping_Rain_Water.cpp)                                | _O(n)_     | _O(1)_ | Hard       | Array, Two Pointers                      |
| 443 | [String Compression](https://leetcode.com/problems/string-compression/)                                                                 | [C++](./Cpp/String_Compression.cpp)                                 | _O(n)_     | _O(1)_ | Easy       | String, Two Pointers                     |
| 75  | [Sort Colors](https://leetcode.com/problems/sort-colors/)                                                                               | [C++](./Cpp/Sort_Colors.cpp)                                        | _O(n)_     | _O(1)_ | Medium     | Array, Two Pointers, Dutch National Flag |
| 876 | [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)                                                   | [C++](./Cpp/Middle_of_the_Linked_List.cpp)                          | _O(n)_     | _O(1)_ | Easy       | Linked List, Two Pointers                |
| 88  | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)                                                                 | [C++](./Cpp/88_Merge_Sorted_Array.cpp)                              | _O(m+n)_   | _O(1)_ | Easy       | Array, Two Pointers                      |
| 92  | [Reverse Linked List II](https://leetcode.com/problems/reverse-linked-list-ii/)                                                         | [C++](./Cpp/Reverse_Linked_List_II.cpp)                             | _O(n)_     | _O(1)_ | Medium     | Linked List, Two Pointers                |

---

### Linked List Problems

| #   | Problem                                                                                                           | Solutions                                                | Time     | Space    | Difficulty | Tags                                            |
| --- | ----------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------- | -------- | -------- | ---------- | ----------------------------------------------- |
| 138 | [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/)                     | [C++](./Cpp/Copy_List_with_Random_Pointer.cpp)           | _O(n)_   | _O(n)_   | Medium     | Linked List, Hash Table                         |
| 141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)                                             | [C++](./Cpp/Linked_List_Cycle.cpp)                       | _O(n)_   | _O(1)_   | Easy       | Linked List, Two Pointers                       |
| 142 | [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)                                       | [C++](./Cpp/Linked_List_Cycle_II.cpp)                    | _O(n)_   | _O(1)_   | Medium     | Linked List, Two Pointers                       |
| 2   | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)                                                 | [C++](./Cpp/Add_Two_Numbers.cpp)                         | _O(n)_   | _O(1)_   | Medium     | Linked List, Math                               |
| 206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)                                         | [C++](./Cpp/Reverse_Linked_List.cpp)                     | _O(n)_   | _O(1)_   | Easy       | Linked List                                     |
| 21  | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)                                   | [C++](./Cpp/Merge_Two_Sorted_Lists.cpp)                  | _O(n+m)_ | _O(n+m)_ | Easy       | Linked List, Recursion                          |
| 234 | [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)                                   | [C++](./Cpp/Palindrome_Linked_List.cpp)                  | _O(n)_   | _O(1)_   | Easy       | Linked List, Two Pointers                       |
| 24  | [Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/)                                         | [C++](./Cpp/Swap_Nodes_in_Pairs.cpp)                     | _O(n)_   | _O(1)_   | Medium     | Linked List, Two Pointers                       |
| 25  | [Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)                               | [C++](./Cpp/Reverse_Nodes_in_k_Group.cpp)                | _O(n)_   | _O(n/k)_ | Hard       | Linked List, Recursion                          |
| 430 | [Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/) | [C++](./Cpp/Flatten_a_Multilevel_Doubly_Linked_List.cpp) | _O(n)_   | _O(1)_   | Medium     | Linked List, Doubly Linked List, Recursion, DFS |
| 61  | [Rotate List](https://leetcode.com/problems/rotate-list/)                                                         | [C++](./Cpp/Rotate_List.cpp)                             | _O(n)_   | _O(1)_   | Medium     | Linked List                                     |
| 876 | [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)                             | [C++](./Cpp/Middle_of_the_Linked_List.cpp)               | _O(n)_   | _O(1)_   | Easy       | Linked List, Two Pointers                       |
| 92  | [Reverse Linked List II](https://leetcode.com/problems/reverse-linked-list-ii/)                                   | [C++](./Cpp/Reverse_Linked_List_II.cpp)                  | _O(n)_   | _O(1)_   | Medium     | Linked List, Two Pointers                       |

---

### Stack Problems

| #   | Problem                                                                                         | Solutions                                       | Time     | Space  | Difficulty | Tags                     |
| --- | ----------------------------------------------------------------------------------------------- | ----------------------------------------------- | -------- | ------ | ---------- | ------------------------ |
| 155 | [Min Stack](https://leetcode.com/problems/min-stack/)                                           | [C++](./Cpp/Min_Stack.cpp)                      | _O(1)_   | _O(n)_ | Medium     | Stack, Design            |
| 20  | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)                           | [C++](./Cpp/Valid_Parentheses.cpp)              | _O(n)_   | _O(n)_ | Easy       | String, Stack            |
| 232 | [Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)     | [C++](./Cpp/Implement_Queue_using_Stacks.cpp)   | _O(n)_   | _O(n)_ | Easy       | Queue, Stack             |
| 496 | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/)                 | [C++](./Cpp/Next_Greater_Element_I.cpp)         | _O(n+m)_ | _O(n)_ | Easy       | Array, Stack, Hash Table |
| 84  | [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/) | [C++](./Cpp/Largest_Rectangle_in_Histogram.cpp) | _O(n)_   | _O(n)_ | Hard       | Array, Stack             |
| 901 | [Online Stock Span](https://leetcode.com/problems/online-stock-span/)                           | [C++](./Cpp/Online_Stock_Span.cpp)              | _O(1)_   | _O(n)_ | Medium     | Stack                    |

---

### Queue Problems

| #    | Problem                                                                                     | Solutions                                     | Time   | Space  | Difficulty | Tags              |
| ---- | ------------------------------------------------------------------------------------------- | --------------------------------------------- | ------ | ------ | ---------- | ----------------- |
| 2073 | [Time Needed to Buy Tickets](https://leetcode.com/problems/time-needed-to-buy-tickets/)     | [C++](./Cpp/Time_Needed_to_Buy_Tickets.cpp)   | _O(n)_ | _O(n)_ | Easy       | Queue, Simulation |
| 232  | [Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/) | [C++](./Cpp/Implement_Queue_using_Stacks.cpp) | _O(n)_ | _O(n)_ | Easy       | Queue, Stack      |

---

### Tree Problems

| #    | Problem                                                                                                                                               | Solutions                                                                  | Time   | Space      | Difficulty | Tags                                  |
| ---- | ----------------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------- | ------ | ---------- | ---------- | ------------------------------------- |
| 100  | [Same Tree](https://leetcode.com/problems/same-tree/)                                                                                                 | [C++](./Cpp/Same_Tree.cpp)                                                 | _O(n)_ | _O(log n)_ | Easy       | Tree, Depth-First Search, Binary Tree |
| 1008 | [Construct Binary Search Tree from Preorder Traversal](https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/)           | [C++](./Cpp/Construct_Binary_Search_Tree_from_Preorder_Traversal.cpp)      | _O(n)_ | _O(n)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 101  | [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)                                                                                       | [C++](./Cpp/Symmetric_Tree.cpp)                                            | _O(n)_ | _O(h)_     | Easy       | Tree, Recursion, Binary Tree          |
| 102  | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)                                                 | [C++](./Cpp/Binary_Tree_Level_Order_Traversal.cpp)                         | _O(n)_ | _O(n)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 104  | [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)                                                           | [C++](./Cpp/Maximum_Depth_of_Binary_Tree.cpp)                              | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 105  | [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | [C++](./Cpp/Construct_Binary_Tree_from_Preorder_and_inorder_Traversal.cpp) | _O(n)_ | _O(n)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 108  | [Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)                               | [C++](./Cpp/Convert_Sorted_Array_to_Binary_Search_Tree.cpp)                | _O(n)_ | _O(log n)_ | Easy       | Tree, Depth-First Search, Binary Tree |
| 110  | [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)                                                                           | [C++](./Cpp/Balanced_Binary_Tree.cpp)                                      | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 114  | [Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/)                                               | [C++](./Cpp/Flatten_Binary_Tree_to_Linked_List.cpp)                        | _O(n)_ | _O(1)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 116  | [Populating Next Right Pointers in Each Node](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/)                             | [C++](./Cpp/Populating_Next_Right_Pointers_in_Each_Node.cpp)               | _O(n)_ | _O(1)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 124  | [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)                                                           | [C++](./Cpp/Binary_Tree_Maximum_Path_Sum.cpp)                              | _O(n)_ | _O(h)_     | Hard       | Tree, Recursion, Binary Tree          |
| 144  | [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/)                                                       | [C++](./Cpp/Binary_Tree_Preorder_Traversal.cpp)                            | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 145  | [Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/)                                                     | [C++](./Cpp/Binary_Tree_Postorder_Traversal.cpp)                           | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 173  | [Binary Search Tree Iterator](https://leetcode.com/problems/binary-search-tree-iterator/)                                                             | [C++](./Cpp/Binary_Search_Tree_Iterator.cpp)                               | _O(n)_ | _O(h)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 230  | [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)                                                         | [C++](./Cpp/Kth_Smallest_Element_in_a_BST.cpp)                             | _O(n)_ | _O(h)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 235  | [Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)                       | [C++](./Cpp/Lowest_Common_Ancestor_of_a_Binary_Search_Tree.cpp)            | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 236  | [Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)                                     | [C++](./Cpp/Lowest_Common_Ancestor_of_a_Binary_Tree.cpp)                   | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 257  | [Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/)                                                                                 | [C++](./Cpp/Binary_Tree_Paths.cpp)                                         | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 543  | [Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/)                                                                     | [C++](./Cpp/Diameter_of_Binary_Tree.cpp)                                   | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 662  | [Maximum Width of Binary Tree](https://leetcode.com/problems/maximum-width-of-binary-tree/)                                                           | [C++](./Cpp/Maximum_Width_of_Binary_Tree.cpp)                              | _O(n)_ | _O(n)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 783  | [Minimum Distance Between BST Nodes](https://leetcode.com/problems/minimum-distance-between-bst-nodes/)                                               | [C++](./Cpp/Minimum_Distance_Between_BST_Nodes.cpp)                        | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 94   | [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)                                                         | [C++](./Cpp/Binary_Tree_Inorder_Traversal.cpp)                             | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 98   | [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)                                                             | [C++](./Cpp/Validate_Binary_Search_Tree.cpp)                               | _O(n)_ | _O(h)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 99   | [Recover Binary Search Tree](https://leetcode.com/problems/recover-binary-search-tree/)                                                               | [C++](./Cpp/Recover_Binary_Search_Tree.cpp)                                | _O(n)_ | _O(h)_     | Medium     | Tree, Depth-First Search, Binary Tree |

---

### Graph Problems

| #   | Problem                                                                                                           | Solutions                                                | Time             | Space    | Difficulty | Tags                                                        |
| --- | ----------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------- | ---------------- | -------- | ---------- | ----------------------------------------------------------- |
| 133 | [Clone Graph](https://leetcode.com/problems/clone-graph/)                                                         | [C++](./Cpp/Clone_Graph.cpp)                             | _O(n)_           | _O(n)_   | Medium     | Graph, Hash Table, Depth-First Search, Breadth-First Search |
| 200 | [Number of Islands](https://leetcode.com/problems/number-of-islands/)                                             | [C++](./Cpp/Number_of_Islands.cpp)                       | _O(n)_           | _O(n)_   | Medium     | Graph, Depth-First Search, Breadth-First Search             |
| 207 | [Course Schedule](https://leetcode.com/problems/course-schedule/)                                                 | [C++](./Cpp/Course_Schedule.cpp)                         | _O(n)_           | _O(n)_   | Medium     | Graph, Depth-First Search, Breadth-First Search             |
| 430 | [Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/) | [C++](./Cpp/Flatten_a_Multilevel_Doubly_Linked_List.cpp) | _O(n)_           | _O(1)_   | Medium     | Linked List, Doubly Linked List, Recursion, DFS             |
| 743 | [Network Delay Time](https://leetcode.com/problems/network-delay-time/)                                           | [C++](./Cpp/Network_Delay_Time.cpp)                      | _O((V+E) log V)_ | _O(V+E)_ | Medium     | Graph, Dijkstra, Heap, Shortest Path                        |
| 785 | [Is Graph Bipartite?](https://leetcode.com/problems/is-graph-bipartite/)                                          | [C++](./Cpp/Is_Graph_Bipartite?.cpp)                     | _O(V+E)_         | _O(V)_   | Medium     | Graph, Depth-First Search, Breadth-First Search, Bipartite  |
| 994 | [Rotting Oranges](https://leetcode.com/problems/rotting-oranges/)                                                 | [C++](./Cpp/Rotting_Oranges.cpp)                         | _O(n)_           | _O(n)_   | Medium     | Graph, Breadth-First Search                                 |

---

### Binary Search Problems

| #    | Problem                                                                                                           | Solutions                                                | Time                    | Space      | Difficulty | Tags                                 |
| ---- | ----------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------- | ----------------------- | ---------- | ---------- | ------------------------------------ |
| 1011 | [Capacity To Ship Packages Within D Days](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/) | [C++](./Cpp/Capacity_To_Ship_Packages_Within_D_Days.cpp) | _O(Nlog(Sum(Weights)))_ | _O(1)_     | Medium     | Array, Binary Search                 |
| 209  | [Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/)                             | [C++](./Cpp/209_Minimum_Size_Subarray_Sum.cpp)           | _O(n)_                  | _O(1)_     | Medium     | Sliding Window, Array, Binary Search |
| 33   | [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)                   | [C++](./Cpp/Search_in_Rotated_Sorted_Array.cpp)          | _O(log n)_              | _O(1)_     | Medium     | Array, Binary Search                 |
| 4    | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)                         | [C++](./Cpp/Median_of_Two_Sorted_Arrays.cpp)             | _O(log(min(n1,n2)))_    | _O(1)_     | Hard       | Binary Search, Array                 |
| 410  | [Split Array Largest Sum](https://leetcode.com/problems/split-array-largest-sum/)                                 | [C++](./Cpp/Split_Array_Largest_Sum.cpp)                 | _O(Nlog(Sum(Nums)))_    | _O(1)_     | Hard       | Array, Binary Search                 |
| 540  | [Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/)               | [C++](./Cpp/Single_Element_in_a_Sorted_Array.cpp)        | _O(log n)_              | _O(1)_     | Medium     | Array, Binary Search                 |
| 704  | [Binary Search](https://leetcode.com/problems/binary-search/)                                                     | [C++](./Cpp/Binary_Search.cpp)                           | _O(log n)_              | _O(log n)_ | Easy       | Binary Search, Recursion             |
| 852  | [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)                   | [C++](./Cpp/Peak_Index_in_a_Mountain_Array.cpp)          | _O(log n)_              | _O(1)_     | Medium     | Array, Binary Search                 |
| 875  | [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/)                                         | [C++](./Cpp/Koko_Eating_Bananas.cpp)                     | _O(Nlogm)_              | _O(1)_     | Medium     | Array Binary Search                  |

---

### Dynamic Programming Problems

| #   | Problem                                                             | Solutions                            | Time   | Space  | Difficulty | Tags                                           |
| --- | ------------------------------------------------------------------- | ------------------------------------ | ------ | ------ | ---------- | ---------------------------------------------- |
| 509 | [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/) | [C++](./Cpp/Fibonacci_Number.cpp)    | _O(n)_ | _O(1)_ | Easy       | Math, Dynamic Programming, Recursion           |
| 53  | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) | [C++](./Cpp/53_Maximum_Subarray.cpp) | _O(n)_ | _O(1)_ | Medium     | Array, Kadane’s Algorithm, Dynamic Programming |

---

### Hash Table Problems

| #    | Problem                                                                                                                         | Solutions                                                       | Time         | Space   | Difficulty | Tags                           |
| ---- | ------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------- | ------------ | ------- | ---------- | ------------------------------ |
| 1    | [Two Sum](https://leetcode.com/problems/two-sum/)                                                                               | [C++](./Cpp/001_Two_Sum.cpp)                                    | _O(n)_       | _O(n)_  | Easy       | Array, Hash Map                |
| 138  | [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/)                                   | [C++](./Cpp/Copy_List_with_Random_Pointer.cpp)                  | _O(n)_       | _O(n)_  | Medium     | Linked List, Hash Table        |
| 169  | [Majority Element](https://leetcode.com/problems/majority-element/)                                                             | [C++](./Cpp/Majority_Element.cpp)                               | _O(n)_       | _O(1)_  | Easy       | Array, Hash Table, Boyer–Moore |
| 217  | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)                                                         | [C++](./Cpp/Contains_Duplicate.cpp)                             | _O(n)_       | _O(n)_  | Easy       | Hash Table, Array              |
| 242  | [Valid Anagram](https://leetcode.com/problems/valid-anagram/)                                                                   | [C++](./Cpp/Valid_Anagram.cpp)                                  | _O(n)_       | _O(1)_  | Easy       | Hash Table, String             |
| 2965 | [Find Missing and Repeated Values](https://leetcode.com/problems/find-missing-and-repeated-values/)                             | [C++](./Cpp/Find_Missing_and_Repeated_Values.cpp)               | _O(n²)_      | _O(n²)_ | Easy       | Array, Hash Table              |
| 3    | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | [C++](./Cpp/Longest-Substring-Without-Repeating-Characters.cpp) | _O(n)_       | _O(n)_  | Medium     | Array, Hash Map                |
| 347  | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)                                               | [C++](./Cpp/Top_K_Frequent_Elements.cpp)                        | _O(n log k)_ | _O(n)_  | Medium     | Hash Table, Heap               |
| 383  | [Ransom Note](https://leetcode.com/problems/ransom-note/)                                                                       | [C++](./Cpp/Ransom_Note.cpp)                                    | _O(n)_       | _O(1)_  | Easy       | Array, Hash Table              |
| 387  | [First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/)                         | [C++](./Cpp/First_Unique_Character_in_a_String.cpp)             | _O(n)_       | _O(1)_  | Easy       | Hash Table, String             |
| 49   | [Group Anagrams](https://leetcode.com/problems/group-anagrams/)                                                                 | [C++](./Cpp/Group_Anagrams.cpp)                                 | _O(NK)_      | _O(NK)_ | Medium     | Array, Hash Table              |
| 496  | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/)                                                 | [C++](./Cpp/Next_Greater_Element_I.cpp)                         | _O(n+m)_     | _O(n)_  | Easy       | Array, Stack, Hash Table       |
| 560  | [Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)                                                   | [C++](./Cpp/Subarray_Sum_Equals_K.cpp)                          | _O(n)_       | _O(n)_  | Medium     | Array, Hash Table, Prefix Sum  |
| 632  | [Smallest Range Covering Elements from K Lists](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/)   | [C++](./Cpp/Smallest_Range_Covering_Elements_from_K_Lists.cpp)  | _O(n log k)_ | _O(k)_  | Hard       | Array, Hash Map, Heap          |

---

### Bit Manipulation Problems

| #   | Problem                                                       | Solutions                          | Time   | Space  | Difficulty | Tags                    |
| --- | ------------------------------------------------------------- | ---------------------------------- | ------ | ------ | ---------- | ----------------------- |
| 136 | [Single Number](https://leetcode.com/problems/single-number/) | [C++](./Cpp/136_Single_Number.cpp) | _O(n)_ | _O(1)_ | Easy       | Array, Bit Manipulation |

---

### Recursion & Backtracking Problems

| #    | Problem                                                                                                           | Solutions                                                | Time          | Space      | Difficulty | Tags                                            |
| ---- | ----------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------- | ------------- | ---------- | ---------- | ----------------------------------------------- |
| 101  | [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)                                                   | [C++](./Cpp/Symmetric_Tree.cpp)                          | _O(n)_        | _O(h)_     | Easy       | Tree, Recursion, Binary Tree                    |
| 124  | [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)                       | [C++](./Cpp/Binary_Tree_Maximum_Path_Sum.cpp)            | _O(n)_        | _O(h)_     | Hard       | Tree, Recursion, Binary Tree                    |
| 131  | [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/)                                 | [C++](./Cpp/Palindrome_Partitioning.cpp)                 | _O(n × 2^n)_  | _O(n)_     | Medium     | Backtracking, Recursion, String                 |
| 21   | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)                                   | [C++](./Cpp/Merge_Two_Sorted_Lists.cpp)                  | _O(n+m)_      | _O(n+m)_   | Easy       | Linked List, Recursion                          |
| 25   | [Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)                               | [C++](./Cpp/Reverse_Nodes_in_k_Group.cpp)                | _O(n)_        | _O(n/k)_   | Hard       | Linked List, Recursion                          |
| 2596 | [Check Knight Tour Configuration](https://leetcode.com/problems/check-knight-tour-configuration/)                 | [C++](./Cpp/Check_Knight_Tour_Configuration.cpp)         | _O(n²)_       | _O(n²)_    | Medium     | Array, Backtracking                             |
| 37   | [Sudoku Solver](https://leetcode.com/problems/sudoku-solver/)                                                     | [C++](./Cpp/Sudoku_Solver.cpp)                           | _Exponential_ | _O(1)_     | Hard       | Backtracking, Recursion                         |
| 39   | [Combination Sum](https://leetcode.com/problems/combination-sum/)                                                 | [C++](./Cpp/Combination_Sum.cpp)                         | _O(2^n)_      | _O(n)_     | Medium     | Backtracking, Recursion                         |
| 430  | [Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/) | [C++](./Cpp/Flatten_a_Multilevel_Doubly_Linked_List.cpp) | _O(n)_        | _O(1)_     | Medium     | Linked List, Doubly Linked List, Recursion, DFS |
| 46   | [Permutations](https://leetcode.com/problems/permutations/)                                                       | [C++](./Cpp/Permutations.cpp)                            | _O(n × n!)_   | _O(n)_     | Medium     | Backtracking, Recursion                         |
| 509  | [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)                                               | [C++](./Cpp/Fibonacci_Number.cpp)                        | _O(n)_        | _O(1)_     | Easy       | Math, Dynamic Programming, Recursion            |
| 51   | [N-Queens](https://leetcode.com/problems/n-queens/)                                                               | [C++](./Cpp/N-Queens.cpp)                                | _Exponential_ | _O(n)_     | Hard       | Backtracking, Recursion                         |
| 704  | [Binary Search](https://leetcode.com/problems/binary-search/)                                                     | [C++](./Cpp/Binary_Search.cpp)                           | _O(log n)_    | _O(log n)_ | Easy       | Binary Search, Recursion                        |
| 78   | [Subsets](https://leetcode.com/problems/subsets/)                                                                 | [C++](./Cpp/Subsets.cpp)                                 | _O(n × 2^n)_  | _O(n)_     | Medium     | Backtracking, Recursion                         |
| 90   | [Subsets II](https://leetcode.com/problems/subsets-ii/)                                                           | [C++](./Cpp/Subsets_II.cpp)                              | _O(n × 2^n)_  | _O(n)_     | Medium     | Backtracking, Recursion                         |

---

### Math Problems

| #   | Problem                                                             | Solutions                         | Time   | Space  | Difficulty | Tags                                 |
| --- | ------------------------------------------------------------------- | --------------------------------- | ------ | ------ | ---------- | ------------------------------------ |
| 2   | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)   | [C++](./Cpp/Add_Two_Numbers.cpp)  | _O(n)_ | _O(1)_ | Medium     | Linked List, Math                    |
| 268 | [Missing Number](https://leetcode.com/problems/missing-number/)     | [C++](./Cpp/Missing_Number.cpp)   | _O(n)_ | _O(1)_ | Easy       | Array, Math                          |
| 509 | [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/) | [C++](./Cpp/Fibonacci_Number.cpp) | _O(n)_ | _O(1)_ | Easy       | Math, Dynamic Programming, Recursion |

---

### Trie Problems

| #   | Problem                                                                                                                 | Solutions                                                   | Time   | Space  | Difficulty | Tags                                     |
| --- | ----------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------- | ------ | ------ | ---------- | ---------------------------------------- |
| 208 | [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/)                               | [C++](<./Cpp/Implement_Trie_(Prefix_Tree).cpp>)             | _O(n)_ | _O(n)_ | Medium     | Trie, Design, String                     |
| 211 | [Design Add and Search Words Data Structure](https://leetcode.com/problems/design-add-and-search-words-data-structure/) | [C++](./Cpp/Design_Add_and_Search_Words_Data_Structure.cpp) | _O(n)_ | _O(n)_ | Medium     | Trie, Design, String, Depth-First Search |

---

### Design Problems

| #   | Problem                                                                                                                 | Solutions                                                   | Time   | Space  | Difficulty | Tags                                     |
| --- | ----------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------- | ------ | ------ | ---------- | ---------------------------------------- |
| 155 | [Min Stack](https://leetcode.com/problems/min-stack/)                                                                   | [C++](./Cpp/Min_Stack.cpp)                                  | _O(1)_ | _O(n)_ | Medium     | Stack, Design                            |
| 208 | [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/)                               | [C++](<./Cpp/Implement_Trie_(Prefix_Tree).cpp>)             | _O(n)_ | _O(n)_ | Medium     | Trie, Design, String                     |
| 211 | [Design Add and Search Words Data Structure](https://leetcode.com/problems/design-add-and-search-words-data-structure/) | [C++](./Cpp/Design_Add_and_Search_Words_Data_Structure.cpp) | _O(n)_ | _O(n)_ | Medium     | Trie, Design, String, Depth-First Search |

---

### Sliding Window Problems

| #   | Problem                                                                               | Solutions                                      | Time   | Space  | Difficulty | Tags                                 |
| --- | ------------------------------------------------------------------------------------- | ---------------------------------------------- | ------ | ------ | ---------- | ------------------------------------ |
| 209 | [Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/) | [C++](./Cpp/209_Minimum_Size_Subarray_Sum.cpp) | _O(n)_ | _O(1)_ | Medium     | Sliding Window, Array, Binary Search |
| 239 | [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)       | [C++](./Cpp/Sliding_Window_Maximum.cpp)        | _O(n)_ | _O(1)_ | Hard       | Array, Sliding Window                |
| 567 | [Permutation in String](https://leetcode.com/problems/permutation-in-string/)         | [C++](./Cpp/Permutation_in_String.cpp)         | _O(n)_ | _O(1)_ | Medium     | String, Sliding Window               |
| 76  | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)   | [C++](./Cpp/Minimum_Window_Substring.cpp)      | _O(n)_ | _O(k)_ | Hard       | String, Sliding Window               |

---

### Heap Problems

| #   | Problem                                                                                                                       | Solutions                                                      | Time         | Space  | Difficulty | Tags                  |
| --- | ----------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------- | ------------ | ------ | ---------- | --------------------- |
| 347 | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)                                             | [C++](./Cpp/Top_K_Frequent_Elements.cpp)                       | _O(n log k)_ | _O(n)_ | Medium     | Hash Table, Heap      |
| 632 | [Smallest Range Covering Elements from K Lists](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/) | [C++](./Cpp/Smallest_Range_Covering_Elements_from_K_Lists.cpp) | _O(n log k)_ | _O(k)_ | Hard       | Array, Hash Map, Heap |

---

### Sorting Problems

| #   | Problem                                                                                                       | Solutions                                                  | Time         | Space  | Difficulty | Tags           |
| --- | ------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------- | ------------ | ------ | ---------- | -------------- |
| 56  | [Merge Intervals](https://leetcode.com/problems/merge-intervals/)                                             | [C++](./Cpp/Merge_Intervals.cpp)                           | _O(n log n)_ | _O(n)_ | Medium     | Array, Sorting |
| 581 | [Shortest Unsorted Continuous Subarray](https://leetcode.com/problems/shortest-unsorted-continuous-subarray/) | [C++](./Cpp/581_Shortest_Unsorted_Continuous_Subarray.cpp) | _O(n)_       | _O(1)_ | Medium     | Array, Sorting |

---

### Greedy Problems

| #   | Problem                                                                                           | Solutions                                            | Time   | Space  | Difficulty | Tags                        |
| --- | ------------------------------------------------------------------------------------------------- | ---------------------------------------------------- | ------ | ------ | ---------- | --------------------------- |
| 11  | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)             | [C++](./Cpp/Container_With_Most_Water.cpp)           | _O(n)_ | _O(1)_ | Medium     | Array, Two Pointers, Greedy |
| 121 | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | [C++](./Cpp/121_Best_Time_to_Buy_and_Sell_Stock.cpp) | _O(n)_ | _O(1)_ | Easy       | Array, Greedy               |
| 134 | [Gas Station](https://leetcode.com/problems/gas-station/)                                         | [C++](./Cpp/Gas_Station.cpp)                         | _O(n)_ | _O(1)_ | Medium     | Array, Greedy               |

---

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request. For major changes, please open an issue first to discuss what you would like to change.
