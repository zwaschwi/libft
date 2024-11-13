/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:19:06 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/08 16:19:15 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	minus(char *str)
{
	int	i;

	i = 0; 
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i++;
		str++;
	}
	if (i % 2 == 0)
		return (0);
	return (1);
}

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

int	valid_input(char *str)
{
	while (ft_isspace(*str))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		str++;
	}
	if (!ft_numeric(*str))
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int		i;
	char	*start_of_chars;

	i = 0;
	if (!valid_input(str))
		return (0);
	while (ft_isspace(*str))
		str++;
	start_of_chars = str;
	while (!ft_numeric(*str))
	{
		str++;
	}
	while (ft_numeric(*str))
	{
		i = (i * 10) + (*str - 48);
		str++;
	}
	if (minus(start_of_chars))
		i = i * (-1);
	return (i);
}
