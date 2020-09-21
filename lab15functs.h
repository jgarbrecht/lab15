/** lab15functs.h
 * ===========================================================
 * Name: Jacob Garbrecht, 12 Sep 2020
 * Section: M6-7A
 * Project: Lab 15
 * Purpose: user-defined function headers for lab 15
 * ===========================================================
 */

#ifndef LAB14FUNCTS_H
#define LAB14FUNCTS_H

#include "lab15fbFuncts.h"

/*** @fn int findMaxIndex(int fbData[][DATACOLS], int ARRAY_SIZE, int statistic)
 *   @brief finds the location of the maximum value in the array column
 *   @param fbData[][DATACOLS]: the array to be checked to find the max value
 *   @param ARRAY_SIZE: the number of values stored in the array column
 *   @param statistic: the column number; 0 for attempts, 1 for yards, 2 for tds
 *   @returns the index of the column's largest value
 */
int findMaxIndex(int fbData[][DATACOLS], int ARRAY_SIZE, int statistic);

/*** @fn int numPlayerOverX(int fbData[][DATACOLS], int ARRAY_SIZE, int x, int statistic)
 *   @brief counts the number of players in the array column with a value greater than x
 *   @param fbData[][DATACOLS]: the array to be checked
 *   @param ARRAY_SIZE: the number of values stored in the array column
 *   @param x: the threshold value to check each array value against
 *   @param statistic: the column number; 0 for attempts, 1 for yards, 2 for tds
 *   @returns the number of entries larger than x
 */
int numPlayerOverX(int fbData[][DATACOLS], int ARRAY_SIZE, int x, int statistic);

/*** @fn int getMaxYardsPerCarryIndex(int attemptArray[], int yardArray[], int ARRAY_SIZE, int attemptsThreshold)
 *   @brief finds the address of the player with max yards per carry with more attempts than the threshold
 *   @param fbData[][DATACOLS]: the array to be checked
 *   @param ARRAY_SIZE: the number of values stored in the array
 *   @param attemptsThreshold: minimum number of attempts
 *   @returns the index of the player with greatest yards per carry
 */
int getMaxYardsPerCarryIndex(int fbData[][DATACOLS], int ARRAY_SIZE, int attemptsThreshold);

/*** @fn double getMaxYardsPerCarry(int attemptArray[], int yardArray[], int ARRAY_SIZE, int attemptsThreshold)
 *   @brief finds the max yards per carry out of players with more attempts than the threshold
 *   @param fbData[][DATACOLS]: the array to be checked
 *   @param ARRAY_SIZE: the number of values stored in the array
 *   @param attemptsThreshold: minimum number of attempts
 *   @returns the maximum yards per carry for players above the threshold
 */
double getMaxYardsPerCarry(int fbData[][DATACOLS], int ARRAY_SIZE, int attemptsThreshold);

#endif //LAB14FUNCTS_H