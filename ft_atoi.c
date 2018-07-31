/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 15:10:42 by rujoshi           #+#    #+#             */
/*   Updated: 2018/07/19 15:10:45 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_atoi(char *str){
    int res;
    int sign;
    int i;
    i = 0;
    res = 0;
    sign = 1;
    if (str[0]== '-'){
        sign = -1;
        i++;
    } 
    while (str[i] != '\0'){
        if ((str[i] >= '0' || str[i] > '9') && str[i] != '-')
            return 0;
        if ((str[i] >= '0' || str[i] <= '9') && str[i+1] == '-'){
            res = res * 10 + str[i] - '0';
            return (sign * res);
        }
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (sign * res);
}
