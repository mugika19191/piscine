int ft_str_is_alpha(char *str)
{
    if (!*str)
        return (1);
    while(*str)
    {
        if (!((*str >= 'A' && *str <= 'Z') ||  (*str >= 'a' && *str <= 'z')))
            return (0);
        str++;
    }
    return (1);
}
