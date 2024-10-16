#include <unistd.h>
void ft_putnbr(int nb);
void main(){
	int nb = 0;
	ft_putnbr(nb);
}

void ft_putnbr(int nb){
	if(nb>=10){
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if(nb<10){
	    char i = (char)nb +48;
		write(1, &i, 1);
	}
}

