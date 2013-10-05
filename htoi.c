#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

unsigned int htoi(char s[])
{
    unsigned int val = 0;
    int x = 0;

    if(s[x] == '0' && (s[x+1]=='x' || s[x+1]=='X')) x+=2;

    while(s[x] != '\0'){
        if(val > UINT_MAX) return 0;
        else if(s[x]>='0' && s[x]<='9'){
            val = val * 16 + s[x] - '0';
        }
        else if(s[x]>='A' && s[x] <='F'){
            val = val * 16 + s[x] - 'A' + 10;
        }
        else if(s[x]>='a' && s[x]<='f'){
            val = val * 16 + s[x] - 'a' + 10;
        }
        else return 0;
        x++;
    }
    return val;
}

int main(int argc, char *argv[])
{
    char *hexalpha;
    if((argc > 1) && (argc < 3))
        hexalpha=argv[1];
    else{
        printf("Must be ran as 'htoi <hexnumber>'\n");
        exit(0);
    }
    if(htoi(hexalpha)==0)
        printf("Hex string overflow or non-valid entry\n");
    else
        printf("%u\n", htoi(hexalpha));

    return 0;
}
