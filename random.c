#include "random.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char randchar(){
    int charNum = rand() % 26;
    return ('a' + charNum);
}

