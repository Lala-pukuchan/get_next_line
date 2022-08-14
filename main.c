/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukobaya <rukobaya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 06:58:31 by rukobaya          #+#    #+#             */
/*   Updated: 2022/08/14 09:37:40 by rukobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
	int		fd1;
	int		fd2;
	int		fd3;
	int		fd4;
	int		fd5;
	int		fd6;
	
	char	*p1_1;
	char	*p1_2;
	char	*p1_3;
	char    *p2_1;
	char    *p2_2;
	char    *p3_1;
	char    *p4_1;
	char    *p4_2;
	char    *p5_1;
	char    *p6_1;
	char    *p6_2;
	char    *p6_3;
	char    *p6_4;
	char    *p6_5;
	char    *p6_6;

	/* test1 */
	fd1 = open("./testFiles/test1.txt", O_RDONLY);
	
	p1_1 = get_next_line(fd1);
	printf("p1_1 = %s\n", p1_1);
	p1_2 = get_next_line(fd1);
	printf("p1_2 = %s\n", p1_2);
	p1_3 = get_next_line(fd1);
	printf("p1_3 = %s\n", p1_3);

	free(p1_1);
	free(p1_2);
	free(p1_3);
	
	/* test2 */
	fd2 = open("./testFiles/test2.txt", O_RDONLY);

	p2_1 = get_next_line(fd2);
	printf("p2_1 = %s\n", p2_1);
	p2_2 = get_next_line(fd2);
	printf("p2_2 = %s\n", p2_2);
	
	free(p2_1);
	free(p2_2);

	/* test3 */
	fd3 = open("./testFiles/test3.txt", O_RDONLY);

	p3_1 = get_next_line(fd3);
	printf("p3_1 = %s\n", p3_1);
	
	free(p3_1);

	/* test4 */
	fd4 = open("./testFiles/test4.txt", O_RDONLY);

	p4_1 = get_next_line(fd4);
	printf("p4_1 = %s\n", p4_1);
	p4_2 = get_next_line(fd4);
	printf("p4_2 = %s\n", p4_2);
	
	free(p4_1);
	free(p4_2);

	/* test5 */
	fd5 = open("./testFiles/test5.txt", O_RDONLY);

	p5_1 = get_next_line(fd5);
	printf("p5_1 = %s\n", p5_1);
	
	free(p5_1);

	/* test6 */
	fd6 = open("./testFiles/test6.txt", O_RDONLY);
	
	p6_1 = get_next_line(fd6);
	printf("p6_1 = %s\n", p6_1);
	p6_2 = get_next_line(fd6);
	printf("p6_2 = %s\n", p6_2);
	p6_3 = get_next_line(fd6);
	printf("p6_3 = %s\n", p6_3);
	p6_4 = get_next_line(fd6);
	printf("p6_4 = %s\n", p6_4);
	p6_5 = get_next_line(fd6);
	printf("p6_5 = %s\n", p6_5);
	p6_6 = get_next_line(fd6);
	printf("p6_6 = %s\n", p6_6);

	free(p6_1);
	free(p6_2);
	free(p6_3);
	free(p6_4);
	free(p6_5);
	free(p6_6);
	
	close(fd1);
	close(fd2);
	close(fd3);
	close(fd4);
	close(fd5);
	close(fd6);

	system("leaks a.out");

	return (0);
}