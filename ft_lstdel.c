/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakwins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:18:14 by msakwins          #+#    #+#             */
/*   Updated: 2016/11/11 18:32:59 by msakwins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *fst;

	fst = *alst;
	while (fst)
	{
		tmp = fst->next;
		ft_lstdelone(&fst, del);
		fst = tmp;
	}
	*alst = NULL;
}
