#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = (totalSeconds % 3600) % 60;
    printf("Time in H:M:S format: %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}