
#include <stdio.h>

#include<stdlib.h>
int main()
{
    int hr,min,s;
    int d=1;
    printf("set time\n");
    scanf("%d %d %d",&hr,&min,&s);
    if(hr>12|| min>60 ||s>60)
    {
        printf("error");
        exit(0);
    }
    while(1)
    {
        s++;
        while(s>59)
        {
            min++;
            s=0;
        }
        if(min>59)
        {
            hr++;
            min=0;
        }
        if(hr>12)
        {
            hr=1;
        }
        printf("\n the clock");
        printf("%02d::%02d::%02d",hr,min,s);
        sleep(d);
        system("cls");
    }
}




