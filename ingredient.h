#ifndef INGREDIENTS_H
#define INGREDIENTS_H

#include <stdio.h>

// Définitions génériques
void add_ingredient(const char *name, int grams) {
    printf("Ajout de %d g de %s.\n", grams, name);
}

#endif // INGREDIENTS_H
