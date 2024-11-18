#ifndef RECIPE_H
#define RECIPE_H

#include "ingredients.h"
#include <stdio.h>
#include <string.h>

struct Recipe {
    char name[50];
    int total_ingredients;
};

void init_recipe(struct Recipe *r, const char *name) {
    strncpy(r->name, name, 50);
    r->total_ingredients = 0;
    printf("Nouvelle recette : %s\n", r->name);
}

void add_ingredient(struct Recipe *r, const char *ingredient, int grams) {
    printf("Ajout de %d g de %s à la recette %s.\n", grams, ingredient, r->name);
    r->total_ingredients++;
}

void mix_ingredients(const struct Recipe *r) {
    printf("Mélange des ingrédients pour la recette %s...\n", r->name);
}

#endif // RECIPE_H
