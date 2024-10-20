#include <unistd.h>

void ft_print_combn(int n);
void print_comb(int n,int *ptr);

int main()
{
    ft_print_combn(1);
    return 0;
}

void ft_print_combn(int n)
{
    int i;
    i=0;
    char a = n + 48;
    write(1,&a,1);
    write(1,"\n",1);
    int array[n];
    
    while (i<n)
    {
        a = i + 48;
        write(1,&a,1);
        array[i]=i;
        i++;
    }
    
    write(1,"\n",1);
    //la combinacion mas alta el n=4 6789, n=2 89, n=3 789...
    print_comb(n,array);
}

void print_comb(int n,int *ptr)
{
    char a;
    int i = 0;
    while (i<n)
    {
        a = *ptr++ + 48;
        write(1,&a,1);
        i++;
    }
    write(1,", ",2);
}
