//testGame.c
//Contains a bunch of unit tests for Game.c
//Edited by Conrad 9th of May 2016

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Game.h"

#define DEFAULT_DICE {9,10,8,12,6,5,3,11,3,11,4,6,4,7,9,2,8,10,5}
#define DEFAULT_DISCIPLINES {STUDENT_BQN, STUDENT_MMONEY, STUDENT_MJ, \
                STUDENT_MMONEY, STUDENT_MJ, STUDENT_BPS, STUDENT_MTV, \
                STUDENT_MTV, STUDENT_BPS,STUDENT_MTV, STUDENT_BQN, \
                STUDENT_MJ, STUDENT_BQN, STUDENT_THD, STUDENT_MJ, \
                STUDENT_MMONEY, STUDENT_MTV, STUDENT_BQN, STUDENT_BPS}

//note: #defines are inherited from #included files, so we can use those

int main (int argc, char* argv[]){

    int disciplines[] = DEFAULT_DISCIPLINES;
    int dice[] = DEFAULT_DICE;

    Game g = newGame (disciplines, dice);

    assert(g != NULL); //make sure it exists

    assert(getMostARCs(g) == NO_ONE);
    //make sure initial values are set correctly

    assert(getKPIpoints(g, UNI_B) == 0);
    //nobody is supposed to have any points yet

    assert(getCampuses(g, UNI_A) == 2);
    assert(getCampuses(g, UNI_B) == 2);
    assert(getCampuses(g, UNI_C) == 2);
    //making sure everybody has the default start values

    assert(getStudents(g, UNI_A, STUDENT_BPS) == 3)
    assert(getStudents(g, UNI_A, STUDENT_BQN) == 3)
    assert(getStudents(g, UNI_A, STUDENT_MJ) == 1)
    assert(getStudents(g, UNI_A, STUDENT_MMONEY) == 1)
    assert(getStudents(g, UNI_A, STUDENT_MTV) == 1)

    assert(getStudents(g, UNI_B, STUDENT_BPS) == 3)
    assert(getStudents(g, UNI_B, STUDENT_BQN) == 3)
    assert(getStudents(g, UNI_B, STUDENT_MJ) == 1)
    assert(getStudents(g, UNI_B, STUDENT_MMONEY) == 1)
    assert(getStudents(g, UNI_B, STUDENT_MTV) == 1)

    assert(getStudents(g, UNI_C, STUDENT_BPS) == 3)
    assert(getStudents(g, UNI_C, STUDENT_BQN) == 3)
    assert(getStudents(g, UNI_C, STUDENT_MJ) == 1)
    assert(getStudents(g, UNI_C, STUDENT_MMONEY) == 1)
    assert(getStudents(g, UNI_C, STUDENT_MTV) == 1)
    //make sure each uni has the right set of students

    assert(getWhoseTurn(g) == UNI_A);
    //probably A to move first

    assert(getExchangeRate(g, UNI_A, STUDENT_BPS, STUDENT_THD) == 3)
    //make sure exchange rates are set correctly

    //assert();

    printf("All tests passed, you are Awesome!");

    disposeGame (g);
    return EXIT_SUCCESS;
}
