/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:51:02 by ftoledo-          #+#    #+#             */
/*   Updated: 2024/11/12 19:46:15 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_tab(char **tab, size_t wc)
{
	size_t	i;

	i = 0;
	while (i < wc)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static size_t	ft_word_count(char const *s, char c)
{
	int	ptn;
	int	wc;

	wc = 0;
	ptn = 0;
	if (!s)
		return (0);
	while (s[ptn])
	{
		while (s[ptn] == c)
			ptn++;
		if (s[ptn])
			wc++;
		while (s[ptn] != c && s[ptn])
			ptn++;
	}
	return (wc);
}

static void	ft_just_pass_the_word(const char *s, size_t *f_curs, char c)
{
	while (s[*f_curs] && s[*f_curs] != c)
		(*f_curs)++;
}

static void	ft_just_pass_the_char(const char *s, size_t *f_curs, char c)
{
	while (s[*f_curs] == c)
		(*f_curs)++;
}

char	**ft_split(char const *s, char c)
{
	size_t	f_curs;
	size_t	s_curs;
	size_t	wc;
	char	**tab;

	f_curs = 0;
	wc = 0;
	tab = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!s || !tab)
		return (ft_free_tab(tab, wc));
	while (s[f_curs])
	{
		ft_just_pass_the_char(s, &f_curs, c);
		s_curs = f_curs;
		ft_just_pass_the_word(s, &f_curs, c);
		if (f_curs > s_curs)
		{
			tab[wc] = ft_substr(s, s_curs, f_curs - s_curs);
			if (!tab[wc])
				return (ft_free_tab(tab, wc));
			wc++;
		}
	}
	tab[wc] = (char *) NULL;
	return (tab);
}
