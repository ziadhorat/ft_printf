/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:50:27 by zmahomed          #+#    #+#             */
/*   Updated: 2019/07/10 11:29:27 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int ch)
{
	if (((ch > 64) && (ch < 91)) || ((ch > 96) && (ch < 123)))
		return (1);
	else
		return (0);
}
