#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    char char1, char2;
    int distance;

    // Read two lowercase characters
    scanf(" %c %c", &char1, &char2);

    // Calculate distance using ASCII values
    distance = char2 - char1;

    // Print the result
    printf("The distance between %c and %c is %d", char1, char2, distance);

    return 0;
}
