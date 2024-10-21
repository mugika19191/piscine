char *ft_strcpy(char *dest, char *src)
{
    char *destC=dest;
    while(*src)
    {
        *dest = *src;
        *dest++;
        *src++;
    }
    *dest='\0';
    return destC;
    
}
