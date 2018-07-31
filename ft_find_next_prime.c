/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 15:37:10 by rujoshi           #+#    #+#             */
/*   Updated: 2018/07/23 15:37:12 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_find_next_prime(int nb){
    int i;
    int k;
    i = nb;
    k = 2;
    if (nb == 0 || nb ==1){
        return 2;
    while (k <nb){
        if (nb % k == 0){
            nb++;
            k++;
        }
        else
            return (k);
    }
    }
    if (k==nb)
        return (nb);
    return (nb);
}
int main(void){
    printf("%d",ft_find_next_prime(8));
    return (0);
}
