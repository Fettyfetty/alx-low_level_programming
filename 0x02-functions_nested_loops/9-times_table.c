#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * void times_table(void)
 */

int main()
{
    int i;
    for (i = 0; i <= 9; i++) 
    {
        int result = i * 9;
        if (result >= 10) 
	{
            putchar(result / 10 + '0');
            putchar(result % 10 + '0');

	 }
	 else 
	 {
            putchar(result + '0');
        }
        putchar('\n');
    } 
{
    print_nine_times_table();
    return (0);
}





