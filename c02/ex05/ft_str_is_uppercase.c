/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imugica- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:30:04 by imugica-          #+#    #+#             */
/*   Updated: 2024/10/23 10:30:27 by imugica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
	if (!*str)
		return (1);
	while(*str)
	{
		if (!((*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
