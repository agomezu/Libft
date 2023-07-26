/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-u <agomez-u@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 19:59:28 by agomez-u          #+#    #+#             */
/*   Updated: 2023/03/20 21:09:58 by agomez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	ft_putnbr_fd(int n, int fd)
{
	if (!fd)
		return ;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		else if (n <= 9)
		{
			ft_putchar_fd(n + '0', fd);
			return ;
		}
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

// TEST
/* int	main(void)
{
	int	n = 42;
	int	fd = 1;

	ft_putnbr_fd(n, fd);
	return (0);
}
*/

// DESCRIPTION
/* Outputs the integer ’n’ to the given file
 * descriptor.
 *
 * 'ft_putnbr_fd' works with recursivity in this case.
 */
