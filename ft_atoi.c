/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dblind <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 18:39:08 by dblind            #+#    #+#             */
/*   Updated: 2021/02/22 19:53:30 by dblind           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_res(char temp, int res)
{
	if (temp >= 48 && temp <= 57)
	{
		res = res * 10 + (temp - 48);
	}
	return (res);
}

int		ft_valid(char temp, int valid)
{
	if (temp == '-')
		valid *= -1;
	return (valid);
}

int		ft_atoi(char *str)
{
	int		valid;
	int		res;
	char	temp;

	res = 0;
	valid = 1;
	while (*str != 0)
	{
		temp = *str;
		if ((temp >= 9 && temp <= 13) || (temp == 32) || (temp == 43))
		{
			str++;
		}
		else if ((temp >= 'a' && temp <= 'z') || (temp >= 'A' && temp <= 'Z'))
		{
			break ;
		}
		else
		{
			valid = ft_valid(temp, valid);
			res = ft_res(temp, res);
			str++;
		}
	}
	return (res * valid);
}
