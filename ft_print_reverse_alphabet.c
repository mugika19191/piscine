#include <unistd.h>

void ft_print_reverse_alphabet(void);

void main (){
	ft_print_reverse_alphabet();
}
void ft_print_reverse_alphabet(void){
	char alpha='z';
		while(alpha>='a'){
			write(1,&alpha,1);
			alpha--;
		}
}