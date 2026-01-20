#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>


int toSeconds(int hours, int minutes, int seconds) {
    return (hours * 3600) + (minutes * 60) + seconds;
}

int main() {
    int hours, minutes, seconds;
    int res;

    
    scanf("%d %d %d", &hours, &minutes, &seconds);

    
    res = toSeconds(hours, minutes, seconds);

   
    printf("Total seconds: %d", res);

    return 0;
}
