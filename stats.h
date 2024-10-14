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
 * @file  stats.h
 * @brief Header file for stats.c
 *
 * This file contains all function prototypes for stats.c
 *
 * @author Drew Roberds
 * @date 10/11/24
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Sorts an array of data from largest to smallest
 *
 * Takes in an array of random data. Takes this array reorders the data
 * from largest to smallest.
 *
 * @param <unsigned char* array> The array to be sorted
 * @param <int length> The sise of the array
 *
 * @return No return, the input array is reordered within the function.
 */
void sort_array(unsigned char* array, int length);

/**
 * @brief Prints a given array to the terminal
 *
 * Takes in an array and prints the array to the terminal. Data is printed
 * in 8 byte groups and reads left-to-right, top-to-bottom.
 *
 * @param <unsigned char* array> The array
 * @param <int length> The sise of the array
 *
 * @return No return.
 */
void print_array(unsigned char* array, int length);

/**
 * @brief Prints statistical analysis of a given array
 *
 * Takes in an array and prints a formatted list containing mean,
 * meadian, maximum, and minimum values.
 *
 * @param <unsigned char* array> The array
 * @param <int length> The sise of the array
 *
 * @return No return.
 */
void print_statistics(unsigned char* array, int length);

/**
 * @brief Finds the median of a given array
 *
 * Given an array, this function calls sort_array() to first sort the
 * the array from greatest to least, and then finds the median. If the
 * array is an even number, an average is calculated from the two 
 * middle numbers. If the array is odd in size, the middle number is
 * returned.
 *
 * @param <unsigned char* array> The array
 * @param <int length> The sise of the array
 *
 * @return <unsigned char median> The median value
 */
unsigned char find_median(unsigned char* array, int length);

/**
 * @brief Finds the mean of a given array
 *
 * Given an array, this function finds the mean of the array by adding up
 * all of the values in the array, and then dividing by the number of
 * elements in the array.
 *
 * @param <unsigned char* array> The array
 * @param <int length> The sise of the array
 *
 * @return <unsigned char mean> The mean value
 */
unsigned char find_mean(unsigned char* array, int length);

/**
 * @brief Finds the maximum value of a given array
 *
 * Given an array, this function finds the maximum value in the array
 * by evaluating each element and comparing it to the currently stored 
 * maximum value. If it is larger than the current maximum value, the
 * current maximum value is replaced.
 *
 * @param <unsigned char* array> The array to be sorted
 * @param <int length> The sise of the array
 *
 * @return <unsigned char max> The maximum value
 */
unsigned char find_maximum(unsigned char* array, int length);

/**
 * @brief Finds the maximum value of a given array
 *
 * Given an array, this function finds the minimum value in the array
 * by evaluating each element and comparing it to the currently stored 
 * minimum value. If it is smaller than the current minimum value, the
 * current minimum value is replaced.
 *
 * @param <unsigned char* array> The array
 * @param <int length> The sise of the array
 *
 * @return <unsigned char min> The minimum value
 */
unsigned char find_minimum(unsigned char* array, int length);

#endif /* __STATS_H__ */
