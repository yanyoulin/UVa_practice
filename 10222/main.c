#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    因為不會出現左移2沒有鍵可以按的情況
    所以寫一個矩陣包含所有的按鍵就好
*/

int main(int argc, char **argv)
{
    char kb[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"; //注意"\"需要兩個"\\"才能印出東西
    char ch;
    while(scanf("%c", &ch)!=EOF)
    {
        if(ch==32 || ch==10) //32是空白鍵(space)，10是換行
            printf("%c", ch);
        else
        {
            ch = tolower(ch); //判斷是小寫，輸出也是小寫
            for(int j = 0; j<sizeof(kb); j++)
            {
                if(ch == kb[j])
                    printf("%c", kb[j-2]); //左移2
            }
        }
    }
    return 0;
}
