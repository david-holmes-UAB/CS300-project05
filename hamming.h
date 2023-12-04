/*
* File: hamming.h
* ------------------------------------
* Outline/Declaration of functions used in implementing a Hamming(7, 4) code.
* Utilizes the Eigen library for multiple matrix operations.
*/

#ifndef _hamming_h
#define _hamming_h

#include <eigen3/Eigen/Dense>
#include <iostream>

/*! Decodes a Hamming word.
* @param bits An int array containing the seven individual bits of the word
*/
void decodeHamming(const int (&bits)[7]);

/*! Checks to see if an error is found in the bits.
* @param hamMatrix An Eigen 1 x 7 int matrix containing the bits of the word.
* @return The position in the matrix the error is at, if any. Returns 0 if there is no error.
*/
int hasError(const Eigen::MatrixXi &hamMatrix);

/*! Fixes the error within the bits of the Hamming word, if needed.
* @param hamMatrix An Eigen 1 x 7 int matrix containing the bits of the word.
* @return The fixed version of the input matrix.
*/
Eigen::MatrixXi fixHammingWord(Eigen::MatrixXi hamMatrix);


#endif