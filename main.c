#include <stdio.h>

void adialog1(void); /* ASM function */
void adialog2(void); /* ASM function */
void adialog3(void); /* ASM function */

int main()
{
        adialog1();
        printf("\nI'm a mid-level language\n");
        adialog2();
        printf("\nI'm kind of fast\n");
        adialog3();
        printf("\nMy development cycle is good\n");
        return(0);
}