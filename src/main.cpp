/**
 *  Fichier : main.cpp
 *  Auteur : Bondallaz Corentin
 *  Date : 26.07.24
 * 
 **/
#include <Arduino.h>
#include <fstream>
#include <iostream>
#include <string>
#include "hexapod.h"

void setup() {
    std::ifstream fichier("env.cfg"); // Remplacez "mon_fichier.txt" par le nom de votre fichier
    std::string ligne;
    printf("text ok");

    if (fichier.is_open()) {
        while (std::getline(fichier, ligne)) {
            if (ligne.find("runningSide") != std::string::npos) 
                std::cout << "Le texte contient la sous-chaîne \"" << std::endl;
        }
        fichier.close();
    } else {
        std::cerr << "Impossible d'ouvrir le fichier." << std::endl;
    }
    if (runningSide == esp32Target){
        printf("Selected side : User esp32 target on board");
        //espOnBoardInit();
    }
    if (runningSide == userController){
        printf("Selected side : User Controller");
        //botBoarduinoInit();
    }
    if (runningSide == botboarduino){
        printf("Selected side : Botboarduino");
        //botBoarduinoInit()
    }
}

void loop() {
  printf("FIRST PRINT");
  printf("text ok");
  delay(1);
  // put your main code here, to run repeatedly:
}
