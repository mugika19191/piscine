#include <unistd.h>
void ft_print_numbers(void);
void main (){
	ft_print_numbers();
}
void ft_print_numbers(){
	for (char i='0';i<='9';i++){
		write(1,&i,1);
	}
}