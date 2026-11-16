# 📚 Applied Data Structures and Algorithms Laboratory (ADSAL)

A comprehensive collection of classic **Algorithms and Data Structures** implemented in **C++** as part of the Applied Data Structures and Algorithms Laboratory (ADSL).

This repository contains practical implementations of different algorithmic design paradigms, including Backtracking, Branch and Bound, Divide and Conquer, Dynamic Programming, and Greedy Approach.

The objective is to strengthen problem-solving skills, understand algorithmic concepts, and develop efficient coding techniques.

---

## 📂 Repository Structure

The implementations are organized into five major algorithmic design paradigms.

### 1. 🔄 Backtracking

Backtracking explores possible solutions incrementally and abandons a path whenever it cannot lead to a valid solution.

| Program               | Description                                                  |
| --------------------- | ------------------------------------------------------------ |
| `Combination_Sum.cpp` | Find all combinations of candidates that sum to a target.    |
| `N_Queen.cpp`         | Solve the N-Queens problem on an N × N chessboard.           |
| `Permutation.cpp`     | Generate all possible permutations of a given set or string. |
| `Subset.cpp`          | Generate all possible subsets (power set) of an array.       |
| `Word_Search.cpp`     | Search for a word in a 2D character grid.                    |

**Folder:** `Back Tracking/`

---

### 2. 🌲 Branch and Bound

Branch and Bound explores a state-space tree and eliminates branches that cannot produce a better solution.

| Program              | Description                                                    |
| -------------------- | -------------------------------------------------------------- |
| `Job_Assignment.cpp` | Find the minimum-cost assignment of N jobs to N workers.       |
| `knapsack.cpp`       | Solve the 0/1 Knapsack problem using upper-bound calculations. |
| `n_queen.cpp`        | Solve the N-Queens problem using Branch and Bound.             |

**Folder:** `Branch and Bound/`

---

### 3. ✂️ Divide and Conquer

Divide and Conquer breaks a problem into smaller subproblems, solves them recursively, and combines their results.

| Program                         | Description                                                 |
| ------------------------------- | ----------------------------------------------------------- |
| `Binary_Search.cpp`             | Perform iterative binary search on a sorted array.          |
| `Recursive_Binary_Search.cpp`   | Implement binary search using recursion.                    |
| `Rotated_Binary_Search.cpp`     | Search for an element in a rotated sorted array.            |
| `Count_Occurrence's.cpp`        | Count occurrences of an element in O(log n) time.           |
| `Count_Zero's_One's.cpp`        | Count zeros and ones in a sorted binary array.              |
| `Factorial_Trailing_zero's.cpp` | Calculate the number of trailing zeros in n!.               |
| `Merge_Sort.cpp`                | Implement the Merge Sort algorithm in O(n log n) time.      |
| `Merge_Sort_Move_Zero's.cpp`    | Move zeros using a divide-and-conquer approach.             |
| `Move_Zero's.cpp`               | Move all zeros to the end while maintaining relative order. |

**Folder:** `Divide & Conqur/`

---

### 4. 🧩 Dynamic Programming (DP)

Dynamic Programming solves complex problems by breaking them into overlapping subproblems and storing intermediate results to avoid repeated calculations.

| Program                        | Description                                                                                           |
| ------------------------------ | ----------------------------------------------------------------------------------------------------- |
| `Coin_Change_No_Of_Way.cpp`    | Count the number of ways to make a given amount using available coins.                                |
| `Fibonacci_Recursion.cpp`      | Calculate Fibonacci numbers using recursion and memoization.                                          |
| `House_Robber.cpp`             | Find the maximum amount that can be robbed without selecting adjacent houses.                         |
| `Min_Cost_Climbing_Stairs.cpp` | Find the minimum cost required to reach the top of a staircase.                                       |
| `String_Transform.cpp`         | Find the minimum insertions, deletions, and replacements needed to transform one string into another. |
| `SubArray_Sum.cpp`             | Solve subarray sum and maximum contiguous subarray problems.                                          |

**Folder:** `DP/`

---

### 5. 💰 Greedy Approach

The Greedy Approach makes the locally optimal choice at each step with the aim of achieving a globally optimal solution.

| Program                    | Description                                                                                |
| -------------------------- | ------------------------------------------------------------------------------------------ |
| `Buy_Sell_Stock.cpp`       | Maximize profit through stock buying and selling.                                          |
| `Coin_Change.cpp`          | Find the minimum number of coins required to make a target amount using greedy selection.  |
| `Knapsack.cpp`             | Solve the Fractional Knapsack problem using the value-to-weight ratio.                     |
| `Min_Capacity_Of_Ship.cpp` | Find the minimum ship capacity required to deliver packages within a given number of days. |
| `Shop_Visit.cpp`           | Solve an interval scheduling or visit maximization problem.                                |
| `Single_Element.cpp`       | Find the single non-repeating element in an array of duplicates.                           |

**Folder:** `Greddy Approach/`

---

## 🛠️ Prerequisites

To run the programs, you need:

- C++ compiler (GCC, Clang, or MSVC).
- C++11 or higher.
- Visual Studio Code or any C++ compatible IDE.

---

## ▶️ Compilation and Execution

### Linux / macOS

Compile and run any C++ program using:

```bash
g++ -std=c++17 -O2 "path/to/file.cpp" -o program
./program
```

**Example:**

```bash
g++ -std=c++17 -O2 "Back Tracking/N_Queen.cpp" -o n_queen
./n_queen
```

### Windows (PowerShell / Command Prompt)

```powershell
g++ -std=c++17 "Back Tracking\N_Queen.cpp" -o n_queen.exe
.\n_queen.exe
```

---

## 🎯 Learning Objectives

- Understand different algorithm design paradigms.
- Implement classic algorithms using C++.
- Develop problem-solving and logical thinking skills.
- Understand recursion and optimization techniques.
- Analyze algorithm efficiency and complexity.
- Practice data structures and algorithmic concepts through practical coding.

---

## 👨‍💻 Author

**Fakruddin Khan**

- GitHub: [Fakruddin-Coder](https://github.com/fakruddinkhan)

---

## 📝 License

This repository is intended for educational and learning purposes. You are welcome to explore the implementations and use them as a reference for understanding Algorithms and Data Structures.

---

⭐ If you find this repository helpful, consider giving it a star!
