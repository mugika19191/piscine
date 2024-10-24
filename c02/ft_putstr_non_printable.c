void		ft_putstr_non_printable(char *str)
{
    char hex[]="0123456789abcdef";
    int i =0;
    while(str[i])
    {
        if ((str[i]>=0 && str[i]<=31) ||str[i]==127)
        {
            write(1,"\\",1);
            write(1,&hex[str[i]/16],1);
            write(1,&hex[str[i]%16],1);
            i++;
        }
        else
            write(1,&str[i++],1);
    }
    return;
}
