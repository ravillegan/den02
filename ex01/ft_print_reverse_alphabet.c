/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:26:26 by asantiag          #+#    #+#             */
/*   Updated: 2019/02/27 18:35:15 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char i)
{
	write(1,&i,1);
}

void ft_print_reverse_alphabet(void)
{
	char i;
	i='z';
	while (i>='a'){
		ft_putchar(i);
		i=i-1;
	}
}

int main()
{
	    ft_print_reverse_alphabet();
		    return(0);
}

