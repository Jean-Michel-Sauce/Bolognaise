
---

#### `main.c`
```c
#include "recipe.h"
#include "sauces/mayo.h"
#include "sauces/ketchup.h"
#include "spice_library/basil.c"

int main() {
    printf("[Sauceware v1.0]\n");

    // Initialisation de la recette
    struct Recipe myRecipe;
    init_recipe(&myRecipe, "Sauce Secrète");

    // Ajout d'ingrédients
    add_ingredient(&myRecipe, MAYO, 50);
    add_ingredient(&myRecipe, KETCHUP, 30);

    // Ajout d'épices
    add_basil(5); // 5g de basilic

    // Mélange
    mix_ingredients(&myRecipe);

    printf("Votre %s est prête ! Bon appétit !\n", myRecipe.name);
    return 0;
}
