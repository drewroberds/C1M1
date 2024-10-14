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
 * @file stats.c 
 * @brief 
 *
 * This program analyzes an array of unsigned char data items and reports analytics
 * on the maximum, minimum, mean, and median of the data set. In addition, the data
 * is reordered from largest to smallest. Finally, all data is printe to the screen.
 *
 * @author Drew Roberds
 * @date 10/11/24
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */

  print_statistics(test, SIZE);
  sort_array(test, SIZE);

}

void print_array(unsigned char* array, int length)
{

}

void print_statistics(unsigned char* array, int length)
{

}

unsigned char find_median(unsigned char* array, int length)
{

}

unsigned char find_mean(unsigned char* array, int length)
{

}

unsigned char find_maximum(unsigned char* array, int length)
{

}

unsigned char find_minimum(unsigned char* array, int length)
{

}

void sort_array(unsigned char* array, int length)
{

}