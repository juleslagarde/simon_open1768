#include "constantes.h" // fichier contenant toutes les constantes du projet
#include <stdint.h>
#include "lpc17xx_i2c.h"


// mettez ici toutes les déclarations de variables globales

char chaine[30]; // buffer pour l'affichage sur le LCD
uint16_t touch_x, touch_y ;
e_mode mode;
int etaitAppuye;
int start;



