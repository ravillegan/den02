/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:47:03 by asantiag          #+#    #+#             */
/*   Updated: 2019/02/27 16:51:46 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
	int i;

	i=7;
	while (i <= 9)
	{
		write( 0, &i, 1 );
		i = i + 1;
	}
}

int main()
{
	ft_print_numbers();
	return(0);
}
