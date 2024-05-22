/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltressen <ltressen@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:13:19 by ltressen          #+#    #+#             */
/*   Updated: 2023/03/21 09:16:01 by ltressen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int x, int n)
{
	int	res;

	res = 1;
	while (n > 0)
	{
		res *= x;
		n--;
	}
	return (res);
}