//CSE4130
//Fall-2022, Year: 4, Semester: 1,
//Name: Md. Shihabul Islam Shovo
//ID: 190204075
//Section: B1
//online-1, Set-02
#include <stdio.h>
int main(void)
{
    FILE *p1,*p2;
    char c, c2;
    char s[20];
    int i=0;

    p1 = fopen("190204075_B_Online-1.c","r");
    p2 = fopen("output.txt", "w");

    //If file is not created then show this message
    if(!p1)printf("\nFile not found");
    else{
        while((c = fgetc(p1))!= EOF)
        {
            if(c=='\n' || c==' ') i=0;
            if(c != ' ' || c!='\n')
            {
                s[i] = c;
                printf(" S value %c i = %d\n", c, i);
            }
            else{
                if(s[0] == 'm' && s[1] == 'a' && s[2] == 'i' && s[3] == 'n')
                while((c = fgetc(p1))!= ')')
                {
                    if(c!='('){
                        fputc(c, p2);
                        printf("%c", c);
                    }
                }
            }
            i++;
        }
    }
    fclose(p1);
    fclose(p2);
    return 0;
}
