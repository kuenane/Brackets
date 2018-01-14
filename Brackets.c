/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkuenane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 13:27:12 by lkuenane          #+#    #+#             */
/*   Updated: 2018/01/14 13:47:13 by lkuenane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char open_bracket(char c)
{
	return (c == '[' || c == '{' || c == '(');
}

char close_bracket(char c)
{
	return (c == ']' || c == '}' || c == ')');
}

char match(char c)
{
	switch (c)
	{
		case '(' : return (')');
		case '[' : return (']');
		case '{' : return ('}');
		default  : return (0);
	}
}

char	*find_bracket(char *str, char look)
{
	while (*str)
	{
		if (*str == look)
			return (str);
		else if (close_bracket(*str))
			return (NULL);
		else if (open_bracket(*str))
		{
			if (str = find_bracket(str + 1, match(*str)))=NULL)
				return (NULL);
			else
				++str;
		}
		else
			++str;
	}
	return ((*str = look)? str : NULL);
}

