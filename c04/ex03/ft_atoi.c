/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imugica- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:18:30 by imugica-          #+#    #+#             */
/*   Updated: 2024/10/31 12:43:36 by imugica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	chack_continue(char a)
{
	if (a)
		if ((a == ' ' || a == '\t' || a == '\f' ||a == '\r' || a == '\n' || a == '\v'))
			return (1);
	return (0);
}
int	ft_atoi(char *str)
{
	int	num;
	int	i;
	int	np;

	np = 1;
	i = 0;
	num = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || str[i] == '\r' || str[i] == '\n' || str[i] == '\v'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			np *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (np * num);
}
