/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciusca <ciusca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:05:52 by ciusca            #+#    #+#             */
/*   Updated: 2024/02/17 19:03:55 by ciusca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	pf_toupper(int c, int change)
{
	if (c == 0)
		return (0);
	if (c <= 'z' && c >= 'a' && change == 1)
		c -= 32;
	return (c);
}
