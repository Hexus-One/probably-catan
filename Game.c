//Game.c
//Contains the struct definition
//and interface functions

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Game.h"

typedef struct _game {
   int currentTurn;
   int playerToAct;

   //... more stuff in here
} game;


//all local functions below VVV


//setters
Game newGame (int discipline[], int dice[]){
	Game g=0;
	return g;
}

void disposeGame (Game g){

}

void makeAction (Game g, action a){

}

void throwDice (Game g, int diceScore){

}


//getters
int getDiscipline (Game g, int regionID){

	return 0;
}

int getDiceValue (Game g, int regionID){
	return 0;
}

int getMostARCs (Game g){
	return 0;
}

int getMostPublications (Game g){
	return 0;
}

int getTurnNumber (Game g){
	int turnNumber;
	turnNumber = g->currentTurn;
	return turnNumber;
}

int getWhoseTurn (Game g){

	return g->playerToAct;
}

int getCampus(Game g, path pathToVertex){
	return 0;
}

int getARC(Game g, path pathToEdge){
	return 0;
}

int isLegalAction (Game g, action a){
	return 0;
}

//getters relating to individual players
int getKPIpoints (Game g, int player){
	return 0;
}

int getARCs (Game g, int player){
	return 0;
}

int getGO8s (Game g, int player){
	return 0;
}

int getCampuses (Game g, int player){
	return 0;
}

int getIPs (Game g, int player){
	return 0;
}

int getPublications (Game g, int player){
	return 0;
}

int getStudents (Game g, int player, int discipline){
	return 0;
}

int getExchangeRate (Game g, int player,int disciplineFrom, int disciplineTo){
	return 0;

}
