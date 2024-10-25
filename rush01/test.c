
#include <stdio.h>
#include <unistd.h>

void fill_puzz(char *str,char input[4][4])
{
    int i = 0;
    int j = 0;
    
    while (*str && i<4)
    {
        if (*str>='1' && *str<='4')
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
}


int main(int i, char **args)
{
    char inputs[4][4]={'0'};
    if (i !=2 )
    {
        write(1,"Error\n",6);
        return 0;
    }
    
    fill_puzz(&args[1][0],inputs);
    int x=0;
    int y=0;
    while(x<4)
    {
        while(y<4)
            write(1,&inputs[x][y++],1);
        y=0;
        x++;
    }
    
    return 0;
}
