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
  printf("Before Sort:\n");
  print_array(test, SIZE);
  print_statistics(test, SIZE);
  //sort_array(test, SIZE);
  printf("\nAfter Sort:\n");
  print_array(test, SIZE);

}

void print_array(unsigned char* array, int length)
{
  printf("[ ");
  for (int i = 0 ; i < length ; i++)
      {
        if((i % 8 == 0) && (i != 0))
        {
          printf("\n");
        }
        printf("%3d ", array[i]);
      }
      printf("]\n\n");
}

void print_statistics(unsigned char* array, int length)
{
  unsigned char median;
  unsigned char mean;
  unsigned char max;
  unsigned char min;

  median = find_median(array, length);
  mean = find_mean(array, length);
  max = find_maximum(array, length);
  min = find_minimum(array, length);

  printf("----------ARRAY STATISTICS REPORT----------\n\n\tMedian = %3d\n\tMean = %3d\n\tMaximum = %3d\n\tMinimum = %3d\n\n----------END OF CURRENT REPORT----------\n", median, mean, max, min);
}

unsigned char find_median(unsigned char* array, int length)
{
  unsigned char median;
  sort_array(array, length);
  if(length % 2 == 0)
  {
    median = (array[length/2] + array[(length/2) - 1])/2;
  }
  else {median = array[(length - 1)/2];}

  return median;
}

unsigned char find_mean(unsigned char* array, int length)
{
  unsigned char mean;
  int total = 0;
  for(int i = 0; i < length; i++)
  {
    total = total + array[i];
  }
  mean = total/length;
  return mean;
}

unsigned char find_maximum(unsigned char* array, int length)
{
  unsigned char max = 0;
  for (int i = 0; i < length ; i++)
  {
    if(array[i] > max)
    {
      max = array[i];
    }
  }
  return max;
}

unsigned char find_minimum(unsigned char* array, int length)
{
  unsigned char min = 0xFF;
  for (int i = 0; i < length ; i++)
  {
    if(array[i] < min)
    {
      min = array[i];
    }
  }
  return min;
}

void sort_array(unsigned char* array, int length)
{
  int max;        //used to hold current max value
  int replace;    //used to hold index of value to replace in array
  int index = 0;  //used to index to end of array after each iteration

  while(length - index != 0)
  {
    max = 0;
    for(int i = index ; i < length ; i++)
    {
      if(array[i] > max)
      {
        max = array[i];
        replace = i;
      }
    }
    array[replace] = array[index];
    array[index] = max;
    index++;
  }
}