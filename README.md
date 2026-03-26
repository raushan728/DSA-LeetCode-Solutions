<p align="center">
  <img src="https://img.shields.io/badge/DSA-LeetCode-0052CC?style=flat&logo=leetcode" />
  <img src="https://img.shields.io/badge/Language-C++-00599C?style=flat&logo=c%2B%2B&logoColor=white" />
  <img src="https://img.shields.io/badge/Languages-8-blue?style=flat&logo=programming" />
  <img src="https://img.shields.io/github/contributors/raushan728/DSA-LeetCode-Solutions?style=flat" />
  <img src="https://img.shields.io/badge/License-MIT-blue?style=flat&logo=mit" />
  <img src="https://img.shields.io/badge/PRs-Welcome-green?style=flat&logo=github" />
  <img src="https://img.shields.io/badge/Problems%20Solved-224-success?style=flat&logo=leetcode" />
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
- [Auto-Synced Problems](#auto-synced-problems)

---

## Overview

This repository contains **Data Structures & Algorithms (DSA)** solutions for various **LeetCode problems** implemented in **C++** and **Rust**.
Curated sections stay in the existing style, and the auto-synced section fills in any missing C++ or Rust entries.

---

## Problem Solutions

### Array Problems

| #    | Problem                                                                                                                         | Solutions                                                       | Time                    | Space   | Difficulty | Tags                                           |
| ---- | ------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------- | ----------------------- | ------- | ---------- | ---------------------------------------------- |
| 1    | [Two Sum](https://leetcode.com/problems/two-sum/)                                                                               | [C++](./Cpp/001_Two_Sum.cpp) / [Rust](./Rust/TwoSum.rs) | _O(n)_                  | _O(n)_  | Easy       | Array, Hash Map                                |
| 1011 | [Capacity To Ship Packages Within D Days](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/)               | [C++](./Cpp/Capacity_To_Ship_Packages_Within_D_Days.cpp) / [Rust](./Rust/Capacity_To_Ship_Packages_Within_D_Days.rs) | _O(Nlog(Sum(Weights)))_ | _O(1)_  | Medium     | Array, Binary Search                           |
| 11   | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)                                           | [C++](./Cpp/Container_With_Most_Water.cpp) | _O(n)_                  | _O(1)_  | Medium     | Array, Two Pointers, Greedy                    |
| 121  | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)                               | [C++](./Cpp/121_Best_Time_to_Buy_and_Sell_Stock.cpp) / [Rust](./Rust/Best_Time_to_Buy_and_Sell_Stock.rs) | _O(n)_                  | _O(1)_  | Easy       | Array, Greedy                                  |
| 134  | [Gas Station](https://leetcode.com/problems/gas-station/)                                                                       | [C++](./Cpp/Gas_Station.cpp) | _O(n)_                  | _O(1)_  | Medium     | Array, Greedy                                  |
| 136  | [Single Number](https://leetcode.com/problems/single-number/)                                                                   | [C++](./Cpp/136_Single_Number.cpp) / [Rust](./Rust/Single_Number.rs) | _O(n)_                  | _O(1)_  | Easy       | Array, Bit Manipulation                        |
| 15   | [3Sum](https://leetcode.com/problems/3sum/)                                                                                     | [C++](./Cpp/3Sum.cpp) | _O(n²)_                 | _O(1)_  | Medium     | Array, Two Pointers                            |
| 169  | [Majority Element](https://leetcode.com/problems/majority-element/)                                                             | [C++](./Cpp/Majority_Element.cpp) | _O(n)_                  | _O(1)_  | Easy       | Array, Hash Table, Boyer–Moore                 |
| 18   | [4Sum](https://leetcode.com/problems/4sum/)                                                                                     | [C++](./Cpp/4Sum.cpp) | _O(n³)_                 | _O(1)_  | Medium     | Array, Two Pointers                            |
| 189  | [Rotate Array](https://leetcode.com/problems/rotate-array/)                                                                     | [C++](./Cpp/Rotate_Array.cpp) / [Rust](./Rust/Rotate_Array.rs) | _O(n)_                  | _O(1)_  | Medium     | Array                                          |
| 209  | [Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/)                                           | [C++](./Cpp/209_Minimum_Size_Subarray_Sum.cpp) | _O(n)_                  | _O(1)_  | Medium     | Sliding Window, Array, Binary Search           |
| 217  | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)                                                         | [C++](./Cpp/Contains_Duplicate.cpp) / [Rust](./Rust/Contains_Duplicate.rs) | _O(n)_                  | _O(n)_  | Easy       | Hash Table, Array                              |
| 238  | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)                                     | [C++](./Cpp/Product_of_Array_Except_Self.cpp) | _O(n)_                  | _O(n)_  | Medium     | Array                                          |
| 239  | [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)                                                 | [C++](./Cpp/Sliding_Window_Maximum.cpp) | _O(n)_                  | _O(1)_  | Hard       | Array, Sliding Window                          |
| 2596 | [Check Knight Tour Configuration](https://leetcode.com/problems/check-knight-tour-configuration/)                               | [C++](./Cpp/Check_Knight_Tour_Configuration.cpp) | _O(n²)_                 | _O(n²)_ | Medium     | Array, Backtracking                            |
| 26   | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)                       | [C++](./Cpp/26_Remove_Duplicates_from_Sorted_Array.cpp) | _O(n)_                  | _O(1)_  | Easy       | Array, Two Pointers                            |
| 268  | [Missing Number](https://leetcode.com/problems/missing-number/)                                                                 | [C++](./Cpp/Missing_Number.cpp) / [Rust](./Rust/Missing_Number.rs) | _O(n)_                  | _O(1)_  | Easy       | Array, Math                                    |
| 27   | [Remove Element](https://leetcode.com/problems/remove-element/)                                                                 | [C++](./Cpp/27_Remove_Element.cpp) | _O(n)_                  | _O(1)_  | Easy       | Array, Two Pointers                            |
| 283  | [Move Zeroes](https://leetcode.com/problems/move-zeroes/)                                                                       | [C++](./Cpp/283_Move_zeroes.cpp) | _O(n)_                  | _O(1)_  | Easy       | Array, Two Pointers                            |
| 287  | [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)                                           | [C++](./Cpp/Find_the_Duplicate_Number.cpp) | _O(n)_                  | _O(1)_  | Medium     | Array, Two Pointers, Cycle Detection           |
| 2965 | [Find Missing and Repeated Values](https://leetcode.com/problems/find-missing-and-repeated-values/)                             | [C++](./Cpp/Find_Missing_and_Repeated_Values.cpp) | _O(n²)_                 | _O(n²)_ | Easy       | Array, Hash Table                              |
| 3    | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | [C++](./Cpp/Longest-Substring-Without-Repeating-Characters.cpp) | _O(n)_                  | _O(n)_  | Medium     | Array, Hash Map                                |
| 31   | [Next Permutation](https://leetcode.com/problems/next-permutation/)                                                             | [C++](./Cpp/Next_Permutation.cpp) | _O(n)_                  | _O(1)_  | Medium     | Array                                          |
| 33   | [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)                                 | [C++](./Cpp/Search_in_Rotated_Sorted_Array.cpp) | _O(log n)_              | _O(1)_  | Medium     | Array, Binary Search                           |
| 383  | [Ransom Note](https://leetcode.com/problems/ransom-note/)                                                                       | [C++](./Cpp/Ransom_Note.cpp) | _O(n)_                  | _O(1)_  | Easy       | Array, Hash Table                              |
| 4    | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)                                       | [C++](./Cpp/Median_of_Two_Sorted_Arrays.cpp) | _O(log(min(n1,n2)))_    | _O(1)_  | Hard       | Binary Search, Array                           |
| 41   | [First Missing Positive](https://leetcode.com/problems/first-missing-positive/)                                                 | [C++](./Cpp/First-Missing-Positive.cpp) / [Rust](./Rust/First-Missing-Positive.rs) | _O(n)_                  | _O(1)_  | Hard       | Array                                          |
| 410  | [Split Array Largest Sum](https://leetcode.com/problems/split-array-largest-sum/)                                               | [C++](./Cpp/Split_Array_Largest_Sum.cpp) / [Rust](./Rust/Split_Array_Largest_Sum.rs) | _O(Nlog(Sum(Nums)))_    | _O(1)_  | Hard       | Array, Binary Search                           |
| 42   | [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)                                                       | [C++](./Cpp/Trapping_Rain_Water.cpp) | _O(n)_                  | _O(1)_  | Hard       | Array, Two Pointers                            |
| 49   | [Group Anagrams](https://leetcode.com/problems/group-anagrams/)                                                                 | [C++](./Cpp/Group_Anagrams.cpp) | _O(NK)_                 | _O(NK)_ | Medium     | Array, Hash Table                              |
| 493  | [Reverse Pairs](https://leetcode.com/problems/reverse-pairs/)                                                                   | [C++](./Cpp/Reverse-Pairs.cpp) | _O(n)_                  | _O(n)_  | Hard       | Array                                          |
| 496  | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/)                                                 | [C++](./Cpp/Next_Greater_Element_I.cpp) | _O(n+m)_                | _O(n)_  | Easy       | Array, Stack, Hash Table                       |
| 53   | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)                                                             | [C++](./Cpp/53_Maximum_Subarray.cpp) | _O(n)_                  | _O(1)_  | Medium     | Array, Kadane’s Algorithm, Dynamic Programming |
| 540  | [Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/)                             | [C++](./Cpp/Single_Element_in_a_Sorted_Array.cpp) | _O(log n)_              | _O(1)_  | Medium     | Array, Binary Search                           |
| 56   | [Merge Intervals](https://leetcode.com/problems/merge-intervals/)                                                               | [C++](./Cpp/Merge_Intervals.cpp) | _O(n log n)_            | _O(n)_  | Medium     | Array, Sorting                                 |
| 560  | [Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)                                                   | [C++](./Cpp/Subarray_Sum_Equals_K.cpp) | _O(n)_                  | _O(n)_  | Medium     | Array, Hash Table, Prefix Sum                  |
| 581  | [Shortest Unsorted Continuous Subarray](https://leetcode.com/problems/shortest-unsorted-continuous-subarray/)                   | [C++](./Cpp/581_Shortest_Unsorted_Continuous_Subarray.cpp) | _O(n)_                  | _O(1)_  | Medium     | Array, Sorting                                 |
| 632  | [Smallest Range Covering Elements from K Lists](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/)   | [C++](./Cpp/Smallest_Range_Covering_Elements_from_K_Lists.cpp) | _O(n log k)_            | _O(k)_  | Hard       | Array, Hash Map, Heap                          |
| 73   | [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)                                                           | [C++](./Cpp/Set-Matrix-Zeroes.cpp) | _O(n)_                  | _O(n)_  | Medium     | Array                                          |
| 75   | [Sort Colors](https://leetcode.com/problems/sort-colors/)                                                                       | [C++](./Cpp/Sort_Colors.cpp) | _O(n)_                  | _O(1)_  | Medium     | Array, Two Pointers, Dutch National Flag       |
| 79   | [Word Search](https://leetcode.com/problems/word-search/)                                                                       | [C++](./Cpp/Word-Search.cpp) | _O(n)_                  | _O(n)_  | Medium     | Array                                          |
| 84   | [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/)                                 | [C++](./Cpp/Largest_Rectangle_in_Histogram.cpp) | _O(n)_                  | _O(n)_  | Hard       | Array, Stack                                   |
| 852  | [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)                                 | [C++](./Cpp/Peak_Index_in_a_Mountain_Array.cpp) | _O(log n)_              | _O(1)_  | Medium     | Array, Binary Search                           |
| 875  | [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/)                                                       | [C++](./Cpp/Koko_Eating_Bananas.cpp) / [Rust](./Rust/Koko_Eating_Bananas.rs) | _O(Nlogm)_              | _O(1)_  | Medium     | Array Binary Search                            |
| 88   | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)                                                         | [C++](./Cpp/88_Merge_Sorted_Array.cpp) | _O(m+n)_                | _O(1)_  | Easy       | Array, Two Pointers                            |
| 503  | [Next Greater Element II](https://leetcode.com/problems/next-greater-element-ii/)                                               | [C++](./Cpp/Next_Greater_Element_II.cpp) | _O(n)_                  | _O(n)_  | Medium     | Stack, Array                                   |
| 455  | [Assign Cookies](https://leetcode.com/problems/assign-cookies/)                                                                 | [C++](./Cpp/Assign_Cookies.cpp) | _O(nlogn)_              | _O(1)_  | Easy       | Greedy, Array                                  |
| 435  | [Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/)                                           | [C++](./Cpp/Non-overlapping_Intervals.cpp) | _O(nlogn)_              | _O(1)_  | Medium     | Greedy, Array                                  |
| 215  | [Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)                               | [C++](./Cpp/Kth_Largest_Element_in_an_Array.cpp) | _O(n)_                  | _O(1)_  | Medium     | Heap, Array                                    |
| 36 | [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/) | [C++](./Cpp/Valid_Sudoku.cpp) | _O(n)_ | _O(n)_ | Medium | Array |
| 85 | [Maximal Rectangle](https://leetcode.com/problems/maximal-rectangle/) | [C++](./Cpp/Maximal_Rectangle.cpp) | _O(n)_ | _O(n)_ | Hard | Array |
| 238 | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | [C++](./Cpp/Product_of_Array_Except_Self.cpp) | _O(n)_ | _O(n)_ | Medium | Array |
| 407 | [Trapping Rain Water II](https://leetcode.com/problems/trapping-rain-water-ii/) | [C++](./Cpp/Trapping_Rain_Water_II.cpp) | _O(n)_ | _O(n)_ | Hard | Array |
| 679 | [24 Game](https://leetcode.com/problems/24-game/) | [C++](./Cpp/24_Game.cpp) | _O(n)_ | _O(n)_ | Hard | Array |
| 1277 | [Count Square Submatrices with All Ones](https://leetcode.com/problems/count-square-submatrices-with-all-ones/) | [C++](./Cpp/Count_Square_Submatrices_with_All_Ones.cpp) / [Rust](./Rust/Count_Square_Submatrices_with_All_Ones.rs) | _O(n)_ | _O(n)_ | Medium | Array |
| 1323 | [Maximum 69 Number](https://leetcode.com/problems/maximum-69-number/) | [C++](./Cpp/Maximum_69_Number.cpp) | _O(n)_ | _O(n)_ | Easy | Array |
| 1488 | [Avoid Flood in The City](https://leetcode.com/problems/avoid-flood-in-the-city/) | [C++](./Cpp/Avoid_Flood_in_The_City.cpp) | _O(n)_ | _O(n)_ | Medium | Array |
| 1493 | [Longest Subarray of 1's After Deleting One Element](https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/) | [C++](./Cpp/Longest_Subarray_of_1's_After_Deleting_One_Element.cpp) | _O(n)_ | _O(n)_ | Medium | Array |
| 1504 | [Count Submatrices With All Ones](https://leetcode.com/problems/count-submatrices-with-all-ones/) | [C++](./Cpp/Count_Submatrices_With_All_Ones.cpp) | _O(n)_ | _O(n)_ | Medium | Array |
| 1526 | [Minimum Number of Increments on Subarrays to Form a Target Array](https://leetcode.com/problems/minimum-number-of-increments-on-subarrays-to-form-a-target-array/) | [C++](./Cpp/Minimum_Number_of_Increments_on_Subarrays_to_Form_a_Target_Array.cpp) / [Rust](./Rust/Minimum_Number_of_Increments_on_Subarrays_to_Form_a_Target_Array.rs) | _O(n)_ | _O(n)_ | Hard | Array |
| 1578 | [Minimum Time to Make Rope Colorful](https://leetcode.com/problems/minimum-time-to-make-rope-colorful/) | [C++](./Cpp/Minimum_Time_to_Make_Rope_Colorful.cpp) / [Rust](./Rust/Minimum_Time_to_Make_Rope_Colorful.rs) | _O(n)_ | _O(n)_ | Medium | Array |
| 1689 | [Partitioning Into Minimum Number Of Deci-Binary Numbers](https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/) | [C++](./Cpp/Partitioning_Into_Minimum_Number_Of_Deci-Binary_Numbers.cpp) / [Rust](./Rust/Partitioning_Into_Minimum_Of_Deci-Binary_Numbers.rs) | _O(n)_ | _O(n)_ | Medium | Array |
| 1733 | [Minimum Number of People to Teach](https://leetcode.com/problems/minimum-number-of-people-to-teach/) | [C++](./Cpp/Minimum_Number_of_People_to_Teach.cpp) | _O(n)_ | _O(n)_ | Medium | Array |
| 2048 | [Next Greater Numerically Balanced Number](https://leetcode.com/problems/next-greater-numerically-balanced-number/) | [C++](./Cpp/Next_Greater_Balanced_Number.cpp) / [Rust](./Rust/Next_Greater_Numerically_Balanced_Number.rs) | _O(n)_ | _O(n)_ | Medium | Array |
| 2125 | [Number of Laser Beams in a Bank](https://leetcode.com/problems/number-of-laser-beams-in-a-bank/) | [C++](./Cpp/Number_of_Laser_Beams_in_a_Bank.cpp) / [Rust](./Rust/Number_of_Laser_Beams_in_a_Bank.rs) | _O(n)_ | _O(n)_ | Medium | Array |
| 2197 | [Replace Non-Coprime Numbers in Array](https://leetcode.com/problems/replace-non-coprime-numbers-in-array/) | [C++](./Cpp/Replace_Non-Coprime_Numbers_in_Array.cpp) | _O(n)_ | _O(n)_ | Hard | Array |
| 2221 | [Find Triangular Sum of an Array](https://leetcode.com/problems/find-triangular-sum-of-an-array/) | [C++](./Cpp/Find_Triangular_Sum_of_an_Array.cpp) | _O(n)_ | _O(n)_ | Medium | Array |
| 2300 | [Successful Pairs of Spells and Potions](https://leetcode.com/problems/successful-pairs-of-spells-and-potions/) | [C++](./Cpp/Successful_Pairs_of_Spells_and_Potions.cpp) | _O(n)_ | _O(n)_ | Medium | Array |
| 2327 | [Number of People Aware of a Secret](https://leetcode.com/problems/number-of-people-aware-of-a-secret/) | [C++](./Cpp/Number_of_People_Aware_of_a_Secret.cpp) | _O(n)_ | _O(n)_ | Medium | Array |
| 3000 | [Maximum Area of Longest Diagonal Rectangle](https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/) | [C++](./Cpp/Maximum_Area_of_Longest_Diagonal_Rectangle.cpp) | _O(n)_ | _O(n)_ | Easy | Array |
| 3005 | [Count Elements With Maximum Frequency](https://leetcode.com/problems/count-elements-with-maximum-frequency/) | [C++](./Cpp/Count_Elements_With_Maximum_Frequency.cpp) | _O(n)_ | _O(n)_ | Easy | Array |
| 3025 | [Find the Number of Ways to Place People I](https://leetcode.com/problems/find-the-number-of-ways-to-place-people-i/) | [C++](./Cpp/Find_the_Number_of_Ways_to_Place_People_I.cpp) | _O(n)_ | _O(n)_ | Medium | Array |
| 3027 | [Find the Number of Ways to Place People II](https://leetcode.com/problems/find-the-number-of-ways-to-place-people-ii/) | [C++](./Cpp/Find_the_Number_of_Ways_to_Place_People_II.cpp) | _O(n)_ | _O(n)_ | Hard | Array |
| 3147 | [Taking Maximum Energy From the Mystic Dungeon](https://leetcode.com/problems/taking-maximum-energy-from-the-mystic-dungeon/) | [C++](./Cpp/Taking_Maximum_Energy_the_Mystic_Dungeon.cpp) | _O(n)_ | _O(n)_ | Medium | Array |
| 3195 | [Find the Minimum Area to Cover All Ones I](https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/) | [C++](./Cpp/Find_the_Minimum_Area_to_Cover_All_Ones_I.cpp) | _O(n)_ | _O(n)_ | Medium | Array |
| 3197 | [Find the Minimum Area to Cover All Ones II](https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-ii/) | [C++](./Cpp/Find_the_Minimum_Area_to_Cover_All_Ones_II.cpp) | _O(n)_ | _O(n)_ | Hard | Array |
| 3289 | [The Two Sneaky Numbers of Digitville](https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/) | [C++](./Cpp/The_Two_Sneaky_Numbers_of_Digitville.cpp) / [Rust](./Rust/The_Two_Sneaky_Numbers_of_Digitville.rs) | _O(n)_ | _O(n)_ | Easy | Array |
| 3349 | [Adjacent Increasing Subarrays Detection I](https://leetcode.com/problems/adjacent-increasing-subarrays-detection-i/) | [C++](./Cpp/Adjacent_Increasing_Subarrays_Detection_I.cpp) | _O(n)_ | _O(n)_ | Easy | Array |
| 3350 | [Adjacent Increasing Subarrays Detection II](https://leetcode.com/problems/adjacent-increasing-subarrays-detection-ii/) | [C++](./Cpp/Adjacent_Increasing_Subarrays_Detection_II.cpp) | _O(n)_ | _O(n)_ | Medium | Array |
| 3494 | [Find the Minimum Amount of Time to Brew Potions](https://leetcode.com/problems/find-the-minimum-amount-of-time-to-brew-potions/) | [C++](./Cpp/Find_the_Minimum_Amount_of_Time_to_Brew_Potions.cpp) | _O(n)_ | _O(n)_ | Medium | Array |
| 3516 | [Find Closest Person](https://leetcode.com/problems/find-closest-person/) | [C++](./Cpp/Find_Closest_Person.cpp) | _O(n)_ | _O(n)_ | Easy | Array |
| 3539 | [Find Sum of Array Product of Magical Sequences](https://leetcode.com/problems/find-sum-of-array-product-of-magical-sequences/) | [C++](./Cpp/Find_Sum_of_Array_Product_of_Magical_Sequences.cpp) | _O(n)_ | _O(n)_ | Hard | Array |
---

### String Problems

| #    | Problem                                                                                                                                 | Solutions                                                           | Time         | Space  | Difficulty | Tags                            |
| ---- | --------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------- | ------------ | ------ | ---------- | ------------------------------- |
| 125  | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)                                                                     | [C++](./Cpp/125_Valid_Palindrome.cpp) / [Rust](./Rust/Valid_Palindrome.rs) | _O(n)_       | _O(1)_ | Easy       | String, Two Pointers            |
| 131  | [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/)                                                       | [C++](./Cpp/Palindrome_Partitioning.cpp) | _O(n × 2^n)_ | _O(n)_ | Medium     | Backtracking, Recursion, String |
| 151  | [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/)                                                   | [C++](./Cpp/Reverse_Words_in_a_String.cpp) | _O(n)_       | _O(1)_ | Medium     | String, Two Pointers            |
| 1910 | [Remove All Occurrences of a Substring](https://leetcode.com/problems/remove-all-occurrences-of-a-substring/)                           | [C++](./Cpp/Remove_All_Occurrences_of_a_Substring.cpp) | _O(n×m)_     | _O(1)_ | Medium     | String                          |
| 20   | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)                                                                   | [C++](./Cpp/Valid_Parentheses.cpp) | _O(n)_       | _O(n)_ | Easy       | String, Stack                   |
| 208  | [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/)                                               | [C++](./Cpp/Implement_Trie_(Prefix_Tree).cpp) | _O(n)_       | _O(n)_ | Medium     | Trie, Design, String            |
| 242  | [Valid Anagram](https://leetcode.com/problems/valid-anagram/)                                                                           | [C++](./Cpp/Valid_Anagram.cpp) | _O(n)_       | _O(1)_ | Easy       | Hash Table, String              |
| 28   | [Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/) | [C++](./Cpp/Find_the_Index_of_the_First_Occurrence_in_a_String.cpp) / [Rust](./Rust/Find_the_Index_of_the_First_Occurrence_in_a_String.rs) | _O(N + M)_   | _O(M)_ | Easy       | String, Two Pointers            |
| 387  | [First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/)                                 | [C++](./Cpp/First_Unique_Character_in_a_String.cpp) | _O(n)_       | _O(1)_ | Easy       | Hash Table, String              |
| 443  | [String Compression](https://leetcode.com/problems/string-compression/)                                                                 | [C++](./Cpp/String_Compression.cpp) | _O(n)_       | _O(1)_ | Easy       | String, Two Pointers            |
| 567  | [Permutation in String](https://leetcode.com/problems/permutation-in-string/)                                                           | [C++](./Cpp/Permutation_in_String.cpp) | _O(n)_       | _O(1)_ | Medium     | String, Sliding Window          |
| 76   | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)                                                     | [C++](./Cpp/Minimum_Window_Substring.cpp) | _O(n)_       | _O(k)_ | Hard       | String, Sliding Window          |
| 14   | [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)                                                           | [C++](./Cpp/14_Longest_Common_Prefix.cpp) | _O(S)_       | _O(1)_ | Easy       | String                          |
| 12   | [Integer to Roman](https://leetcode.com/problems/integer-to-roman/)                                                                     | [C++](./Cpp/Integer_to_Roman.cpp) | _O(1)_       | _O(1)_ | Medium     | Math, String                    |
| 13   | [Roman to Integer](https://leetcode.com/problems/roman-to-integer/)                                                                     | [C++](./Cpp/Roman_to_Integer.cpp) | _O(n)_       | _O(1)_ | Easy       | Math, String                    |
| 165 | [Compare Version Numbers](https://leetcode.com/problems/compare-version-numbers/) | [C++](./Cpp/Compare_Version_Numbers.cpp) | _O(n)_ | _O(n)_ | Medium | String |
| 966 | [Vowel Spellchecker](https://leetcode.com/problems/vowel-spellchecker/) | [C++](./Cpp/Vowel_Spellchecker.cpp) | _O(n)_ | _O(n)_ | Medium | String |
| 1935 | [Maximum Number of Words You Can Type](https://leetcode.com/problems/maximum-number-of-words-you-can-type/) | [C++](./Cpp/Maximum_Number_of_Words_You_Can_Type.cpp) | _O(n)_ | _O(n)_ | Easy | String |
| 3227 | [Vowels Game in a String](https://leetcode.com/problems/vowels-game-in-a-string/) | [C++](./Cpp/Vowels_Game_in_a_String.cpp) | _O(n)_ | _O(n)_ | Medium | String |
| 3541 | [Find Most Frequent Vowel and Consonant](https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/) | [C++](./Cpp/Find_Most_Frequent_Vowel_and_Consonant.cpp) | _O(n)_ | _O(n)_ | Easy | String |
---

### Two Pointers Problems

| #   | Problem                                                                                                                                 | Solutions                                                           | Time       | Space  | Difficulty | Tags                                     |
| --- | --------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------- | ---------- | ------ | ---------- | ---------------------------------------- |
| 11  | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)                                                   | [C++](./Cpp/Container_With_Most_Water.cpp) | _O(n)_     | _O(1)_ | Medium     | Array, Two Pointers, Greedy              |
| 125 | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)                                                                     | [C++](./Cpp/125_Valid_Palindrome.cpp) / [Rust](./Rust/Valid_Palindrome.rs) | _O(n)_     | _O(1)_ | Easy       | String, Two Pointers                     |
| 141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)                                                                   | [C++](./Cpp/Linked_List_Cycle.cpp) | _O(n)_     | _O(1)_ | Easy       | Linked List, Two Pointers                |
| 142 | [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)                                                             | [C++](./Cpp/Linked_List_Cycle_II.cpp) | _O(n)_     | _O(1)_ | Medium     | Linked List, Two Pointers                |
| 15  | [3Sum](https://leetcode.com/problems/3sum/)                                                                                             | [C++](./Cpp/3Sum.cpp) | _O(n²)_    | _O(1)_ | Medium     | Array, Two Pointers                      |
| 151 | [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/)                                                   | [C++](./Cpp/Reverse_Words_in_a_String.cpp) | _O(n)_     | _O(1)_ | Medium     | String, Two Pointers                     |
| 18  | [4Sum](https://leetcode.com/problems/4sum/)                                                                                             | [C++](./Cpp/4Sum.cpp) | _O(n³)_    | _O(1)_ | Medium     | Array, Two Pointers                      |
| 234 | [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)                                                         | [C++](./Cpp/Palindrome_Linked_List.cpp) / [Rust](./Rust/Palindrome_Linked_List.rs) | _O(n)_     | _O(1)_ | Easy       | Linked List, Two Pointers                |
| 24  | [Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/)                                                               | [C++](./Cpp/Swap_Nodes_in_Pairs.cpp) | _O(n)_     | _O(1)_ | Medium     | Linked List, Two Pointers                |
| 26  | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)                               | [C++](./Cpp/26_Remove_Duplicates_from_Sorted_Array.cpp) | _O(n)_     | _O(1)_ | Easy       | Array, Two Pointers                      |
| 27  | [Remove Element](https://leetcode.com/problems/remove-element/)                                                                         | [C++](./Cpp/27_Remove_Element.cpp) | _O(n)_     | _O(1)_ | Easy       | Array, Two Pointers                      |
| 28  | [Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/) | [C++](./Cpp/Find_the_Index_of_the_First_Occurrence_in_a_String.cpp) / [Rust](./Rust/Find_the_Index_of_the_First_Occurrence_in_a_String.rs) | _O(N + M)_ | _O(M)_ | Easy       | String, Two Pointers                     |
| 283 | [Move Zeroes](https://leetcode.com/problems/move-zeroes/)                                                                               | [C++](./Cpp/283_Move_zeroes.cpp) | _O(n)_     | _O(1)_ | Easy       | Array, Two Pointers                      |
| 287 | [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)                                                   | [C++](./Cpp/Find_the_Duplicate_Number.cpp) | _O(n)_     | _O(1)_ | Medium     | Array, Two Pointers, Cycle Detection     |
| 42  | [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/)                                                               | [C++](./Cpp/Trapping_Rain_Water.cpp) | _O(n)_     | _O(1)_ | Hard       | Array, Two Pointers                      |
| 443 | [String Compression](https://leetcode.com/problems/string-compression/)                                                                 | [C++](./Cpp/String_Compression.cpp) | _O(n)_     | _O(1)_ | Easy       | String, Two Pointers                     |
| 75  | [Sort Colors](https://leetcode.com/problems/sort-colors/)                                                                               | [C++](./Cpp/Sort_Colors.cpp) | _O(n)_     | _O(1)_ | Medium     | Array, Two Pointers, Dutch National Flag |
| 876 | [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)                                                   | [C++](./Cpp/Middle_of_the_Linked_List.cpp) | _O(n)_     | _O(1)_ | Easy       | Linked List, Two Pointers                |
| 88  | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)                                                                 | [C++](./Cpp/88_Merge_Sorted_Array.cpp) | _O(m+n)_   | _O(1)_ | Easy       | Array, Two Pointers                      |
| 92  | [Reverse Linked List II](https://leetcode.com/problems/reverse-linked-list-ii/)                                                         | [C++](./Cpp/Reverse_Linked_List_II.cpp) / [Rust](./Rust/Reverse_Linked_List_II.rs) | _O(n)_     | _O(1)_ | Medium     | Linked List, Two Pointers                |

---

### Linked List Problems

| #   | Problem                                                                                                           | Solutions                                                | Time     | Space    | Difficulty | Tags                                            |
| --- | ----------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------- | -------- | -------- | ---------- | ----------------------------------------------- |
| 138 | [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/)                     | [C++](./Cpp/Copy_List_with_Random_Pointer.cpp) | _O(n)_   | _O(n)_   | Medium     | Linked List, Hash Table                         |
| 141 | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)                                             | [C++](./Cpp/Linked_List_Cycle.cpp) | _O(n)_   | _O(1)_   | Easy       | Linked List, Two Pointers                       |
| 142 | [Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)                                       | [C++](./Cpp/Linked_List_Cycle_II.cpp) | _O(n)_   | _O(1)_   | Medium     | Linked List, Two Pointers                       |
| 2   | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)                                                 | [C++](./Cpp/Add_Two_Numbers.cpp) / [Rust](./Rust/Add_Two_Numbers.rs) | _O(n)_   | _O(1)_   | Medium     | Linked List, Math                               |
| 206 | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)                                         | [C++](./Cpp/Reverse_Linked_List.cpp) | _O(n)_   | _O(1)_   | Easy       | Linked List                                     |
| 21  | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)                                   | [C++](./Cpp/Merge_Two_Sorted_Lists.cpp) | _O(n+m)_ | _O(n+m)_ | Easy       | Linked List, Recursion                          |
| 234 | [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)                                   | [C++](./Cpp/Palindrome_Linked_List.cpp) / [Rust](./Rust/Palindrome_Linked_List.rs) | _O(n)_   | _O(1)_   | Easy       | Linked List, Two Pointers                       |
| 24  | [Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/)                                         | [C++](./Cpp/Swap_Nodes_in_Pairs.cpp) | _O(n)_   | _O(1)_   | Medium     | Linked List, Two Pointers                       |
| 25  | [Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)                               | [C++](./Cpp/Reverse_Nodes_in_k_Group.cpp) | _O(n)_   | _O(n/k)_ | Hard       | Linked List, Recursion                          |
| 430 | [Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/) | [C++](./Cpp/Flatten_a_Multilevel_Doubly_Linked_List.cpp) | _O(n)_   | _O(1)_   | Medium     | Linked List, Doubly Linked List, Recursion, DFS |
| 61  | [Rotate List](https://leetcode.com/problems/rotate-list/)                                                         | [C++](./Cpp/Rotate_List.cpp) / [Rust](./Rust/Rotate_List.rs) | _O(n)_   | _O(1)_   | Medium     | Linked List                                     |
| 876 | [Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)                             | [C++](./Cpp/Middle_of_the_Linked_List.cpp) | _O(n)_   | _O(1)_   | Easy       | Linked List, Two Pointers                       |
| 92  | [Reverse Linked List II](https://leetcode.com/problems/reverse-linked-list-ii/)                                   | [C++](./Cpp/Reverse_Linked_List_II.cpp) / [Rust](./Rust/Reverse_Linked_List_II.rs) | _O(n)_   | _O(1)_   | Medium     | Linked List, Two Pointers                       |
| 86 | [Partition List](https://leetcode.com/problems/partition-list/) | [C++](./Cpp/Partition_List.cpp) | _O(n)_ | _O(n)_ | Medium | Linked List |
| 3217 | [Delete Nodes From Linked List Present in Array](https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/) | [C++](./Cpp/Delete_Nodes_From_Linked_List_Present_in_Array.cpp) / [Rust](./Rust/Delete_Nodes_From_Linked_List_Present_in_Array.rs) | _O(n)_ | _O(n)_ | Medium | Linked List, Array |
---

### Stack Problems

| #   | Problem                                                                                         | Solutions                                       | Time     | Space  | Difficulty | Tags                     |
| --- | ----------------------------------------------------------------------------------------------- | ----------------------------------------------- | -------- | ------ | ---------- | ------------------------ |
| 155 | [Min Stack](https://leetcode.com/problems/min-stack/)                                           | [C++](./Cpp/Min_Stack.cpp) | _O(1)_   | _O(n)_ | Medium     | Stack, Design            |
| 20  | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)                           | [C++](./Cpp/Valid_Parentheses.cpp) | _O(n)_   | _O(n)_ | Easy       | String, Stack            |
| 232 | [Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/)     | [C++](./Cpp/Implement_Queue_using_Stacks.cpp) | _O(n)_   | _O(n)_ | Easy       | Queue, Stack             |
| 496 | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/)                 | [C++](./Cpp/Next_Greater_Element_I.cpp) | _O(n+m)_ | _O(n)_ | Easy       | Array, Stack, Hash Table |
| 84  | [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/) | [C++](./Cpp/Largest_Rectangle_in_Histogram.cpp) | _O(n)_   | _O(n)_ | Hard       | Array, Stack             |
| 901 | [Online Stock Span](https://leetcode.com/problems/online-stock-span/)                           | [C++](./Cpp/Online_Stock_Span.cpp) | _O(1)_   | _O(n)_ | Medium     | Stack                    |
| 503 | [Next Greater Element II](https://leetcode.com/problems/next-greater-element-ii/)               | [C++](./Cpp/Next_Greater_Element_II.cpp) | _O(n)_   | _O(n)_ | Medium     | Stack, Array             |
| 225 | [Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/)     | [C++](./Cpp/Implement_Stack_using_Queues.cpp) | _O(n)_   | _O(n)_ | Easy       | Stack, Queue             |

---

### Queue Problems

| #    | Problem                                                                                     | Solutions                                     | Time   | Space  | Difficulty | Tags              |
| ---- | ------------------------------------------------------------------------------------------- | --------------------------------------------- | ------ | ------ | ---------- | ----------------- |
| 2073 | [Time Needed to Buy Tickets](https://leetcode.com/problems/time-needed-to-buy-tickets/)     | [C++](./Cpp/Time_Needed_to_Buy_Tickets.cpp) / [Rust](./Rust/Time_Needed_to_Buy_Tickets.rs) | _O(n)_ | _O(n)_ | Easy       | Queue, Simulation |
| 232  | [Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/) | [C++](./Cpp/Implement_Queue_using_Stacks.cpp) | _O(n)_ | _O(n)_ | Easy       | Queue, Stack      |
| 933  | [Number of Recent Calls](https://leetcode.com/problems/number-of-recent-calls/)             | [C++](./Cpp/Number_of_Recent_Calls.cpp) | _O(1)_ | _O(n)_ | Easy       | Queue, Design     |
| 225  | [Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/) | [C++](./Cpp/Implement_Stack_using_Queues.cpp) | _O(n)_ | _O(n)_ | Easy       | Stack, Queue      |

---

### Tree Problems

| #    | Problem                                                                                                                                               | Solutions                                                                  | Time   | Space      | Difficulty | Tags                                  |
| ---- | ----------------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------- | ------ | ---------- | ---------- | ------------------------------------- |
| 100  | [Same Tree](https://leetcode.com/problems/same-tree/)                                                                                                 | [C++](./Cpp/Same_Tree.cpp) | _O(n)_ | _O(log n)_ | Easy       | Tree, Depth-First Search, Binary Tree |
| 1008 | [Construct Binary Search Tree from Preorder Traversal](https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/)           | [C++](./Cpp/Construct_Binary_Search_Tree_from_Preorder_Traversal.cpp) | _O(n)_ | _O(n)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 101  | [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)                                                                                       | [C++](./Cpp/Symmetric_Tree.cpp) | _O(n)_ | _O(h)_     | Easy       | Tree, Recursion, Binary Tree          |
| 102  | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)                                                 | [C++](./Cpp/Binary_Tree_Level_Order_Traversal.cpp) / [Rust](./Rust/Binary_Tree_Level_Order_Traversal.rs) | _O(n)_ | _O(n)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 104  | [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)                                                           | [C++](./Cpp/Maximum_Depth_of_Binary_Tree.cpp) / [Rust](./Rust/Maximum_Depth_of_Binary_Tree.rs) | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 105  | [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | [C++](./Cpp/Construct_Binary_Tree_from_Preorder_and_inorder_Traversal.cpp) | _O(n)_ | _O(n)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 108  | [Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)                               | [C++](./Cpp/Convert_Sorted_Array_to_Binary_Search_Tree.cpp) | _O(n)_ | _O(log n)_ | Easy       | Tree, Depth-First Search, Binary Tree |
| 110  | [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)                                                                           | [C++](./Cpp/Balanced_Binary_Tree.cpp) / [Rust](./Rust/Balanced_Binary_Tree.rs) | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 114  | [Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/)                                               | [C++](./Cpp/Flatten_Binary_Tree_to_Linked_List.cpp) | _O(n)_ | _O(1)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 116  | [Populating Next Right Pointers in Each Node](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/)                             | [C++](./Cpp/Populating_Next_Right_Pointers_in_Each_Node.cpp) | _O(n)_ | _O(1)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 124  | [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)                                                           | [C++](./Cpp/Binary_Tree_Maximum_Path_Sum.cpp) | _O(n)_ | _O(h)_     | Hard       | Tree, Recursion, Binary Tree          |
| 144  | [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/)                                                       | [C++](./Cpp/Binary_Tree_Preorder_Traversal.cpp) | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 145  | [Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/)                                                     | [C++](./Cpp/Binary_Tree_Postorder_Traversal.cpp) | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 173  | [Binary Search Tree Iterator](https://leetcode.com/problems/binary-search-tree-iterator/)                                                             | [C++](./Cpp/Binary_Search_Tree_Iterator.cpp) | _O(n)_ | _O(h)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 230  | [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)                                                         | [C++](./Cpp/Kth_Smallest_Element_in_a_BST.cpp) | _O(n)_ | _O(h)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 235  | [Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)                       | [C++](./Cpp/Lowest_Common_Ancestor_of_a_Binary_Search_Tree.cpp) | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 236  | [Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)                                     | [C++](./Cpp/Lowest_Common_Ancestor_of_a_Binary_Tree.cpp) | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 257  | [Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/)                                                                                 | [C++](./Cpp/Binary_Tree_Paths.cpp) | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 543  | [Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/)                                                                     | [C++](./Cpp/Diameter_of_Binary_Tree.cpp) | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 662  | [Maximum Width of Binary Tree](https://leetcode.com/problems/maximum-width-of-binary-tree/)                                                           | [C++](./Cpp/Maximum_Width_of_Binary_Tree.cpp) | _O(n)_ | _O(n)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 783  | [Minimum Distance Between BST Nodes](https://leetcode.com/problems/minimum-distance-between-bst-nodes/)                                               | [C++](./Cpp/Minimum_Distance_Between_BST_Nodes.cpp) | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 94   | [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)                                                         | [C++](./Cpp/Binary_Tree_Inorder_Traversal.cpp) | _O(n)_ | _O(h)_     | Easy       | Tree, Depth-First Search, Binary Tree |
| 98   | [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)                                                             | [C++](./Cpp/Validate_Binary_Search_Tree.cpp) | _O(n)_ | _O(h)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 99   | [Recover Binary Search Tree](https://leetcode.com/problems/recover-binary-search-tree/)                                                               | [C++](./Cpp/Recover_Binary_Search_Tree.cpp) | _O(n)_ | _O(h)_     | Medium     | Tree, Depth-First Search, Binary Tree |
| 112  | [Path Sum](https://leetcode.com/problems/path-sum/)                                                                                                   | [C++](./Cpp/Path_Sum.cpp) | _O(n)_ | _O(h)_     | Easy       | Tree, DFS                             |
| 113  | [Path Sum II](https://leetcode.com/problems/path-sum-ii/)                                                                                             | [C++](./Cpp/Path_Sum_II.cpp) | _O(n)_ | _O(h)_     | Medium     | Tree, DFS                             |
| 105 | [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | [C++](./Cpp/Construct_Binary_Tree_from_Preorder_and_inorder_Traversal.cpp) | _O(n)_ | _O(n)_ | Medium | Tree, Depth-First Search, Binary Tree |
---

### Graph Problems

| #   | Problem                                                                                                           | Solutions                                                | Time             | Space     | Difficulty | Tags                                                        |
| --- | ----------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------- | ---------------- | --------- | ---------- | ----------------------------------------------------------- |
| 133 | [Clone Graph](https://leetcode.com/problems/clone-graph/)                                                         | [C++](./Cpp/Clone_Graph.cpp) | _O(n)_           | _O(n)_    | Medium     | Graph, Hash Table, Depth-First Search, Breadth-First Search |
| 200 | [Number of Islands](https://leetcode.com/problems/number-of-islands/)                                             | [C++](./Cpp/Number_of_Islands.cpp) | _O(n)_           | _O(n)_    | Medium     | Graph, Depth-First Search, Breadth-First Search             |
| 207 | [Course Schedule](https://leetcode.com/problems/course-schedule/)                                                 | [C++](./Cpp/Course_Schedule.cpp) | _O(n)_           | _O(n)_    | Medium     | Graph, Depth-First Search, Breadth-First Search             |
| 430 | [Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/) | [C++](./Cpp/Flatten_a_Multilevel_Doubly_Linked_List.cpp) | _O(n)_           | _O(1)_    | Medium     | Linked List, Doubly Linked List, Recursion, DFS             |
| 743 | [Network Delay Time](https://leetcode.com/problems/network-delay-time/)                                           | [C++](./Cpp/Network_Delay_Time.cpp) | _O((V+E) log V)_ | _O(V+E)_  | Medium     | Graph, Dijkstra, Heap, Shortest Path                        |
| 785 | [Is Graph Bipartite?](https://leetcode.com/problems/is-graph-bipartite/)                                          | [C++](./Cpp/Is_Graph_Bipartite?.cpp) | _O(V+E)_         | _O(V)_    | Medium     | Graph, Depth-First Search, Breadth-First Search, Bipartite  |
| 994 | [Rotting Oranges](https://leetcode.com/problems/rotting-oranges/)                                                 | [C++](./Cpp/Rotting_Oranges.cpp) | _O(n)_           | _O(n)_    | Medium     | Graph, Breadth-First Search                                 |
| 733 | [Flood Fill](https://leetcode.com/problems/flood-fill/)                                                           | [C++](./Cpp/Flood-Fill.cpp) | _O(m\*n)_        | _O(m\*n)_ | Easy       | Graph, DFS, BFS                                             |
| 547 | [Number of Provinces](https://leetcode.com/problems/number-of-provinces/)                                         | [C++](./Cpp/Number_of_Provinces.cpp) | _O(n²)_          | _O(n)_    | Medium     | Graph, DFS, Union Find                                      |
| 210 | [Course Schedule II](https://leetcode.com/problems/course-schedule-ii/)                                           | [C++](./Cpp/Course-Schedule-II.cpp) | _O(V+E)_         | _O(V+E)_  | Medium     | Graph, Topological Sort                                     |
| 787 | [Cheapest Flights Within K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops/)                 | [C++](./Cpp/Cheapest_Flights_Within_K_Stops.cpp) | _O((V+E)logV)_   | _O(V+E)_  | Medium     | Dynamic Programming, Graph                                  |
| 417 | [Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/) | [C++](./Cpp/Pacific_Atlantic_Water_Flow.cpp) | _O(n)_ | _O(n)_ | Medium | Graph |
| 778 | [Swim in Rising Water](https://leetcode.com/problems/swim-in-rising-water/) | [C++](./Cpp/Swim_in_Rising_Water.cpp) | _O(n)_ | _O(n)_ | Hard | Graph |
| 1625 | [Lexicographically Smallest String After Applying Operations](https://leetcode.com/problems/lexicographically-smallest-string-after-applying-operations/) | [C++](./Cpp/Lexicographically_Smallest_String_After_Applying_Operations.cpp) / [Rust](./Rust/Lexicographically_Smallest_String_After_Applying_Operations.rs) | _O(n)_ | _O(n)_ | Medium | Graph, String |
---

### Binary Search Problems

| #    | Problem                                                                                                           | Solutions                                                | Time                    | Space      | Difficulty | Tags                                 |
| ---- | ----------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------- | ----------------------- | ---------- | ---------- | ------------------------------------ |
| 1011 | [Capacity To Ship Packages Within D Days](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/) | [C++](./Cpp/Capacity_To_Ship_Packages_Within_D_Days.cpp) / [Rust](./Rust/Capacity_To_Ship_Packages_Within_D_Days.rs) | _O(Nlog(Sum(Weights)))_ | _O(1)_     | Medium     | Array, Binary Search                 |
| 209  | [Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/)                             | [C++](./Cpp/209_Minimum_Size_Subarray_Sum.cpp) | _O(n)_                  | _O(1)_     | Medium     | Sliding Window, Array, Binary Search |
| 33   | [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)                   | [C++](./Cpp/Search_in_Rotated_Sorted_Array.cpp) | _O(log n)_              | _O(1)_     | Medium     | Array, Binary Search                 |
| 4    | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)                         | [C++](./Cpp/Median_of_Two_Sorted_Arrays.cpp) | _O(log(min(n1,n2)))_    | _O(1)_     | Hard       | Binary Search, Array                 |
| 410  | [Split Array Largest Sum](https://leetcode.com/problems/split-array-largest-sum/)                                 | [C++](./Cpp/Split_Array_Largest_Sum.cpp) / [Rust](./Rust/Split_Array_Largest_Sum.rs) | _O(Nlog(Sum(Nums)))_    | _O(1)_     | Hard       | Array, Binary Search                 |
| 540  | [Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/)               | [C++](./Cpp/Single_Element_in_a_Sorted_Array.cpp) | _O(log n)_              | _O(1)_     | Medium     | Array, Binary Search                 |
| 704  | [Binary Search](https://leetcode.com/problems/binary-search/)                                                     | [C++](./Cpp/Binary_Search.cpp) | _O(log n)_              | _O(log n)_ | Easy       | Binary Search, Recursion             |
| 852  | [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)                   | [C++](./Cpp/Peak_Index_in_a_Mountain_Array.cpp) | _O(log n)_              | _O(1)_     | Medium     | Array, Binary Search                 |
| 875  | [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/)                                         | [C++](./Cpp/Koko_Eating_Bananas.cpp) / [Rust](./Rust/Koko_Eating_Bananas.rs) | _O(Nlogm)_              | _O(1)_     | Medium     | Array Binary Search                  |
| 300  | [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)                   | [C++](./Cpp/Longest_Increasing_Subsequence.cpp) | _O(nlogn)_              | _O(n)_     | Medium     | Dynamic Programming, Binary Search   |
| 1235 | [Maximum Profit in Job Scheduling](https://leetcode.com/problems/maximum-profit-in-job-scheduling/)               | [C++](./Cpp/Maximum_Profit_in_Job_Scheduling.cpp) | _O(nlogn)_              | _O(n)_     | Hard       | Dynamic Programming, Binary Search   |
| 235 | [Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/) | [C++](./Cpp/Lowest_Common_Ancestor_of_a_Binary_Search_Tree.cpp) | _O(n)_ | _O(h)_ | Medium | Tree, Depth-First Search, Binary Tree |
---

### Dynamic Programming Problems

| #    | Problem                                                                                             | Solutions                                         | Time           | Space       | Difficulty | Tags                                           |
| ---- | --------------------------------------------------------------------------------------------------- | ------------------------------------------------- | -------------- | ----------- | ---------- | ---------------------------------------------- |
| 509  | [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)                                 | [C++](./Cpp/Fibonacci_Number.cpp) | _O(n)_         | _O(1)_      | Easy       | Math, Dynamic Programming, Recursion           |
| 53   | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)                                 | [C++](./Cpp/53_Maximum_Subarray.cpp) | _O(n)_         | _O(1)_      | Medium     | Array, Kadane’s Algorithm, Dynamic Programming |
| 787  | [Cheapest Flights Within K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops/)   | [C++](./Cpp/Cheapest_Flights_Within_K_Stops.cpp) | _O((V+E)logV)_ | _O(V+E)_    | Medium     | Dynamic Programming, Graph                     |
| 322  | [Coin Change](https://leetcode.com/problems/coin-change/)                                           | [C++](./Cpp/Coin_Change.cpp) | _O(S\*n)_      | _O(S)_      | Medium     | Dynamic Programming                            |
| 518  | [Coin Change II](https://leetcode.com/problems/coin-change-ii/)                                     | [C++](./Cpp/Coin_Change_II.cpp) | _O(S\*n)_      | _O(S)_      | Medium     | Dynamic Programming                            |
| 72   | [Edit Distance](https://leetcode.com/problems/edit-distance/)                                       | [C++](./Cpp/Edit_Distance.cpp) | _O(m\*n)_      | _O(m\*n)_   | Medium     | Dynamic Programming                            |
| 1143 | [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/)             | [C++](./Cpp/Longest_Common_Subsequence.cpp) | _O(m\*n)_      | _O(m\*n)_   | Medium     | Dynamic Programming                            |
| 300  | [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/)     | [C++](./Cpp/Longest_Increasing_Subsequence.cpp) | _O(nlogn)_     | _O(n)_      | Medium     | Dynamic Programming, Binary Search             |
| 516  | [Longest Palindromic Subsequence](https://leetcode.com/problems/longest-palindromic-subsequence/)   | [C++](./Cpp/Longest_Palindromic_Subsequence.cpp) | _O(n²)_        | _O(n²)_     | Medium     | Dynamic Programming                            |
| 646  | [Maximum Length of Pair Chain](https://leetcode.com/problems/maximum-length-of-pair-chain/)         | [C++](./Cpp/Maximum_Length_of_Pair_Chain.cpp) | _O(nlogn)_     | _O(n)_      | Medium     | Dynamic Programming, Greedy                    |
| 1235 | [Maximum Profit in Job Scheduling](https://leetcode.com/problems/maximum-profit-in-job-scheduling/) | [C++](./Cpp/Maximum_Profit_in_Job_Scheduling.cpp) | _O(nlogn)_     | _O(n)_      | Hard       | Dynamic Programming, Binary Search             |
| 416  | [Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/)             | [C++](./Cpp/Partition_Equal_Subset_Sum.cpp) | _O(n\*sum)_    | _O(sum)_    | Medium     | Dynamic Programming                            |
| 494  | [Target Sum](https://leetcode.com/problems/target-sum/)                                             | [C++](./Cpp/Target_Sum.cpp) | _O(n\*sum)_    | _O(n\*sum)_ | Medium     | Dynamic Programming                            |
| 139  | [Word Break](https://leetcode.com/problems/word-break/)                                             | [C++](./Cpp/Word_Break.cpp) | _O(n²)_        | _O(n)_      | Medium     | Dynamic Programming                            |
| 837 | [New 21 Game](https://leetcode.com/problems/new-21-game/) | [C++](./Cpp/New_21_Game.cpp) | _O(n)_ | _O(n)_ | Medium | Dynamic Programming |
| 1039 | [Minimum Score Triangulation of Polygon](https://leetcode.com/problems/minimum-score-triangulation-of-polygon/) | [C++](./Cpp/Minimum_Score_Triangulation_of_Polygon.cpp) | _O(n)_ | _O(n)_ | Medium | Dynamic Programming |
---

### Hash Table Problems

| #    | Problem                                                                                                                         | Solutions                                                       | Time         | Space   | Difficulty | Tags                           |
| ---- | ------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------- | ------------ | ------- | ---------- | ------------------------------ |
| 1    | [Two Sum](https://leetcode.com/problems/two-sum/)                                                                               | [C++](./Cpp/001_Two_Sum.cpp) / [Rust](./Rust/TwoSum.rs) | _O(n)_       | _O(n)_  | Easy       | Array, Hash Map                |
| 138  | [Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/)                                   | [C++](./Cpp/Copy_List_with_Random_Pointer.cpp) | _O(n)_       | _O(n)_  | Medium     | Linked List, Hash Table        |
| 169  | [Majority Element](https://leetcode.com/problems/majority-element/)                                                             | [C++](./Cpp/Majority_Element.cpp) | _O(n)_       | _O(1)_  | Easy       | Array, Hash Table, Boyer–Moore |
| 217  | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)                                                         | [C++](./Cpp/Contains_Duplicate.cpp) / [Rust](./Rust/Contains_Duplicate.rs) | _O(n)_       | _O(n)_  | Easy       | Hash Table, Array              |
| 242  | [Valid Anagram](https://leetcode.com/problems/valid-anagram/)                                                                   | [C++](./Cpp/Valid_Anagram.cpp) | _O(n)_       | _O(1)_  | Easy       | Hash Table, String             |
| 2965 | [Find Missing and Repeated Values](https://leetcode.com/problems/find-missing-and-repeated-values/)                             | [C++](./Cpp/Find_Missing_and_Repeated_Values.cpp) | _O(n²)_      | _O(n²)_ | Easy       | Array, Hash Table              |
| 3    | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | [C++](./Cpp/Longest-Substring-Without-Repeating-Characters.cpp) | _O(n)_       | _O(n)_  | Medium     | Array, Hash Map                |
| 347  | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)                                               | [C++](./Cpp/Top_K_Frequent_Elements.cpp) | _O(n log k)_ | _O(n)_  | Medium     | Hash Table, Heap               |
| 383  | [Ransom Note](https://leetcode.com/problems/ransom-note/)                                                                       | [C++](./Cpp/Ransom_Note.cpp) | _O(n)_       | _O(1)_  | Easy       | Array, Hash Table              |
| 387  | [First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/)                         | [C++](./Cpp/First_Unique_Character_in_a_String.cpp) | _O(n)_       | _O(1)_  | Easy       | Hash Table, String             |
| 49   | [Group Anagrams](https://leetcode.com/problems/group-anagrams/)                                                                 | [C++](./Cpp/Group_Anagrams.cpp) | _O(NK)_      | _O(NK)_ | Medium     | Array, Hash Table              |
| 496  | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/)                                                 | [C++](./Cpp/Next_Greater_Element_I.cpp) | _O(n+m)_     | _O(n)_  | Easy       | Array, Stack, Hash Table       |
| 560  | [Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)                                                   | [C++](./Cpp/Subarray_Sum_Equals_K.cpp) | _O(n)_       | _O(n)_  | Medium     | Array, Hash Table, Prefix Sum  |
| 632  | [Smallest Range Covering Elements from K Lists](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/)   | [C++](./Cpp/Smallest_Range_Covering_Elements_from_K_Lists.cpp) | _O(n log k)_ | _O(k)_  | Hard       | Array, Hash Map, Heap          |
| 146  | [LRU Cache](https://leetcode.com/problems/lru-cache/)                                                                           | [C++](./Cpp/LRU_Cache.cpp) | _O(1)_       | _O(n)_  | Medium     | Design, Hash Table             |
| 2273 | [Find Resultant Array After Removing Anagrams](https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/) | [C++](./Cpp/Find_Resultant_Array_After_Removing_Anagrams.cpp) | _O(n)_ | _O(n)_ | Easy | Hash Table, Array |
---

### Bit Manipulation Problems

| #   | Problem                                                       | Solutions                          | Time   | Space  | Difficulty | Tags                    |
| --- | ------------------------------------------------------------- | ---------------------------------- | ------ | ------ | ---------- | ----------------------- |
| 136 | [Single Number](https://leetcode.com/problems/single-number/) | [C++](./Cpp/136_Single_Number.cpp) / [Rust](./Rust/Single_Number.rs) | _O(n)_ | _O(1)_ | Easy       | Array, Bit Manipulation |
| 342 | [Power of Four](https://leetcode.com/problems/power-of-four/) | [C++](./Cpp/Power_of_Four.cpp) | _O(n)_ | _O(n)_ | Easy | Bit Manipulation |
| 3370 | [Smallest Number With All Set Bits](https://leetcode.com/problems/smallest-number-with-all-set-bits/) | [C++](./Cpp/Smallest_Number_With_All_Set_Bits.cpp) / [Rust](./Rust/Smallest_Number_With_All_Set_Bits.rs) | _O(n)_ | _O(n)_ | Easy | Bit Manipulation |
---

### Recursion & Backtracking Problems

| #    | Problem                                                                                                           | Solutions                                                | Time          | Space      | Difficulty | Tags                                            |
| ---- | ----------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------- | ------------- | ---------- | ---------- | ----------------------------------------------- |
| 101  | [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)                                                   | [C++](./Cpp/Symmetric_Tree.cpp) | _O(n)_        | _O(h)_     | Easy       | Tree, Recursion, Binary Tree                    |
| 124  | [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)                       | [C++](./Cpp/Binary_Tree_Maximum_Path_Sum.cpp) | _O(n)_        | _O(h)_     | Hard       | Tree, Recursion, Binary Tree                    |
| 131  | [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/)                                 | [C++](./Cpp/Palindrome_Partitioning.cpp) | _O(n × 2^n)_  | _O(n)_     | Medium     | Backtracking, Recursion, String                 |
| 21   | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)                                   | [C++](./Cpp/Merge_Two_Sorted_Lists.cpp) | _O(n+m)_      | _O(n+m)_   | Easy       | Linked List, Recursion                          |
| 25   | [Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)                               | [C++](./Cpp/Reverse_Nodes_in_k_Group.cpp) | _O(n)_        | _O(n/k)_   | Hard       | Linked List, Recursion                          |
| 2596 | [Check Knight Tour Configuration](https://leetcode.com/problems/check-knight-tour-configuration/)                 | [C++](./Cpp/Check_Knight_Tour_Configuration.cpp) | _O(n²)_       | _O(n²)_    | Medium     | Array, Backtracking                             |
| 37   | [Sudoku Solver](https://leetcode.com/problems/sudoku-solver/)                                                     | [C++](./Cpp/Sudoku_Solver.cpp) | _Exponential_ | _O(1)_     | Hard       | Backtracking, Recursion                         |
| 39   | [Combination Sum](https://leetcode.com/problems/combination-sum/)                                                 | [C++](./Cpp/Combination_Sum.cpp) | _O(2^n)_      | _O(n)_     | Medium     | Backtracking, Recursion                         |
| 430  | [Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/) | [C++](./Cpp/Flatten_a_Multilevel_Doubly_Linked_List.cpp) | _O(n)_        | _O(1)_     | Medium     | Linked List, Doubly Linked List, Recursion, DFS |
| 46   | [Permutations](https://leetcode.com/problems/permutations/)                                                       | [C++](./Cpp/Permutations.cpp) | _O(n × n!)_   | _O(n)_     | Medium     | Backtracking, Recursion                         |
| 509  | [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)                                               | [C++](./Cpp/Fibonacci_Number.cpp) | _O(n)_        | _O(1)_     | Easy       | Math, Dynamic Programming, Recursion            |
| 51   | [N-Queens](https://leetcode.com/problems/n-queens/)                                                               | [C++](./Cpp/N-Queens.cpp) | _Exponential_ | _O(n)_     | Hard       | Backtracking, Recursion                         |
| 704  | [Binary Search](https://leetcode.com/problems/binary-search/)                                                     | [C++](./Cpp/Binary_Search.cpp) | _O(log n)_    | _O(log n)_ | Easy       | Binary Search, Recursion                        |
| 78   | [Subsets](https://leetcode.com/problems/subsets/)                                                                 | [C++](./Cpp/Subsets.cpp) | _O(n × 2^n)_  | _O(n)_     | Medium     | Backtracking, Recursion                         |
| 90   | [Subsets II](https://leetcode.com/problems/subsets-ii/)                                                           | [C++](./Cpp/Subsets_II.cpp) | _O(n × 2^n)_  | _O(n)_     | Medium     | Backtracking, Recursion                         |
| 40   | [Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)                                           | [C++](./Cpp/Combination_Sum_II.cpp) / [Rust](./Rust/Combination_Sum_II.rs) | _O(2^n)_      | _O(n)_     | Medium     | Backtracking, Recursion                         |
| 50   | [Pow(x, n)](https://leetcode.com/problems/powx-n/)                                                                | [C++](./Cpp/Powx_n.cpp) | _O(logn)_     | _O(1)_     | Medium     | Math, Recursion                                 |

---

### Math Problems

| #   | Problem                                                             | Solutions                         | Time      | Space  | Difficulty | Tags                                 |
| --- | ------------------------------------------------------------------- | --------------------------------- | --------- | ------ | ---------- | ------------------------------------ |
| 2   | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)   | [C++](./Cpp/Add_Two_Numbers.cpp) / [Rust](./Rust/Add_Two_Numbers.rs) | _O(n)_    | _O(1)_ | Medium     | Linked List, Math                    |
| 268 | [Missing Number](https://leetcode.com/problems/missing-number/)     | [C++](./Cpp/Missing_Number.cpp) / [Rust](./Rust/Missing_Number.rs) | _O(n)_    | _O(1)_ | Easy       | Array, Math                          |
| 509 | [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/) | [C++](./Cpp/Fibonacci_Number.cpp) | _O(n)_    | _O(1)_ | Easy       | Math, Dynamic Programming, Recursion |
| 12  | [Integer to Roman](https://leetcode.com/problems/integer-to-roman/) | [C++](./Cpp/Integer_to_Roman.cpp) | _O(1)_    | _O(1)_ | Medium     | Math, String                         |
| 13  | [Roman to Integer](https://leetcode.com/problems/roman-to-integer/) | [C++](./Cpp/Roman_to_Integer.cpp) | _O(n)_    | _O(1)_ | Easy       | Math, String                         |
| 50  | [Pow(x, n)](https://leetcode.com/problems/powx-n/)                  | [C++](./Cpp/Powx_n.cpp) | _O(logn)_ | _O(1)_ | Medium     | Math, Recursion                      |
| 120 | [Triangle](https://leetcode.com/problems/triangle/) | [C++](./Cpp/Triangle.cpp) | _O(n)_ | _O(n)_ | Medium | Math |
| 166 | [Fraction to Recurring Decimal](https://leetcode.com/problems/fraction-to-recurring-decimal/) | [C++](./Cpp/Fraction_to_Recurring_Decimal.cpp) | _O(n)_ | _O(n)_ | Medium | Math |
| 611 | [Valid Triangle Number](https://leetcode.com/problems/valid-triangle-number/) | [C++](./Cpp/Valid_Triangle_Number.cpp) | _O(n)_ | _O(n)_ | Medium | Math |
| 812 | [Largest Triangle Area](https://leetcode.com/problems/largest-triangle-area/) | [C++](./Cpp/Largest_Triangle_Area.cpp) | _O(n)_ | _O(n)_ | Easy | Math |
| 976 | [Largest Perimeter Triangle](https://leetcode.com/problems/largest-perimeter-triangle/) | [C++](./Cpp/Largest_Perimeter_Triangle.cpp) | _O(n)_ | _O(n)_ | Easy | Math |
| 1304 | [Find N Unique Integers Sum up to Zero](https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/) | [C++](./Cpp/Find_N_Unique_Integers_Sum_up_to_Zero.cpp) | _O(n)_ | _O(n)_ | Easy | Math |
| 1317 | [Convert Integer to the Sum of Two No-Zero Integers](https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/) | [C++](./Cpp/Convert_Integer_to_the_Sum_of_Two_No-Zero_Integers.cpp) | _O(n)_ | _O(n)_ | Easy | Math |
| 1518 | [Water Bottles](https://leetcode.com/problems/water-bottles/) | [C++](./Cpp/Water_Bottles.cpp) | _O(n)_ | _O(n)_ | Easy | Math |
| 1716 | [Calculate Money in Leetcode Bank](https://leetcode.com/problems/calculate-money-in-leetcode-bank/) | [C++](./Cpp/Calculate_Money_in_Leetcode_Bank.cpp) / [Rust](./Rust/Calculate_Money_in_Leetcode_Bank.rs) | _O(n)_ | _O(n)_ | Easy | Math |
| 2011 | [Final Value of Variable After Performing Operations](https://leetcode.com/problems/final-value-of-variable-after-performing-operations/) | [C++](./Cpp/Final_Value_of_Variable_After_Performing_Operations.cpp) / [Rust](./Rust/Final_Value_of_Variable_After_Performing_Operations.rs) | _O(n)_ | _O(n)_ | Easy | Math |
| 2169 | [Count Operations to Obtain Zero](https://leetcode.com/problems/count-operations-to-obtain-zero/) | [C++](./Cpp/Count_Operations_to_Obtain_Zero.cpp) / [Rust](./Rust/Count_Operations_to_Obtain_Zero.rs) | _O(n)_ | _O(n)_ | Easy | Math |
| 2348 | [Number of Zero-Filled Subarrays](https://leetcode.com/problems/number-of-zero-filled-subarrays/) | [C++](./Cpp/Number_of_Zero-Filled_Subarrays.cpp) / [Rust](./Rust/Number_of_Zero-Filled_Subarrays.rs) | _O(n)_ | _O(n)_ | Medium | Math, Array |
| 2598 | [Smallest Missing Non-negative Integer After Operations](https://leetcode.com/problems/smallest-missing-non-negative-integer-after-operations/) | [C++](./Cpp/Smallest_Missing_Non-negative_Integer_After_Operations.cpp) | _O(n)_ | _O(n)_ | Medium | Math |
| 2749 | [Minimum Operations to Make the Integer Zero](https://leetcode.com/problems/minimum-operations-to-make-the-integer-zero/) | [C++](./Cpp/Minimum_Operations_to_Make_the_Integer_Zero.cpp) | _O(n)_ | _O(n)_ | Medium | Math |
| 3021 | [Alice and Bob Playing Flower Game](https://leetcode.com/problems/alice-and-bob-playing-flower-game/) | [C++](./Cpp/Alice_and_Bob_Playing_Flower_Game.cpp) | _O(n)_ | _O(n)_ | Medium | Math |
| 3100 | [Water Bottles II](https://leetcode.com/problems/water-bottles-ii/) | [C++](./Cpp/Water_Bottles_II.cpp) | _O(n)_ | _O(n)_ | Medium | Math |
| 3346 | [Maximum Frequency of an Element After Performing Operations I](https://leetcode.com/problems/maximum-frequency-of-an-element-after-performing-operations-i/) | [C++](./Cpp/Maximum_Frequency_of_an_Element_After_Performing_Operations_I.cpp) / [Rust](./Rust/Maximum_Frequency_of_an_Element_After_Performing_Operations_I.rs) | _O(n)_ | _O(n)_ | Medium | Math |
| 3354 | [Make Array Elements Equal to Zero](https://leetcode.com/problems/make-array-elements-equal-to-zero/) | [C++](./Cpp/Make_Array_Elements_to_Zero.cpp) / [Rust](./Rust/Make_Array_Elements_Equal_to_Zero.rs) | _O(n)_ | _O(n)_ | Easy | Math, Array |
| 3397 | [Maximum Number of Distinct Elements After Operations](https://leetcode.com/problems/maximum-number-of-distinct-elements-after-operations/) | [C++](./Cpp/Maximum_Number_of_Distinct_Elements_After_Operations.cpp) / [Rust](./Rust/Maximum_Number_of_Distinct_Elements_After_Operations.rs) | _O(n)_ | _O(n)_ | Medium | Math |
| 3461 | [Check If Digits Are Equal in String After Operations I](https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-i/) | [C++](./Cpp/Check_If_Digits_Are_Equal_in_String_After_Operations_I.cpp) / [Rust](./Rust/Check_If_Digits_Are_Equal_in_String_After_Operations_I.rs) | _O(n)_ | _O(n)_ | Easy | Math, String |
| 3495 | [Minimum Operations to Make Array Elements Zero](https://leetcode.com/problems/minimum-operations-to-make-array-elements-zero/) | [C++](./Cpp/Minimum_Operations_to_Make_Array_Elements_Zero.cpp) | _O(n)_ | _O(n)_ | Hard | Math, Array |
---

### Trie Problems

| #   | Problem                                                                                                                 | Solutions                                                   | Time   | Space  | Difficulty | Tags                                     |
| --- | ----------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------- | ------ | ------ | ---------- | ---------------------------------------- |
| 208 | [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/)                               | [C++](./Cpp/Implement_Trie_(Prefix_Tree).cpp) | _O(n)_ | _O(n)_ | Medium     | Trie, Design, String                     |
| 211 | [Design Add and Search Words Data Structure](https://leetcode.com/problems/design-add-and-search-words-data-structure/) | [C++](./Cpp/Design_Add_and_Search_Words_Data_Structure.cpp) | _O(n)_ | _O(n)_ | Medium     | Trie, Design, String, Depth-First Search |

---

### Design Problems

| #   | Problem                                                                                                                 | Solutions                                                   | Time      | Space  | Difficulty | Tags                                     |
| --- | ----------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------- | --------- | ------ | ---------- | ---------------------------------------- |
| 155 | [Min Stack](https://leetcode.com/problems/min-stack/)                                                                   | [C++](./Cpp/Min_Stack.cpp) | _O(1)_    | _O(n)_ | Medium     | Stack, Design                            |
| 208 | [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/)                               | [C++](./Cpp/Implement_Trie_(Prefix_Tree).cpp) | _O(n)_    | _O(n)_ | Medium     | Trie, Design, String                     |
| 211 | [Design Add and Search Words Data Structure](https://leetcode.com/problems/design-add-and-search-words-data-structure/) | [C++](./Cpp/Design_Add_and_Search_Words_Data_Structure.cpp) | _O(n)_    | _O(n)_ | Medium     | Trie, Design, String, Depth-First Search |
| 146 | [LRU Cache](https://leetcode.com/problems/lru-cache/)                                                                   | [C++](./Cpp/LRU_Cache.cpp) | _O(1)_    | _O(n)_ | Medium     | Design, Hash Table                       |
| 933 | [Number of Recent Calls](https://leetcode.com/problems/number-of-recent-calls/)                                         | [C++](./Cpp/Number_of_Recent_Calls.cpp) | _O(1)_    | _O(n)_ | Easy       | Queue, Design                            |
| 295 | [Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/)                             | [C++](./Cpp/Find_Median_from_Data_Stream.cpp) | _O(logn)_ | _O(n)_ | Hard       | Heap, Design                             |
| 2353 | [Design a Food Rating System](https://leetcode.com/problems/design-a-food-rating-system/) | [C++](./Cpp/Design_a_Food_Rating_System.cpp) | _O(n)_ | _O(n)_ | Medium | Design |
| 3408 | [Design Task Manager](https://leetcode.com/problems/design-task-manager/) | [C++](./Cpp/Design_Task_Manager.cpp) | _O(n)_ | _O(n)_ | Medium | Design |
| 3484 | [Design Spreadsheet](https://leetcode.com/problems/design-spreadsheet/) | [C++](./Cpp/Design_Spreadsheet.cpp) | _O(n)_ | _O(n)_ | Medium | Design |
---

### Sliding Window Problems

| #   | Problem                                                                               | Solutions                                      | Time   | Space  | Difficulty | Tags                                 |
| --- | ------------------------------------------------------------------------------------- | ---------------------------------------------- | ------ | ------ | ---------- | ------------------------------------ |
| 209 | [Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/) | [C++](./Cpp/209_Minimum_Size_Subarray_Sum.cpp) | _O(n)_ | _O(1)_ | Medium     | Sliding Window, Array, Binary Search |
| 239 | [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)       | [C++](./Cpp/Sliding_Window_Maximum.cpp) | _O(n)_ | _O(1)_ | Hard       | Array, Sliding Window                |
| 567 | [Permutation in String](https://leetcode.com/problems/permutation-in-string/)         | [C++](./Cpp/Permutation_in_String.cpp) | _O(n)_ | _O(1)_ | Medium     | String, Sliding Window               |
| 76  | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)   | [C++](./Cpp/Minimum_Window_Substring.cpp) | _O(n)_ | _O(k)_ | Hard       | String, Sliding Window               |
| 3318 | [Find X-Sum of All K-Long Subarrays I](https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i/) | [C++](./Cpp/Find_X-Sum_of_All_K-Long_Subarrays_I.cpp) / [Rust](./Rust/Find_X-Sum_of_All_K-Long_Subarrays_I.rs) | _O(n)_ | _O(n)_ | Easy | Sliding Window, Array |
---

### Heap Problems

| #   | Problem                                                                                                                       | Solutions                                                      | Time         | Space  | Difficulty | Tags                  |
| --- | ----------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------- | ------------ | ------ | ---------- | --------------------- |
| 347 | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)                                             | [C++](./Cpp/Top_K_Frequent_Elements.cpp) | _O(n log k)_ | _O(n)_ | Medium     | Hash Table, Heap      |
| 632 | [Smallest Range Covering Elements from K Lists](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/) | [C++](./Cpp/Smallest_Range_Covering_Elements_from_K_Lists.cpp) | _O(n log k)_ | _O(k)_ | Hard       | Array, Hash Map, Heap |
| 295 | [Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/)                                   | [C++](./Cpp/Find_Median_from_Data_Stream.cpp) | _O(logn)_    | _O(n)_ | Hard       | Heap, Design          |
| 215 | [Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)                             | [C++](./Cpp/Kth_Largest_Element_in_an_Array.cpp) | _O(n)_       | _O(1)_ | Medium     | Heap, Array           |
| 3186 | [Maximum Total Damage With Spell Casting](https://leetcode.com/problems/maximum-total-damage-with-spell-casting/) | [C++](./Cpp/Maximum_Total_Damage_With_Spell_Casting.cpp) | _O(n)_ | _O(n)_ | Medium | Heap |
---

### Sorting Problems

| #   | Problem                                                                                                       | Solutions                                                  | Time         | Space  | Difficulty | Tags           |
| --- | ------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------- | ------------ | ------ | ---------- | -------------- |
| 56  | [Merge Intervals](https://leetcode.com/problems/merge-intervals/)                                             | [C++](./Cpp/Merge_Intervals.cpp) | _O(n log n)_ | _O(n)_ | Medium     | Array, Sorting |
| 581 | [Shortest Unsorted Continuous Subarray](https://leetcode.com/problems/shortest-unsorted-continuous-subarray/) | [C++](./Cpp/581_Shortest_Unsorted_Continuous_Subarray.cpp) | _O(n)_       | _O(1)_ | Medium     | Array, Sorting |
| 498 | [Diagonal Traverse](https://leetcode.com/problems/diagonal-traverse/) | [C++](./Cpp/Diagonal_Traverse.cpp) | _O(n)_ | _O(n)_ | Medium | Sorting |
| 2785 | [Sort Vowels in a String](https://leetcode.com/problems/sort-vowels-in-a-string/) | [C++](./Cpp/Sort_Vowels_in_a_String.cpp) | _O(n)_ | _O(n)_ | Medium | Sorting, String |
| 3446 | [Sort Matrix by Diagonals](https://leetcode.com/problems/sort-matrix-by-diagonals/) | [C++](./Cpp/Sort_Matrix_by_Diagonals.cpp) | _O(n)_ | _O(n)_ | Medium | Sorting |
---

### Greedy Problems

| #   | Problem                                                                                           | Solutions                                            | Time       | Space  | Difficulty | Tags                        |
| --- | ------------------------------------------------------------------------------------------------- | ---------------------------------------------------- | ---------- | ------ | ---------- | --------------------------- |
| 11  | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)             | [C++](./Cpp/Container_With_Most_Water.cpp) | _O(n)_     | _O(1)_ | Medium     | Array, Two Pointers, Greedy |
| 121 | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | [C++](./Cpp/121_Best_Time_to_Buy_and_Sell_Stock.cpp) / [Rust](./Rust/Best_Time_to_Buy_and_Sell_Stock.rs) | _O(n)_     | _O(1)_ | Easy       | Array, Greedy               |
| 134 | [Gas Station](https://leetcode.com/problems/gas-station/)                                         | [C++](./Cpp/Gas_Station.cpp) | _O(n)_     | _O(1)_ | Medium     | Array, Greedy               |
| 455 | [Assign Cookies](https://leetcode.com/problems/assign-cookies/)                                   | [C++](./Cpp/Assign_Cookies.cpp) | _O(nlogn)_ | _O(1)_ | Easy       | Greedy, Array               |
| 435 | [Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/)             | [C++](./Cpp/Non-overlapping_Intervals.cpp) | _O(nlogn)_ | _O(1)_ | Medium     | Greedy, Array               |
| 646 | [Maximum Length of Pair Chain](https://leetcode.com/problems/maximum-length-of-pair-chain/)       | [C++](./Cpp/Maximum_Length_of_Pair_Chain.cpp) | _O(nlogn)_ | _O(n)_ | Medium     | Dynamic Programming, Greedy |
| 1792 | [Maximum Average Pass Ratio](https://leetcode.com/problems/maximum-average-pass-ratio/) | [C++](./Cpp/Maximum_Average_Pass_Ratio.cpp) | _O(n)_ | _O(n)_ | Medium | Greedy |
---

<!-- AUTO-SYNCED-PROBLEMS-START -->

---

### Auto-Synced Problems

Problems in this section are picked up automatically from the `Cpp` and `Rust` folders when they are not yet listed in the curated sections above.
Problem number, title, difficulty, and tags come from LeetCode. Time and space are read from source comments when available; otherwise they are marked for manual review.

| # | Problem | Solutions | Time | Space | Difficulty | Tags |
| --- | --- | --- | --- | --- | --- | --- |
| 2654 | [Minimum Number of Operations to Make All Array Elements Equal to 1](https://leetcode.com/problems/minimum-number-of-operations-to-make-all-array-elements-equal-to-1/) | [C++](./Cpp/Minimum_Number_of_Operations_to_Make_All_Array_Elements_Equal_to_1.cpp) | Manual Review | Manual Review | Medium | Array, Math, Number Theory |
| 3542 | [Minimum Operations to Convert All Elements to Zero](https://leetcode.com/problems/minimum-operations-to-convert-all-elements-to-zero/) | [C++](./Cpp/Minimum_Operations_to_Convert_All_Elements_to_Zero.cpp) / [Rust](./Rust/Minimum_Operations_to_Convert_All_Elements_to_Zero.rs) | _O(n)_ | _O(n)_ | Medium | Array, Hash Table, Stack, Greedy, Monotonic Stack |
| - | [Minimum Number of Operations to Make All Array Equal to 1](https://leetcode.com/problems/minimum-number-of-operations-to-make-all-array-equal-to-1/) | [Rust](./Rust/Minimum_Number_of_Operations_to_Make_All_Array_Equal_to_1.rs) | Manual Review | Manual Review | Manual Review | Manual Review |

<!-- AUTO-SYNCED-PROBLEMS-END -->

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request. For major changes, please open an issue first to discuss what you would like to change.