/**
 *  Fichier : hexapod.h
 *  Auteur : Bondallaz Corentin
 *  Date : 26.07.24
 * 
 **/

#ifndef HEXAPOD_H
#define HEXAPOD_H

/********* CONSTANTS ****************************************************/
/* Define an id for each board active. Each board use the same code, except it's config*/
enum HexapodSide {
    esp32Target = 1,
    userController = 2, 
    botboarduino = 3
    };

/* Define which board is used (1 = Controller ; 2 = Ant)*/
enum HexapodSide runningSide = userController;

#endif

