/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:48:26 by rujoshi           #+#    #+#             */
/*   Updated: 2018/07/17 15:48:31 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void       ft_swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
