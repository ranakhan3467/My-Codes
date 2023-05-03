#include <stdio.h>
#include <math.h>
int main(void)
{
    FILE *p1,*p2;
    char c, c2 = ' ';

    p1 = fopen("readHeader.c","r");
    p2 = fopen("header.txt", "w");

    if(!p1)printf("\nFile not found");
    else
    {
        while((c = fgetc(p1))!= EOF)
        {
            if((c =='#') && ((c2==' ') || (c2=='\n')))
            {
                //printf("if cond.");
                while(1) {
                    if((c = fgetc(p1)) == '<'){
                        break;
                    }
                }
                while((c = fgetc(p1)) != '>'){
                    //printf("whi.");
                    //printf("%c", c);
                    fputc(c, p2);
                }
                fputc('\n', p2);
            }
            c2 = c;
        }
    }
    fclose(p1);
    fclose(p2);

    p2 = fopen("header.txt", "r");
    while((c = fgetc(p2))!= EOF){
        printf("%c", c);
    }
    return 0;
}
