/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:38:39 by rujoshi           #+#    #+#             */
/*   Updated: 2018/07/23 14:38:43 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <math.h>
#include <stdio.h>
int ft_sqrt(int nb){
    double value;
    double result;
    value = 2;
    result = sqrt(value);
    printf("The Square Root of %f is %f\n", value, result);
    return 0;
}
