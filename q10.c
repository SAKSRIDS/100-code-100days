#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    
    scanf("%d", &totalSeconds);

    
    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
