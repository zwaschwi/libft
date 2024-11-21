/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:19:06 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/20 17:12:40 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v')
		return (1);
	else if (c == '\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}

int	ft_numeric(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(char *str)
{
	int		i;
	int		flag;

	i = 0;
	flag = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			flag = -1;
		str++;
	}
	if (!ft_numeric(*str))
		return (0);
	while (ft_numeric(*str))
	{
		i = (i * 10) + (*str - 48);
		str++;
	}
	return (flag * i);
}
