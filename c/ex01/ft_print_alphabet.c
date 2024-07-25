/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianro <adrianro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:07:21 by adrianro          #+#    #+#             */
/*   Updated: 2024/07/25 12:20:25 by adrianro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	contador;

	contador = 'a' ;
	while (contador <= 'z' )
	{
		write(1, &contador , 1);
		contador++;
	}
}

int main(void){
	ft_print_alphabet();
	}
