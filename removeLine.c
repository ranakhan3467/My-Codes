#include <stdio.h>
#include <math.h>
int main(void)
{
    FILE *p1,*p2;
    char c, c2 = ' ';

    p1 = fopen("removeLine.c","r");
    p2 = fopen("remove.txt", "w");

    //If file is not created then show this message
    if(!p1)printf("\nFile not found");

    /*if File is created then
     remove the spaces, empty line & comments*/

    else
    {
        while((c = fgetc(p1))!= EOF)
        {
            if((c=='\n') || (c==' ') ){
               continue;
            }
            else if((c=='/') && ((c2 = fgetc(p1))== '/')){
                while( ((c=fgetc(p1))!='\n'));
            }
            else if((c=='/') && (c2=='*')){
                c2 = c; c = fgetc(p1);
                while((c!='/') && (c2 != '*')) {c2 = c; c = fgetc(p1); }
            }
            else{
                fputc(c, p2);
            }
            c2 = c;
        }
    }
    fclose(p1);
    fclose(p2);

    p2 = fopen("remove.txt", "r");
    while((c = fgetc(p2))!= EOF)
    {
        printf("%c", c);
    }
    fclose(p2);
    return 0;
}
