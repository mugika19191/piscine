#include <unistd.h>
void ft_is_negative(int n);
void main(){
	int i=9;
	ft_is_negative(i);
}
void ft_is_negative(int n){
	char resp='z';
	if (n<0){
		resp='N';
	}
	else{
		resp='P';
	}
	write(1,&resp,1);
}