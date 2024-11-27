#include <stdio.h>
#include <string.h>



typedef struct Monsters
    {
        char name[20];
        int curhp, maxhp, dp;
    } Monster;



void printMonsterData(Monster *monsterp)
    {
    printf("%s has %d/%d HP and %d DP\n", monsterp->name, monsterp->curhp, monsterp->maxhp, monsterp->dp);
}



int main()
{
        Monster monster1;

        monster1.curhp = monster1.maxhp = 30;
        monster1.dp = 10;
        strcpy(monster1.name, "Leonard");

        printMonsterData(&monster1);

    return 0;
}