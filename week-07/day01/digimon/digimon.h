#ifndef DIGINOM_H_INCLUDED
#define DIGINOM_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    baby,
    training,
    rookie,
    champion,
    ultimate,
    mega
} Digivolution;

typedef struct
{
    char name[128];
    int age;
    int healt;
    char name_of_tamer[256];
    Digivolution digivol_level;
} Digimon;

int min_health_index (Digimon *digi_list, int size);
int digivol_level_counter (Digimon *digi_list, int size, Digivolution digivol_level);
int tamer_count (Digimon *digi_list, int size, char tamer[128]);
int same_tamer_avg (Digimon *digi_list, int size, char tamer[128]);

#endif // DIGINOM_H_INCLUDED
