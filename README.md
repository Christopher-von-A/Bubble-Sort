Hey Gökce.

This is my interpretation of the bubble sort program.

## Overview
-----------
This project implements the **Bubble Sort** algorithm with support for custom comparison functions.  
It demonstrates modular programming, function pointers and is documented by doxygen-sentences. 

The project sorts arrays of:
- **Characters (letters)** – case-insensitive alphabetical order  
- **Numbers** – ascending numerical order

## Features
--------------
- Implementation of **Bubble Sort** algorithm  
- Modular design with reusable helper functions  
- Case-insensitive comparison for letters (`letters_in_order`)  
- Numerical comparison for ascending order (`numbers_in_ascending_order`)  
- Independent `swap()` function for element swapping  
- Doxygen-style documentation for all functions  
- Example test cases in `main.c`  

## File Structure
-----------------
├── main.c # Test program
├── sort.c # Implementation of bubble sort and helpers 
└── sort.h # Header file with function declarations
