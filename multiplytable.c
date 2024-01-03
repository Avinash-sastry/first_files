#include <stdio.h>
void print_table(int range, int num)
{
    int mul;
 
    for (int i = 1; i <= range; i++) 
    {
        mul = num * i;
 
        // Printing the Multiplication Table.
        printf("%d * %d = %d", num, i, mul);
 
        // Proceeding to the next line.
        printf("\n");
    }
}
// Driver code
int main()
{
 
    int range = 10;
    int num = 5;

    print_table(range, num);
}
