
#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
     // Declare an array and its size
    int tab[] = {10, 2, 30, 14, 5};
    int size = sizeof(tab) / sizeof(tab[0]);

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Call the function to reverse the array
    ft_sort_int_tab(tab, size);

    // Print reversed array
    printf("sorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int minimum;
    
    i = 0;
    j = 0;
    minimum = *tab;
    while (j < size)
    {
        while (i < size)
        {
            if ((*(tab+i))<minimum)
            {
                minimum = *(tab+i);
                *(tab+i) = *(tab + j);
                *(tab + j)=minimum;
            }
            i++;
        }
        j++;
        i = j;
        minimum = *(tab+i);
    }
}
    
