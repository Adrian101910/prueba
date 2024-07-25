/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:32:46 by adrianro          #+#    #+#             */
/*   Updated: 2024/07/25 12:33:19 by adrianro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	contador;

	contador = 'z' ;
	while (contador >= 'a' )
	{
		write(1, &contador, 1);
		contador--;
	}
}

int main(void){
	ft_print_alphabet();
	}
