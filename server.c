/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumset <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:13:00 by msumset           #+#    #+#             */
/*   Updated: 2022/10/26 15:13:01 by msumset          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_bit_editing(int x)
{
	static int	bit = 7;
	static int	set = 0;

	set += (x << bit);
	if (bit == 0)
	{
		ft_printf("%c", set);
		bit = 7;
		set = 0;
	}
	else
		bit--;
}

void	ft_signal_catch(int x)
{
	if (x == SIGUSR1)
		ft_bit_editing(1);
	else
		ft_bit_editing(0);
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf("pid: %u\n", pid);
	signal(SIGUSR1, ft_signal_catch);
	signal(SIGUSR2, ft_signal_catch);
	while (1)
		pause();
}
