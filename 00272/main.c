#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    �B��01���覡�P�_�O�_�b"�̭��A�p�D��
    "To be or not to be" hi
    01111111111111111111000
    �ڭ̴���"�B�s��0�h��`
    �ڭ̴���"�B�s��1�h��'
*/

int main(int argc, char **argv)
{
    char x;
    int in = 0;
    while((x = getchar()) != EOF) //�`�Ngetchar�Ϊk x=getchar() (V); getchar(x) (X)
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
