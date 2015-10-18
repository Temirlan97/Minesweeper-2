#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void player_begins_easy(){
    int n=20, i=0, pl=1, pc=0, y;
    for (i=0; i<n; i++)
        printf ("[] ");
    printf("[*]\n");
    while (1) {
        printf ("Your, turn! Enter the amount of boxes you want to open:\n");
        scanf ("%d", &pl);
        while ((pl> 3) || (pl<1)){
            printf ("You can open only 1, 2 or 3 boxes. Try again\n");
            scanf ("%d", &pl);
        }
        n -= pl;
        printf("Boxes left: ");
            for (i=0; i<n; i++)
                printf ("[] ");
                printf("[*]\n");
        if (n<1){
            printf ("**  **  ****  **  **    **   ** ** ** ***\n"
                    "**  ** **  ** **  **    **   **    ***   **\n"
                    "****** **  ** **  **    **   ** ** **    **\n"
                    "    ** **  ** **  **    ** * ** ** **    **\n"
                    "*****   ****   *** *     ** **  ** **    ***\n");
                    exit (1);
        }
        if (n>3){
            y = rand() % 3;
            pc = y + 1;
        }
        else
            pc = 1;
        printf ("\n\n\nPC opened %d box(es)\n", pc);
        n -= pc;
            printf("Boxes left: ");
            for (i=0; i<n; i++)
                printf ("[] ");
                printf("[*]\n");
        if (n<1){
            printf ("Ooops! I guess you have to open that box with bomb inside:D\n"
                "  *****\n"
                "***    **  ******  ***   *** ******    ****  **    ** ****** *****\n"
                "***        **  **  **** **** **       **  ** **    ** **     **  **\n"
                "***  ****  ******  ** *** ** ****     **  ** **    ** ****   ****\n"
                "***    **  **  **  **     ** **       **  **  **  **  **     ** **\n"
                "********   **  **  **     ** ******    ****     **    ****** **   ***\n");
            exit(1);
        }
    }
}
void pc_begins_easy(){
    int n=20, i=0, pl, pc, y;
    for (i=0; i<n; i++)
        printf ("[] ");
    printf("[*]\n");
    while (1) {
        if (n<3)
            pc = 1;
        else {
            y = rand() % 3;
            pc = y +1;
        }
        printf ("\n\n\nPC opened %d box(es)\n", pc);
        n= n - pc;
        if (n<1){
            printf ("Ooops! I guess you have to open that box with bomb inside:D\n"
                "  *****\n"
                "***    **  ******  ***   *** ******    ****  **    ** ****** *****\n"
                "***        **  **  **** **** **       **  ** **    ** **     **  **\n"
                "***  ****  ******  ** *** ** ****     **  ** **    ** ****   ****\n"
                "***    **  **  **  **     ** **       **  **  **  **  **     ** **\n"
                "********   **  **  **     ** ******    ****     **    ****** **   ***\n");
            exit(1);
        }
        printf("Boxes left: ");
        for (i=0; i<n; i++)
                printf ("[] ");
                printf("[*]\n");
        printf ("Your, turn! Enter the amount of boxes you want to open:\n");
        scanf ("%d", &pl);
        while ((pl> 3) || (pl<1)){
            printf ("You can open only 1, 2 or 3 boxes. Try again\n");
            scanf ("%d", &pl);
        }
        printf ("You opened %d box(es).\n", pl);
        n = n - pl;
        printf("Boxes left: ");
            for (i=0; i<n; i++)
                printf ("[] ");
                printf("[*]\n");
        if (n<1){
            printf ("**  **  ****  **  **    **   ** ** ** ***\n"
                    "**  ** **  ** **  **    **   **    ***   **\n"
                    "****** **  ** **  **    **   ** ** **    **\n"
                    "    ** **  ** **  **    ** * ** ** **    **\n"
                    "*****   ****   *** *     ** **  ** **    ***\n");
                    exit (1);
        }
    }
}
void player_begins_hard(){
    int n=20, i=0, pl=1;
    for (i=0; i<n; i++)
        printf ("[] ");
    printf("[*]\n");
    while (n>0) {
        printf ("Your, turn! Enter the amount of boxes you want to open:\n");
        scanf ("%d", &pl);
        while ((pl> 3) || (pl<1)){
            printf ("You can open only 1, 2 or 3 boxes. Try again\n");
            scanf ("%d", &pl);
        }
        printf ("\n\n\nYou opened %d box(es). PC opened %d box(es)\n", pl, (4-pl));
        n = n - 4;
            for (i=0; i<n; i++)
                printf ("[] ");
                printf("[*]\n");
    }
    printf ("Ooops! I guess you have to open that box with bomb inside:D\n"
            "  *****\n"
            "***    **  ******  ***   *** ******    ****  **    ** ****** *****\n"
            "***        **  **  **** **** **       **  ** **    ** **     **  **\n"
            "***  ****  ******  ** *** ** ****     **  ** **    ** ****   ****\n"
            "***    **  **  **  **     ** **       **  **  **  **  **     ** **\n"
            "********   **  **  **     ** ******    ****     **    ****** **   ***\n");
}

void pc_begins_hard() {
    int n=20, i=0, pl=3;
    for (i=0; i<n; i++)
        printf ("[] ");
    printf("[*]\n");
    while (pl==3) {
        printf ("\n\n\nPC opened 1 box(es)\n");
        n--;
        printf("Boxes left: ");
        for (i=0; i<n; i++)
                printf ("[] ");
                printf("[*]\n");
        printf ("Your, turn! Enter the amount of boxes you want to open:\n");
        scanf ("%d", &pl);
        while ((pl> 3) || (pl<1)){
            printf ("You can open only 1, 2 or 3 boxes. Try again\n");
            scanf ("%d", &pl);
        }
        printf ("PC opened 1 box(es). You opened %d box(es).\n", pl);
        n = n - pl;
            for (i=0; i<n; i++)
                printf ("[] ");
                printf("[*]\n");
        if (n<0){
            printf ("**  **  ****  **  **    **   ** ** ** ***\n"
                    "**  ** **  ** **  **    **   **    ***   **\n"
                    "****** **  ** **  **    **   ** ** **    **\n"
                    "    ** **  ** **  **    ** * ** ** **    **\n"
                    "*****   ****   *** *     ** **  ** **    ***\n");
                    exit (1);
        }
        if (pl!=3)
            break;
    }
    int pc = 3 - pl;
    printf ("\n\n\nPC opened %d box(es)\n", pc);
    n -= pc;
    printf("Boxes left: ");
    for (i=0; i<n; i++)
                printf ("[] ");
                printf("[*]\n");
    while (n>0) {
        printf ("Your, turn! Enter the amount of boxes you want to open:\n");
        scanf ("%d", &pl);
        while ((pl> 3) || (pl<1)){
            printf ("You can open only 1, 2 or 3 boxes. Try again\n");
            scanf ("%d", &pl);
        }
        printf ("PC opened %d box(es).You opened %d box(es).\n", pc, pl);
        n = n - pl;
            for (i=0; i<n; i++)
                printf ("[] ");
                printf("[*]\n");
        pc = 4 -pl;
        printf ("\n\n\nPC opened %d box(es)\n", pc);
        n= n - pc;
        printf("Boxes left: ");
        for (i=0; i<n; i++)
                printf ("[] ");
                printf("[*]\n");
    }
    printf ("Ooops! I guess you have to open that box with bomb inside:D\n"
            "  *****\n"
            "***    **  ******  ***   *** ******    ****  **    ** ****** *****\n"
            "***        **  **  **** **** **       **  ** **    ** **     **  **\n"
            "***  ****  ******  ** *** ** ****     **  ** **    ** ****   ****\n"
            "***    **  **  **  **     ** **       **  **  **  **  **     ** **\n"
            "********   **  **  **     ** ******    ****     **    ****** **   ***\n");
}
int main () {
    char mode[6];
    printf ("****       ****\n"
            "******   ******  **  ** ****   ******    *****   **     ** ****** ******\n"
            "****  ***  ****      ***   **  **       **       **     ** **     **\n"
            "****   *   ****  **  **    **  ****      *****   ** *** ** ****   ****    ***\n"
            "****       ****  **  **    **  **           **   **** **** **     **\n"
            "****       ****  **  **    **  ******   *****    ***   *** ****** ******\n"
            "\n"
            "                                                   *******   \n"
            "                      ******  ******  ******      ***    ***\n"
            "                      **   ** **      **   **            **\n"
            "                      ** ***  ****    ** ***           **\n"
            "                      **      **      **  **         ***    **\n"
            "                      **      ******  **   ***     *********\n"
            "\n");
    getchar();
    printf ("RULES:\n"
            "1) YOU WITH PC MUST OPEN ALL BOXES AND CHECK FOR BOMBS\n"
            "2) IT IS ONLY POSSIBLE TO OPEN THEM ONE BY ONE, BEGINNING FROM THE LEFT\n"
            "3) YOU CAN OPEN 3 BOXES AT MOST AND 1 BOX AT LEAST IN ONE TIME\n"
            "4) FUN PART: THE BOMB IS IN THE LAST BOX\n"
            "\n"
            "\n"
            "\n");
    getchar ();
    printf ("   ****   **  **   ****    ****    ***** ******    ******** **  ** ******\n"
            "  **   ** **  **  **  **  **  **  **     **        ******** **  ** **\n"
            "  **      ******  **  **  **  **   ***** *****        **    ****** ****\n"
            "  **   ** **  **  **  **  **  **      ** **           **    **  ** **\n"
            "   ****   **  **   ****    ****   *****  ******       **    **  ** ******\n"
            "\n"
            "                               ** *** ***   ****        ** ******   **\n"
            "                               **   **  ** **  **       ** **       **\n"
            "                               **   **  ** **  **  **** ** ****     \n"
            "                               **   **  ** **  ** **   *** **       **\n"
            "                               **   **  **  ****   **** ** ******   **\n"
            "\n"
            "\n"
            "\n"
            "******  ****    *****  **  **              **  **  ****  *****        **\n"
            "**     **  **  **      **  **              **  ** **  ** **   **      **\n"
            "****   ******   *****  ******              ****** ****** ** ***  **** **\n"
            "**     **  **      **      **              **  ** **  ** ** **  **   ***\n"
            "****** **  **  *****   *****               **  ** **  ** **  *** **** **\n"
            "\n"
            "\n");
    while (1) {
        fgets (mode, sizeof(mode), stdin);
        mode[strlen(mode)-1] = '\0';
        if (strcmp(mode,"hard")== 0){
            printf ("NICE! Let's play!\nYou want to begin first?\n");
            char yesno[5];
            fgets (yesno, sizeof(yesno), stdin);
            yesno[strlen(yesno)-1] = '\0';
            if (strcmp(yesno,"yes")== 0){
                player_begins_hard();
                break;
            }
            else if (strcmp(yesno, "no")== 0){
                pc_begins_hard();
                break;
            }
            else {
                printf ("Sorry, your answer is not clear, but I guess you want to begin :)\n");
                player_begins_hard();
            break;
            }
        }
        else if (strcmp(mode, "easy") == 0){
            printf ("Let's begin!\nYou want to begin first??\n");
            char yesno[5];
            fgets (yesno, sizeof(yesno), stdin);
            yesno[strlen(yesno)-1] = '\0';
            if (strcmp(yesno,"yes")== 0){
                player_begins_easy();
                break;
            }
            else if (strcmp(yesno, "no")== 0){
                pc_begins_easy();
                break;
            }
            else {
                printf ("Sorry, your answer is not clear, but I guess you want to begin :)\n");
                player_begins_easy();
            }
            break;
        }
        else
            printf ("Not correct. Please, enter the mode again:\n");
    }
    return 0;
}
