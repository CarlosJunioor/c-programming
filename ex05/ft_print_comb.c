/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:31:14 by marvin            #+#    #+#             */
/*   Updated: 2022/08/08 23:31:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

    static first = '0';
    static second = '0';
    static third = '0';

void    ft_print(){
        write(1,&first,1);
        write(1,&second,1);
        write(1,&third,1);
        write(1,", ",2);
        
}

void    ft_print_comb(void){

   while (third <= '9' && second <= '9' && first <= '9'){
        ft_print();
        if (third == '9'){
            third = '0';
            second++;
        }else if  (third == '9' && second == '9'){
            third = '0';
            second = '0';
            first++;
        } else
        third++;
    }

}

int main(){
 int b;
    ft_print_comb();
}
