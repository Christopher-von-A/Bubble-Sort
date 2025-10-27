/**
 * @file main.c
 * @brief Demonstrates and tests the bubble sort algorithm using different
 * comparison functions.
 */

#include "sort.h"
#include <stdio.h>


/**
 * @brief Main test function.
 *
 * Tests bubble sort on two different arrays:
 * - A character array with letters (case-insensitive sorting)
 * - A numeric array (ascending order)
 *
 * Prints results to standard output.
 */
int main() {
  // Test letters
  char letter_arr1[] = {'z', 'S', 's', 'a'};
  int letter_size = sizeof(letter_arr1) / sizeof(letter_arr1[0]);

  bubble_sort(letter_arr1, letter_size, letters_in_order);

  printf("Sorted letters: ");
  for (int i = 0; i < letter_size; i++) {
    printf("%c ", letter_arr1[i]);
  }
  printf("\n");

  // Test numbers
  char number_arr1[] = {4, -1, 2, 9};
  int number_size = sizeof(number_arr1) / sizeof(number_arr1[0]);

  bubble_sort(number_arr1, number_size, numbers_in_ascending_order);

  printf("Sorted numbers: ");
  for (int i = 0; i < number_size; i++) {
    printf("%d ", number_arr1[i]);
  }
  printf("\n");

  return 0;
}
