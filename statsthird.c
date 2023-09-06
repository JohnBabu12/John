/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file<stats> 
 * @brief <herev>
 *
 * <Add Extended Description Here>
 *
 * @author <John Babu Gandikota>
 * @date <5/09/2023>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE  (40)
unsigned int length=SIZE;
void print_statistics(unsigned char *test, unsigned int length) {
    unsigned char median = find_median(test, length);
    unsigned char mean = find_mean(test, length);
    unsigned char maximum = find_maximum(test, length);
    unsigned char minimum = find_minimum(test, length);

    printf("Statistics:\n");
    printf("Minimum: %d\n", minimum);
    printf("Maximum: %d\n", maximum);
    printf("Mean: %d\n", mean);
    printf("Median: %d\n", median);
}

void print_array(unsigned char *test, unsigned int length) {
    printf("Data Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", test[i]);
    }
    printf("\n");
}

unsigned char find_median(unsigned char *test, unsigned int length) {
    // Sort the array in ascending order
    sort_array(test, length);

    // If the length of the array is odd, return the middle element
    if (length % 2 == 1) {
        return test[length / 2];
    }
    // If the length of the array is even, return the average of the two middle elements
    else {
        unsigned int middle1 = test[length / 2 - 1];
        unsigned int middle2 = test[length / 2];
        return (unsigned char)((middle1 + middle2) / 2);
    }
}

unsigned char find_mean(unsigned char *test, unsigned int length) {
    unsigned int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += test[i];
    }
    return (unsigned char)(sum / length);
}

unsigned char find_maximum(unsigned char *test, unsigned int length) {
    unsigned char max = test[0];
    for (int i = 1; i < length; i++) {
        if (test[i] > max) {
            max = test[i];
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char *test, unsigned int length) {
    unsigned char min = test[0];
    for (int i = 1; i < length; i++) {
        if (test[i] < min) {
            min = test[i];
        }
    }
    return min;
}

void sort_array(unsigned char *test, unsigned int length) {
    // Bubble Sort Algorithm to sort the array in ascending order
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (test[j] > test[j + 1]) {
                // Swap data[j] and data[j+1]
                unsigned char temp = test[j];
                test[j] = test[j + 1];
                test[j + 1] = temp;
            }
        }
    }
}
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test,length);
  print_array(test,length);
  find_median(test,length);
  find_mean(test,length);
  find_maximum(test,length);
  find_minimum(test,length);
  sort_array(test,length);

}


/* Add other Implementation File Code Here */
