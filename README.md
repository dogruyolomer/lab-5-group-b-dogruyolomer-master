[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/xlwlKchF)
# Assignment: Array Number Frequency Counter

## 🎯 Objective
The goal of this assignment is to practice working with **arrays**, **loops**, and **conditional logic**. You will write a program that stores user input in a fixed-size data structure and performs a linear search to count specific occurrences.

## 📝 Problem Statement
Write a program that declares an array of integers with a capacity of **100**. The program should first populate this array by asking the user to input 100 integers. Afterward, the program will ask the user for a specific "target" number and calculate how many times that target number appears in the array.

## 🛠 Requirements

1.  **Array Declaration**: Create an integer array of size `100`.
2.  **Input Phase**:
    * Use a loop (e.g., `for` or `while`) to iterate 100 times.
    * In each iteration, prompt the user to enter a number and store it in the array.
3.  **Search Phase**:
    * Prompt the user to enter a **number to search**.
    * Initialize a counter variable to zero.
    * Loop through the entire array (indices 0 to 99).
    * Compare the current array element with the search number.
    * If they match, increment your counter.
4.  **Output Phase**:
    * Print a message stating how many times the number was found.

---

Important : For your own testing, you can use a smaller array size, such as 5 but do not forget to set it back to 100 before pushing to the repo.

## 💻 Example Interaction

Below is a simulation of how your program should behave.

*(Note: Input shortened for brevity, but your program must handle 100 inputs)*

```text
--- Array Input ---
Enter number 1: 50
Enter number 2: 12
Enter number 3: 50
...
Enter number 100: 7

--- Search ---
Enter the number to search for: 50

--- Result ---
The number 50 appears 2 times in the array.
