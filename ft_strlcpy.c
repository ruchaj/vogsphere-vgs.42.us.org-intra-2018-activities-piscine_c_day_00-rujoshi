/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 15:33:38 by rujoshi           #+#    #+#             */
/*   Updated: 2018/07/30 15:33:44 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
    unsigned int i;
    unsigned int j;
    i = 0;
    while (dest [i] != '\0')
        i ++;
    j = 0;
    while (src[j] != '\0' && j < size){
        dest[i + j] = src[j];
        j++;
    }
    dest[i+j] = '\0';
    i = 0;
    while(src[i])
        i++;
    return (i);
}
