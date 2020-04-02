#ifndef GAME_H
#define GAME_H

#include "gba.h"

                    /* TODO: */

            // Create any necessary structs //


/*
* For example, for a Snake game, one could be:
*
* typedef struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* } Snake;
*
*
* 
*
*
* Example of a struct to hold state machine data:
* 
* typedef struct state {
*   int currentState;
*   int nextState;
* } State
*
*/


typedef struct snake {
	int direction; //5 directions, stationary, up, down, left, right
	int size;
	int bodyx[104]; //list of x positions of body parts
	int bodyy[104]; //list of y positions
} Snake;

typedef struct GameState {
	Snake snake;
	int openSpots[104];
	int foodPosx;
	int foodPosy;
} GameState;

void drawApple(GameState gs);
int advanceSnake(GameState *gs);
void drawSnake(GameState *gs);
void addNewApple(GameState *gs);
void resetGame(GameState *gs);


#endif
