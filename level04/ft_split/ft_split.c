/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 09:57:12 by exam              #+#    #+#             */
/*   Updated: 2019/10/22 10:08:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int		is_ws(char c)
{
	if (c == 32 || (c >= 9 && c <=13))
		return (1);
	return (0);
}

int		gel_len(char *s)
{
	int i;

	i = 0;
	while (s[i] && !is_ws(s[i]))
		i++;
	return (i);
}

int		is_start(char *s, int i)
{
    if (!is_ws(s[i]) && (i == 0 || is_ws(s[i - 1])))
        return (1);
    return (0);
}

int		get_word_count(char *s)
{
	int i;
	int count;

	i = -1;
	count = 0;
	while (s[++i])
		if (is_start(s, i))
			count++;
	return (count);
}

char    **ft_split(char *str)
{
	int		i;
    int     j;
    int     k;
    int     len;
	int		count;
	char	**res;

	count = get_word_count(str);
	res = (char**)malloc(sizeof(char*) * (count + 1));
	if (res)
	{
		i = 0;
        j = -1;
		while (str[i])
		{
			if (is_start(str, i))
            {
                len = gel_len(&str[i]);
                res[++j] = (char*)malloc(sizeof(char) * (len + 1));
                if (res[j])
                {
                    k = -1;
                    while (str[i] && !is_ws(str[i]))
                    {
                        res[j][++k] = str[i];
                        i++;
                    }
                    res[j][++k] = 0;
                }
            }
            else
                i++;
		}
        res[++j] = NULL;
	}
    return (res);
}
