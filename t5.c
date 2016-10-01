#include <stdio.h>
#include <stdlib.h>
#define SECONDS_IN_HOUR 3600
#define SECONDS_IN_MINUTE 60

int main(int argc, char** argv)
{
    int seconds, hours, minutes;
    printf("Seconds: ");
    scanf("%d", &seconds);
    hours = seconds/SECONDS_IN_HOUR;
    seconds -= SECONDS_IN_HOUR * hours;
    minutes = seconds/SECONDS_IN_MINUTE;
    printf("%d hours, %d minute(s)\n", hours, minutes);
    return 0;
}
