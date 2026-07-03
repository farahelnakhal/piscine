/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: fqussay <fqussay@stuydent.42abudhabi.ae>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/01 10:18:34 by fqussay          #+#    #+#              */
/*   Updated: 2026/07/01 13:46:03 by fqussay         ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	j;

	j = 0;
	while (charset[j] != '\0')
	{
		if (charset[j] == c)
			return (1);
		j++;
	}
	return (0);
}

int	skip_sep(int i, char *str, char *charset)
{
	while (str[i] != '\0' && is_sep(str[i], charset))
		i++;
	return (i);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	in_word;
	int	num_words;

	i = 0;
	in_word = 0;
	num_words = 0;
	while (str[i] != '\0')
	{
		if (is_sep(str[i], charset))
			in_word = 0;
		else
		{
			if (in_word == 0)
				num_words++;
			in_word = 1;
		}
		i++;
	}
	return (num_words);
}

char	*store_word(int start, int end, char *str)
{
	char	*word;
	int		i;
	int		j;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = start;
	j = 0;
	while (i < end)
	{
		word[j] = str[i];
		i++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		num_words;
	int		start;
	int		end;
	int		k;

	num_words = count_words(str, charset);
	arr = malloc((num_words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	start = 0;
	k = 0;
	while (k < num_words)
	{
		start = skip_sep(start, str, charset);
		end = start;
		while (str[end] != '\0' && !is_sep(str[end], charset))
			end++;
		arr[k] = store_word(start, end, str);
		start = end;
		k++;
	}
	arr[k] = NULL;
	return (arr);
}
