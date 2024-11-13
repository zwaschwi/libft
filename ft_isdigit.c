/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwaschwi <zwaschwi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:03:03 by zwaschwi          #+#    #+#             */
/*   Updated: 2024/11/04 18:55:16 by zwaschwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (2048);
	else
		return (0);
}

/*int main(void)
{
		printf("%d\n", isdigit('4'));
		printf("%d\n", ft_isdigit('4'));
		return (0);
}*/
