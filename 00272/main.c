#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    運用01的方式判斷是否在"裡面，如題目
    "To be or not to be" hi
    01111111111111111111000
    我們測到"且編號0則為`
    我們測到"且編號1則為'
*/

int main(int argc, char **argv)
{
    char x;
    int in = 0;
    while((x = getchar()) != EOF) //注意getchar用法 x=getchar() (V); getchar(x) (X)
    {
        if(x == '"') //char use '', and printf use "".
        {
            if(in)
            {
                putchar('\'');
                putchar('\'');
            }
            else
            {
                putchar('`');
                putchar('`');
            }
            in = !in;
        }
        else
            putchar(x);
    }
    return 0;
}
