#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
        
        int num = 10;
       

        char *s = (char *)malloc(num * sizeof(char));
        int *i = (int *)malloc(num * sizeof(int));

        char *s1 = (char *)calloc(num, sizeof(char));
        int *i1 = (int *)calloc(num, sizeof(int));

        s1 = realloc(s1, 5);
        char ch;

        int size=1;
        int index=0;
        char * str =(char*)malloc(size*sizeof(char));
        puts("enter char");
        while ((ch = getchar()) != '\n')
        {
              *(str+index)=ch;  
              size++;
              index++;
              str=(char*)realloc(str,size);
        }
        *(str+index)='\0';
        // str[index]='\0';
        puts(str);
        printf("%ld\n",strlen(str));
        

        return 0;
}