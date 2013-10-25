#include <stdio.h>
#include <stdlib.h>
/*this function takes (x, n) and displays the value of x
 *rotated to n positions right.*/
int rightrotate(int x, int y)
{
    return (x >> y);
}

int main(int argc, char *argv[])
{
    if(argc != 3){
	printf("\033[1;31mUse with 2 arguments.\033[1;m\n");
	printf("#1 == number to rotate.\n");
	printf("#2 == positions to rotate right.\n");
	exit(1);
    }

    int i = atoi(argv[1]);
    int n = atoi(argv[2]);
    int u = rightrotate(i, n);
    printf("%d\n", u);
    return 0;
}
