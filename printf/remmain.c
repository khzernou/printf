/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remmain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khzernou <khzernou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:05:48 by khzernou          #+#    #+#             */
/*   Updated: 2025/12/17 17:04:57 by khzernou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int x;
	ft_printf("pointer: %p\n", &x);
	ft_printf("null: %p\n", NULL);
	printf("pointer: %p\n", &x);
	printf("null: %p\n", NULL);
	return (0);
}
