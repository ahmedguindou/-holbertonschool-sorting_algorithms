# Sorting Algorithms and Big O Notation

## At Least Four Different Sorting Algorithms

### 1. **Bubble Sort**
- **Description**: A simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process is repeated until the list is sorted.
- **Big O Notation**:
  - Worst-case: O(n^2)
  - Average-case: O(n^2)
  - Best-case: O(n) (when the array is already sorted)

### 2. **Merge Sort**
- **Description**: A divide-and-conquer algorithm that splits the array into halves, recursively sorts each half, and then merges the sorted halves back together.
- **Big O Notation**:
  - Worst-case: O(n log(n))
  - Average-case: O(n log(n))
  - Best-case: O(n log(n))

### 3. **Quick Sort**
- **Description**: Another divide-and-conquer algorithm that selects a "pivot" element, partitions the array into elements less than and greater than the pivot, and then recursively sorts the partitions.
- **Big O Notation**:
  - Worst-case: O(n^2) (when the pivot selection is poor)
  - Average-case: O(n log(n))
  - Best-case: O(n log(n))

### 4. **Insertion Sort**
- **Description**: Builds the sorted array one item at a time by repeatedly taking an element from the unsorted portion and inserting it into its correct position.
- **Big O Notation**:
  - Worst-case: O(n^2)
  - Average-case: O(n^2)
  - Best-case: O(n) (when the array is already sorted)

## What is the Big O Notation?
Big O notation describes the performance of an algorithm in terms of input size \(n\). It provides an upper bound on the time or space required by the algorithm as the input size grows. It allows us to compare the efficiency of different algorithms.

### Common Time Complexities:
- **O(1)**: Constant time.
- **O(log(n))**: Logarithmic time.
- **O(n)**: Linear time.
- **O(n^2)**: Quadratic time.
- **O(n log(n))**: Log-linear time.
- **O(2^n)**: Exponential time.

## How to Evaluate the Time Complexity of an Algorithm
1. **Identify the Input Size**: Determine the variable \(n\) that represents the size of the input.
2. **Count Operations**: Analyze the algorithm's loops, recursive calls, and statements to count the number of operations as a function of \(n\).
3. **Find the Dominant Term**: Focus on the term that grows the fastest as \(n\) increases (e.g., \(n^2\) dominates \(n\)).
4. **Remove Constants and Lower-Order Terms**: Big O notation only considers the largest growth rate.

## How to Select the Best Sorting Algorithm for a Given Input
1. **Input Size**:
   - For small input sizes, simple algorithms like **Insertion Sort** may outperform more complex ones.
   - For large input sizes, algorithms like **Merge Sort** or **Quick Sort** are typically better.

2. **Stability Requirement**:
   - If stability is required (i.e., equal elements maintain their relative order), choose a stable sort like **Merge Sort**.

3. **Memory Constraints**:
   - If memory is a concern, choose an in-place sorting algorithm like **Quick Sort** or **Heap Sort**.

4. **Input Characteristics**:
   - If the input is nearly sorted, **Insertion Sort** or **Bubble Sort** can perform well.
   - If the input is uniformly random, **Quick Sort** or **Merge Sort** is usually optimal.

## What is a Stable Sorting Algorithm?
A stable sorting algorithm ensures that the relative order of equal elements in the input remains the same in the output. For example, if two records with the same value appear in the input in positions \(i\) and \(j\), where \(i < j\), they will appear in the output in the same order.

### Examples of Stable Sorting Algorithms:
- **Bubble Sort**
- **Merge Sort**
- **Insertion Sort**

### Examples of Unstable Sorting Algorithms:
- **Quick Sort**
- **Heap Sort**

---
This document provides an overview of sorting algorithms, their time complexities, and factors to consider when choosing the right algorithm for a problem.

