
#include <stdio.h>
#include <unistd.h>

int rellenar_inputs(char *str,char input[4][4])
{
    int i = 0;
    int j = 0;
    
    j = 0;
    i = 0;
    while (*str && i < 4)
    {
        if (*str >= '1' && *str <= '4')
        {
            input[i][j]=*str;
            if(++j==4)
            {
                i++;
                j=0;
            }
        }
        str++;
    }
    if(i==4 && !(*str))
        return (1);
    else 
        return (0);
}

void rellenar_matriz(char matriz[4][4])
{
    int i = 0;
    int j = 0;
    
    j = 0;
    i = 0;
    while(i<4)
    {
        while(j<4)
           matriz[i][j++]='0';
        j=0;
        i++;
    }
}
void dibujar_matriz(char matriz[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1,&matriz[i][j],1);
			if (j < 3)
				write(1," ",1);
			j++;
		}
		write(1,"\n",1);
		i++;
	}
}
int	count_visible(char linea[4])
{
	int	i;
	int	max_height;
	int	visible;

	i = 1;
	mas_alto = 0;
	visibles = 1;
	while (i < 4)
	{
		if (line[i] > mas_alto)
		{
			visibles++;
			mas_alto = linea[i];
		}
		i++;
	}
	return (visibles);
}
int main(int i, char **args)
{
    char matriz[4][4];
    char inputs[4][4];
    int x;
    int y;
    
    y = 0;
    x = 0;
    if (i !=2 )
    {
        write(1, "Error\n", 6);
        return (0);
    }
    if (!rellenar_inputs(&args[1][0], inputs))
    {
        write(1, "Error\n", 6);
        return (0); 
    }
    rellenar_matriz(matriz);
    if (!resolver(matriz, inputs, 0, 0))
    {
        write(1, "Error\n", 6);
        return (1);
    }
    dibujar_matriz(matriz);
    return (0);
}
