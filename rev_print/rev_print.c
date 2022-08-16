/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:10:16 by marvin            #+#    #+#             */
/*   Updated: 2022/08/14 22:10:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int read_line(char *str)
{
    int read;
    read = 0;
    while(str[read])
    read++;
    return (read);
}

char *ft_rev_print(char *str)
{
    int endline;
    endline = read_line(str);
    while(endline >= 0)
    {
        write(1, (str+endline), 1);
        endline--;
    }
    return(str);
}

int main(void)
{
    ft_rev_print("rainbow dash");
}