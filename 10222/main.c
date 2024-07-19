#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char kb[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    char ch;
    while(scanf("%c", &ch)!=EOF)
    {
        if(ch==32 || ch==10)
            printf("%c", ch);
        else
        {
            ch = tolower(ch);
            for(int j = 0; j<sizeof(kb); j++)
            {
                if(ch == kb[j])
                    printf("%c", kb[j-2]);
            }
        }
    }
    return 0;
}
