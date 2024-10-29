/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imugica- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:47:27 by imugica-          #+#    #+#             */
/*   Updated: 2024/10/23 10:47:45 by imugica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int isLower(char a)
{
    if (a >= 'a' && a <= 'z')
        return 1;
    return 0;
}
int isUpper(char a)
{
    if (a >= 'A' && a <= 'Z')
        return 1;
    return 0;
}
int isNumber(char a)
{
    if (a >= '0' && a <= '9')
        return 1;
    return 0;
}

char *ft_strcapitalize(char *str)
{
    unsigned int i;
    i = 0;
    if (str[i] != '\0' && isLower(str[i]))
        str[i] -= 32; 
    i++;
    
    while (str[i])
    {
        if(isLower(str[i]))
        {
            if(!(isUpper(str[i - 1]) || isNumber(str[i - 1]) || isLower(str[i - 1])))
                str[i] -= 32;
        }
        else if(isUpper(str[i]))
        {
            if((isLower(str[i - 1]) || isNumber(str[i - 1])))
                str[i] += 32;
        }
        i++;
    }
    return (str);
}
