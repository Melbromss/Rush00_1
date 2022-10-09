/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssingka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:23:37 by ssingka           #+#    #+#             */
/*   Updated: 2022/10/09 15:45:24 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_putchar.c"

void	ls3(char ln, int x, int y)
{
	ln = 10;
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
	}
	else if (x == 1 && y == 2)
	{
		ft_putchar('A');
		ft_putchar('\n');
		ft_putchar('C');
	}
	else if (x == 2 && y == 1)
	{
		ft_putchar('A');
		ft_putchar('A');
	}
	else
	{
		ft_putchar('A');
		ft_putchar('A');
		ft_putchar('\n');
		ft_putchar('C');
		ft_putchar('C');
	}
}

void	w_in_x(int x, char F, char L, char mid)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
		{
			ft_putchar(F);
		}
		else if (i == x - 1)
		{
			ft_putchar(L);
		}
		else
		{
			ft_putchar(mid);
		}
		i++;
	}
}

int	rush(int x, int y)
{
	int	j;

	if (x < 3 && y < 3)
	{
		ls3(10, x, y);
	}
	else
	{
		w_in_x(x, 'A', 'A', 'B');
		ft_putchar('\n');
		j = 0;
		while (j < y - 2)
		{
			w_in_x(x, 'B', 'B', ' ');
			ft_putchar('\n');
			j++;
		}
		if (y != 1)
		{
			w_in_x (x, 'C', 'C', 'B');
		}
	}
	return (0);
}
