/** lab15main.c
 * ===========================================================
 * Name: Jacob Garbrecht, 12 Sep 2020
 * Section: M6-7A
 * Project: Lab 15
 * Purpose: Main function for Lab 15:
 *          -reads fbData.txt
 *          -Outputs player info for indexes 0 and 122
 *          -Outputs the player with the most yards and the player with the most TDs
 *          -Outputs other player info
 * ===========================================================
 */

#include <stdio.h>
#include "lab15functs.h"
#include "lab15fbFuncts.h"

int main(void) {
    int playerData[MAXPLAYERS][DATACOLS] = {0}; //stores attempts, yards, and tds for each player
    int numPlayers = readData(playerData);

    printf("%d players data read.\n\n", numPlayers);

    printf("The player ID %d is %s and he scored %d touchdowns in 2017.\n", 0, getPlayerName(0), playerData[0][2]);
    printf("The player ID %d is %s and he rushed for %d yards in 2017.\n", 122, getPlayerName(122), playerData[122][1]);
    printf("\n");

    int maxYardsIndex = findMaxIndex(playerData, numPlayers, 1);
    printf("The player with the most yards in 2017 is %s and he had %d.\n", getPlayerName(maxYardsIndex), playerData[maxYardsIndex][1]);
    int maxTDIndex = findMaxIndex(playerData, numPlayers, 2);
    printf("The player with the most TDs in 2017 is %s and he had %d.\n", getPlayerName(maxTDIndex), playerData[maxTDIndex][2]);
    printf("\n");

    printf("The number of players with more than 10 TDs in 2017 is %d.\n", numPlayerOverX(playerData, numPlayers, 10, 2));
    printf("The number of players with more than 1000 yards in 2017 is %d.\n", numPlayerOverX(playerData, numPlayers, 1000, 1));
    printf("The number of players with more than 100 attempts in 2017 is %d.\n", numPlayerOverX(playerData, numPlayers, 100, 0));
    printf("\n");

    int YPCIndex = getMaxYardsPerCarryIndex(playerData, numPlayers, 100); //store getMaxYardsPerCarryIndex output
    printf("The player with the most yards per carry (>100 attempts) is %s and he had %.1lf.\n", getPlayerName(YPCIndex), getMaxYardsPerCarry(playerData, numPlayers, 100));
    YPCIndex = getMaxYardsPerCarryIndex(playerData, numPlayers, 50);
    printf("The player with the most yards per carry (>50 attempts) is %s and he had %.1lf.\n", getPlayerName(YPCIndex), getMaxYardsPerCarry(playerData, numPlayers, 50));
    YPCIndex = getMaxYardsPerCarryIndex(playerData, numPlayers, 10);
    printf("The player with the most yards per carry (>10 attempts) is %s and he had %.1lf.\n", getPlayerName(YPCIndex), getMaxYardsPerCarry(playerData, numPlayers, 10));


    char c;
    scanf(" %c", &c);

    return 0;
}