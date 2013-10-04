#include <stdio.h>

const char red[]="\033[1;31m";
const char off[]="\033[1;m";

int main(int argc, char *argv[])
{
    if (argc < 2){
        printf("program requires the year as an argument.");
        exit(0);
    }else{
        int year = atoi(argv[1]); /*atoi == ascii to int */

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            printf("%s%d%s is a leap year\n", red, year, off);
        else 
            printf("%s%d%s is NOT a leap year\n", red, year, off);
    }
    return 0;
}
