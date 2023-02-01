/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumset <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:13:47 by msumset           #+#    #+#             */
/*   Updated: 2022/10/26 15:13:48 by msumset          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include "./ft_printf/ft_printf.h"

int		ft_atoi(char *str);
void	ft_bit_editing(int x);
void	ft_signal_catch(int x);
void	ft_bit_and_shift(int pid, char *str);

#endif
