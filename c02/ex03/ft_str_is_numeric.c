int ft_str_is_numeric(char *str)
{
    if (!*str)
        return (1);
    while(*str)
    {
        if (!((*str>='0')&&(*str<='9')))
            return (0);
        str++;
    }
    return (1);
}
