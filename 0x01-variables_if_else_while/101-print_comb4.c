#include <stdio.h>

/**
 * main - Prints combination of three digit numbers without repeating 0 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int tens, ones, hundreds;

    for (tens = '0'; tens < '9'; tens++)
    {
        for (ones = tens + 1; ones <= '9'; ones++)
        {
            for (hundreds = ones + 1; hundreds <= '9'; hundreds++)
            {
                if ((ones != tens) != hundreds)
                {
                    putchar(tens);
                    putchar(ones);
                    putchar(hundreds);

                    if (tens == '7' && ones == '8')
                        continue;

                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');

    return (0);
}
