#include <unistd.h>

void ft_putchar(char a){
    write(1,&a,1);
}

void rush04(int columnas, int filas){
    int i = 1;
    int j = 1;
    
    while(i<=filas){
        while(j<=columnas){
            if (((i==1 && j==1)||(i==filas && j==columnas && filas>1 && columnas>1)))
                ft_putchar('A');
            else if ((i==filas && j==1)||(i==1 && j==columnas))
                ft_putchar('C');
            else if(i==1||i==filas||j==1||j==columnas){
                ft_putchar('B');   
            }else
             ft_putchar(' '); 
            j++;
        }
        j=1;
        ft_putchar(10); 
        i++;    
    }
}

int main()
{
    rush04(5,3);
    return (0);
}
