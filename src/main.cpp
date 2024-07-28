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
    Serial.begin(115200);

    /* Read env.cfg to identify on which board the code is running */
    std::ifstream file("env.cfg");
    std::string selectedSide;
    printf("\n\n[main] - Starting program");

    if (file.is_open()) {
        int idxFind = 0;
        while (std::getline(file, selectedSide)) {
            idxFind = selectedSide.find("selectedSide = ");
            if (idxFind != int(std::string::npos)) {
                printf("\nidx find : %d", idxFind);
            }
        }
        file.close();
    } else {
        printf("\n[main] - Impossible to find file env.cfg");
        exit(0);
    }
}

void loop() {
  printf("\nFIRST PRINT");
  delay(1000);
}
