#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int magicNumber = 1 + (rand()% 500);
srand(time(NULL));
printf("%d", magicNumber);