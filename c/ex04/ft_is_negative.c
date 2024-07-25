/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrianro <adrianro@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:27:37 by adrianro          #+#    #+#             */
/*   Updated: 2024/07/25 15:35:29 by adrianro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
    if (n < 0) 
	{
        write(1, "N", 1);
    }
	else 
	{
        write(1, "P", 1);
    }
}
int main(void)
{
ft_is_negative(0);
}
