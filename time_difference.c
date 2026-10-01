#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct Time start, end, difference;

    printf("===== Time Difference Calculator =====\n");

    printf("\nEnter Start Time\n");
    printf("Hours: ");
    scanf("%d", &start.hours);
    printf("Minutes: ");
    scanf("%d", &start.minutes);
    printf("Seconds: ");
    scanf("%d", &start.seconds);

    printf("\nEnter End Time\n");
    printf("Hours: ");
    scanf("%d", &end.hours);
    printf("Minutes: ");
    scanf("%d", &end.minutes);
    printf("Seconds: ");
    scanf("%d", &end.seconds);

    int startSeconds = start.hours * 3600 +
                       start.minutes * 60 +
                       start.seconds;

    int endSeconds = end.hours * 3600 +
                     end.minutes * 60 +
                     end.seconds;

    int diff = endSeconds - startSeconds;

    if (diff < 0) {
        diff = -diff;
    }

    difference.hours = diff / 3600;
    diff = diff % 3600;

    difference.minutes = diff / 60;
    difference.seconds = diff % 60;

    printf("\n----- Time Difference -----\n");
    printf("%02d:%02d:%02d\n",
           difference.hours,
           difference.minutes,
           difference.seconds);

    return 0;
}
