/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rujoshi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 15:24:29 by rujoshi           #+#    #+#             */
/*   Updated: 2018/07/19 15:24:32 by rujoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void   ft_sort_integer_table(int *tab, int size){
   int i, p, temp;
    for( i = 0; i < 3; i++ )
        for( p = i+1; p < 4; p++ )
            if( pointer[i] > pointer[p] ) 
            {
                temp = pointer[i];          
                pointer[i] = pointer[p];   
                pointer[p] = temp;         
            }
 
}
