#include <stdlib.h>

int	is_delimiter(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	word_count(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if ((i == 0 || is_delimiter(str[i - 1])) && !is_delimiter(str[i]))
			count++;
		i++;
	}
	return (count);
}

int letter_count(char *str, int pos)
{
	int len;

	len = 0;
	while (is_delimiter(str[pos]))
			pos++;
	while (str[pos] != 0 && !is_delimiter(str[pos]))
	{
		pos++;
		len++;
	}
	return (len);
}

void    save_world(char * dest, char *src, int j)
{
    int i;
    
    i = 0;
    while (src[j + i] != 0 && !is_delimiter(src[j + i]))
    {
        dest[i] = src[j + i];
        i++;
    }
    dest[i] = 0;
}

char    **ft_split(char *str)
{
	int i;
    int j;
	int wcount;
	int lcount;
	char **res;

    wcount = 0;
	wcount = word_count(str);
    res = (char**)malloc(sizeof(char*) * (wcount + 1));
	if (res)
	{
		i = 0;
        j = 0;
        while (j < wcount)
        {
            lcount = 0;
            if (str[i] != 0 && !is_delimiter(str[i])
                   && (i == 0 || is_delimiter(str[i - 1])))
            {
                lcount = letter_count(str, i);
                res[j]= (char*)malloc(sizeof(char) * (lcount + 1));
                if (res[j])
                {
                    save_world(res[j], str, i);
                    j++;
                }
            }
            if (lcount > 0)
                i = i + lcount;
            else
                i++;
        }
		res[wcount] = NULL;
	}
	return (res);
}
