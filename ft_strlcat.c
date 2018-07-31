/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 15:17:19 by rujoshi           #+#    #+#             */
/*   Updated: 2018/07/27 15:17:21 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    unsigned	int i;
	unsigned	int j;
	unsigned	int k;
	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < size){
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	k = 0;
	while (src[k] != '\0')
		k++;
	return (k + size);
}
