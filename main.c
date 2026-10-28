
#include <stdio.h>
#include <time.h>
#include <windows.h>

int main() {
    while (1) {
        time_t currentTime;
        struct tm *localTime;
        int hour12;
        char *period;

        time(&currentTime);
        localTime = localtime(&currentTime);

        if (localTime->tm_hour >= 12) {
            period = "PM";
        } else {
            period = "AM";
        }

        hour12 = localTime->tm_hour % 12;

        if (hour12 == 0) {
            hour12 = 12;
        }
        system("cls");

        printf(" DIGITAL CLOCK\n");
        printf("----------------\n");

        printf(" %02d:%02d:%02d %s\n",
               hour12,
               localTime->tm_min,
               localTime->tm_sec,
               period);

        printf("Date:%02d-%02d-%04d\n",
               localTime->tm_mday,
               localTime->tm_mon + 1,
               localTime->tm_year + 1900);

            printf("----------------\n\n");   
            printf("Press Ctrl + C to exit\n");

        Sleep(1000);
    }

    return 0;
}
