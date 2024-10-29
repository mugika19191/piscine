/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imugica- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:39:14 by imugica-          #+#    #+#             */
/*   Updated: 2024/10/28 12:47:59 by imugica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	while (src[count])
		count ++;
	if (count == 0)
		return (count);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (count);
}
