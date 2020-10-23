#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int n[5][4];
void findans( int *max, int *name);
int main()
{
    
    int loop1, loop2, name;
   
    int max = 0;
    for (loop1 = 0; loop1 < 5; loop1++)
    {
        for (loop2 = 0; loop2 < 4; loop2++)
        {
            scanf("%d", &n[loop1][loop2]);
        }
    }
    findans(&max, &name);
    printf("%d %d", name, max);
    return 0;
}
void findans(int *max,int *name)
{
    int loop1;
    for (loop1 = 0; loop1 < 5; loop1++)
    {
        if (*max < n[loop1][0] + n[loop1][1] + n[loop1][2] + n[loop1][3])
        {
            *max = n[loop1][0] + n[loop1][1] + n[loop1][2] + n[loop1][3];
            *name = loop1 + 1;
        }
    }
}


