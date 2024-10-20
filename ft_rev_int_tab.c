
#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
     // Declare an array and its size
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Call the function to reverse the array
    ft_rev_int_tab(tab, size);

    // Print reversed array
    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}

void ft_rev_int_tab(int *tab, int size)
{
    int reverse[size];
    int count;
    int *tabC;
    
    count = size;
    tabC = tab;
    
    while (count > 0)
    {
        reverse[--count] = *tab;
        tab++;
    }
    tab = tabC;
    while (count < size)
        *tab++=reverse[count++];
    tab = tabC;
}
