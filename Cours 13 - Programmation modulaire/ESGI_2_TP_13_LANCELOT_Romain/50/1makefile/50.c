#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "module.h"

int main() {
    Triangle triangle = Triangle_creer(
        Point_creer(0, 0),
        Point_creer(4, 0),
        Point_creer(0, 3)
    );

    Triangle_afficher(&triangle);
    printf("\nPerimetre : %g\n", Triangle_perimetre(&triangle));
    
    exit(EXIT_SUCCESS);
}
