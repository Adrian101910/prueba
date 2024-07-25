/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianro <adrianro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:39:02 by adrianro          #+#    #+#             */
/*   Updated: 2024/07/25 13:14:23 by adrianro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	z;

	i = 0 ;
	z = i + '0' ;
	while (i < 10)
	{
		z = i + '0';
		write(1, &z, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
