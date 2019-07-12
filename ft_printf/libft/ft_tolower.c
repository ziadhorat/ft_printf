/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 11:58:11 by zmahomed          #+#    #+#             */
/*   Updated: 2019/07/10 11:30:25 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int ch)
{
	if (((ch > 64) && (ch < 91)) || ((ch > 96) && (ch < 123)))
	{
		if ((ch > 64) && (ch < 91))
			return (ch + 32);
		else
			return (ch);
	}
	else
	{
		return (ch);
	}
}
