#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <string.h>
int main()
{
    char name[]= {"Hello everyone this is a typewritter effect made in C programming "};
    char *ptr = &name[0];
    int length = strlen(name);
    for (int i = 0; i < length; i++)
    {
        printf("%c", *ptr);
        ptr++;
        Sleep(100); 
    }
    
    return 0;
}
