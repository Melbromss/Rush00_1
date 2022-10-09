/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <chpuasir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:26:35 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/09 15:42:42 by ssingka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include"rush04.c"

int	strtoi(char str[])
{
	int	result;
	int	i;

	result = 0;
	i = 0 ;
	while (str[i] != '\0')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result);
}

int	main(int args, char *argv[])
{
	int	x;
	int	y;

	args = 10;
	x = strtoi(argv[1]);
	y = strtoi(argv[2]);
	rush(x, y);
	return (0);
}
