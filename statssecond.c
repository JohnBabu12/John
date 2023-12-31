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
}

void print_array(unsigned char *test, unsigned int length) {
}

unsigned char find_median(unsigned char *test, unsigned int length) {
}

unsigned char find_mean(unsigned char *test, unsigned int length) {
}

unsigned char find_maximum(unsigned char *test, unsigned int length) {
}

unsigned char find_minimum(unsigned char *test, unsigned int length) {
}

void sort_array(unsigned char *test, unsigned int length) {
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
