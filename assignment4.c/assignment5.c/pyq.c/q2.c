#include<stdio.h>
int main()
{
    char c;
    for(c='a';c<'g';++c)
    
    {
        switch(c)
        {
            case 'a': c+=2;
            case 'c': c+=1;
            case 'g': ++c;
            printf("%c \n", c--);
            default : ++c;

    }
        printf("***%c \n",c);
    }
    return 0;
}