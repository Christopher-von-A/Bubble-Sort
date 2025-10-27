/**
 * @file sort.h
 * @brief Header file for bubble sort and helper functions.
 */

#ifndef SORT_H
#define SORT_H

#include <stdbool.h>

/**
 * @brief Sorts an array using the Bubble Sort algorithm.
 *
 * @param arr The array to sort.
 * @param size The number of elements in the array.
 * @param pair_is_in_order Function pointer that determines if two elements are
 * in correct order.
 *
 * This function repeatedly steps through the array, compares adjacent pairs,
 * and swaps them if they are in the wrong order based on the provided
 * comparison function. The process repeats until no swaps are needed.
 */
void bubble_sort(char arr[], int size,
                 bool (*pair_is_in_order)(char a, char b));

/**
 * @brief Checks if two characters are in alphabetical order (case-insensitive).
 *
 * @param a The first character.
 * @param b The second character.
 * @return true if a <= b (ignoring case), false otherwise.
 */
bool letters_in_order(char a, char b);

/**
 * @brief Checks if two numeric characters (treated as signed values) are in
 * ascending order.
 *
 * @param a The first number.
 * @param b The second number.
 * @return true if a <= b, false otherwise.
 */
bool numbers_in_ascending_order(char a, char b);

/**
 * @brief Swaps two elements of an array.
 *
 * @param a Pointer to the first element.
 * @param b Pointer to the second element.
 *
 * Example:
 * @code
 * char arr[] = {1, 2, 3};
 * swap(&arr[0], &arr[2]);
 * // arr is now {3, 2, 1}
 * @endcode
 */
void swap(char *a, char *b);

#endif
