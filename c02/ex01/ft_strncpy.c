char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    char *destC=dest;
    while(*src && i<n)
    {
        *dest = *src;
        *dest++;
        *src++;
        i++;
    }
    if(i<n)
    {
        *dest='\0';
    }
    
    return destC;
}
