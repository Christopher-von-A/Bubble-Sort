/**
 * @file sort.c
 * @brief Implementation of bubble sort and helper comparison/swap functions.
 */

#include "sort.h"
#include <ctype.h> // for tolower()

/**
 * @brief Swaps the values of two elements.
 */
void swap(char *a, char *b) {
  char temp = *a;
  *a = *b;
  *b = temp;
}

/**
 * @brief Checks if two letters are in alphabetical order, ignoring case.
 *
 * This function compares letters a–z and A–Z in a case-insensitive way.
 *
 * Examples:
 * - letters_in_order('a', 'b') → true
 * - letters_in_order('a', 'B') → true
 * - letters_in_order('b', 'a') → false
 * - letters_in_order('a', 'A') → true
 */
bool letters_in_order(char a, char b) {
  char lower_a = tolower(a);
  char lower_b = tolower(b);
  return lower_a <= lower_b;
}

/**
 * @brief Checks if two numbers are in ascending order.
 *
 * This function compares two `char` values interpreted as signed numbers.
 *
 * Examples:
 * - numbers_in_ascending_order(1, 2) → true
 * - numbers_in_ascending_order(1, 1) → true
 * - numbers_in_ascending_order(1, -1) → false
 */
bool numbers_in_ascending_order(char a, char b) { return a <= b; }

/**
 * @brief Performs a bubble sort on the given array.
 *
 * The function uses a function pointer `pair_is_in_order` to determine
 * the correct order between elements, making it reusable for letters,
 * numbers, or other comparison logic.
 *
 * @param arr The array to be sorted.
 * @param size The number of elements in the array.
 * @param pair_is_in_order A comparison function that returns true if a pair is
 * in order.
 *
 * The algorithm repeatedly steps through the array, comparing each pair
 * of adjacent elements. If a pair is not in order, the elements are swapped.
 * The process repeats until a complete pass occurs with no swaps.
 */
void bubble_sort(char arr[], int size,
                 bool (*pair_is_in_order)(char a, char b)) {
  bool swapped;

  for (int i = 0; i < size - 1; i++) {
    swapped = false;

    for (int j = 0; j < size - i - 1; j++) {
      if (!pair_is_in_order(arr[j], arr[j + 1])) {
        swap(&arr[j], &arr[j + 1]);
        swapped = true;
      }
    }

    // If no swaps occurred, the array is already sorted
    if (!swapped)
      break;
  }
}
