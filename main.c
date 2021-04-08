/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeburea <adeburea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 14:08:44 by adeburea          #+#    #+#             */
/*   Updated: 2021/04/08 15:01:21 by adeburea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		check_strlen(void)
{
	printf("============================================\n");
	printf("================ ft_strlen =================\n");
	printf("============================================\n\n");
	printf("\033[36mresult : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("Lorem"));
	printf("\033[36mresult : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("Lorem"));
	printf("\033[36mresult : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("ipsum"));
	printf("\033[36mresult : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("ipsum"));
	printf("\033[36mresult : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("dolor sit amet, consectetur"));
	printf("\033[36mresult : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("dolor sit amet, consectetur"));
	printf("\033[36mresult : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("."));
	printf("\033[36mresult : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("."));
	printf("\033[36mresult : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen(""));
	printf("\033[36mresult : libc\033[00m\n");
	printf("|%zd|\n\n", strlen(""));
}

void		check_strcpy(void)
{
	char	str1[] = "Lorem";
	char	str2[] = "ipsum";
	char	str3[] = "dolor sit amet, consectetur";
	char	str4[] = "adipiscing elit.";
	char	str5[] = "Sed non";
	char	str6[] = "risus.";
	char	str7[] = "";

	printf("============================================\n");
	printf("================ ft_strcpy =================\n");
	printf("============================================\n\n");
	printf("\033[36mresult : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str1, str2));
	printf("\033[36mresult : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str1, str2));
	printf("\033[36mresult : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str3, str4));
	printf("\033[36mresult : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str3, str4));
	printf("\033[36mresult : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str5, str6));
	printf("\033[36mresult : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str5, str6));
	printf("\033[36mresult : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str6, str7));
	printf("\033[36mresult : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str6, str7));
	printf("\033[36mresult : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str7, str6));
	printf("\033[36mresult : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str7, str6));
}

void		check_strcmp(void)
{
	char	str1[] = "A";
	char	str2[] = "Lorem ipsum dolor";

	printf("============================================\n");
	printf("================ ft_strcmp =================\n");
	printf("============================================\n\n");
	printf("\033[36mresult : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp("Hello", "Hello"));
	printf("\033[36mresult : libc\033[00m\n");
	printf("return : [%d]\n\n", strcmp("Hello", "Hello"));
	printf("\033[36mresult : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp("abcd", "abcde"));
	printf("\033[36mresult : libc\033[00m\n");
	printf("return : [%d]\n\n", strcmp("abcd", "abcde"));
	printf("\033[36mresult : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp(str2, str1));
	printf("\033[36mresult : libc\033[00m\n");
	printf("return : [%d]\n\n", strcmp(str2, str1));
}

void		check_write(void)
{
	printf("============================================\n");
	printf("================ ft_write ==================\n");
	printf("============================================\n\n");
	printf("\033[36mresult : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(1, "Hello World !", 13));
	printf("\033[36mresult : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(1, "Hello World !", 13));
	printf("\033[36mresult : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(1, "Test", 1));
	printf("\033[36mresult : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(1, "Test", 1));
	printf("\033[36mresult : libasm\033[00m\n");
	perror("errno");
	printf("return : [%zd]\n", ft_write(-7, "Lorem ipsum dolor sit amet.", 500));
	printf("\033[36mresult : libc\033[00m\n");
	perror("errno");
	printf("return : [%zd]\n", write(-7, "Lorem ipsum dolor sit amet.", 500));
	printf("\n\033[36mresult : libasm\033[00m\n");
	perror("errno");
	printf("return : [%zd]\n", ft_write(1, "", -1));
	printf("\033[36mresult : libc\033[00m\n");
	perror("errno");
	printf("return : [%zd]\n\n", write(1, "", -1));
}

void		check_read(void)
{
	int			i;
	ssize_t		ret1;
	ssize_t		ret2;
	int			fd;
	char		buf1[5000];
	char		buf2[5000];

	i = 0;
	printf("============================================\n");
	printf("================= ft_read ==================\n");
	printf("============================================\n\n");
	fd = open("ft_read.s", O_RDONLY);
	ret1 = ft_read(fd, buf1, 5000);
	close(fd);
	fd = open("ft_read.s", O_RDONLY);
	ret2 = read(fd, buf2, 5000);
	printf("\033[36mresult : from fd\033[00m\n");
	if (strcmp(buf1, buf2) || ret1 != ret2)
		printf("failed : read behaviour is not the same !\n\n");
	else
		printf("success : reading from fd behave the same for read() and ft_read()\n\n");
	printf("\033[36mresult : from stdin\033[00m\n");
	bzero(buf1, 5000);
	bzero(buf2, 5000);
	ret1 = 1;
	write(1, "type some characters : ", 23);
	while (ret1 == 1 && i < 5000)
	{
		ret1 = ft_read(0, &buf1[i], 1);
		if (buf1[i] == '\n')
			break ;
		i++;
	}
	ret2 = 1;
	i = 0;
	write(1, "type the same characters : ", 27);
	while (ret2 == 1 && i < 5000)
	{
		ret2 = read(0, &buf2[i], 1);
		if (buf2[i] == '\n')
			break ;
		i++;
	}
	if (strcmp(buf1, buf2) || ret1 != ret2)
		printf("failed : reading output is different !\n\n");
	else
		printf("success : reading from stdin behave the same for read() and ft_read()\n\n");
	printf("\033[36mresult : libasm\033[00m\n");
	ret1 = ft_read(-1, buf1, 500);
	perror("errno");
	printf("return : [%zd]\n", ret1);
	printf("\033[36mresult : libc\033[00m\n");
	ret2 = read(-1, buf1, 500);
	perror("errno");
	printf("return : [%zd]\n\n", ret2);
	printf("\033[36mresult : libasm\033[00m\n");
	ret1 = ft_read(0, buf1, -1);
	perror("errno");
	printf("return : [%zd]\n", ret1);
	printf("\033[36mresult : libc\033[00m\n");
	ret2 = read(0, buf1, -1);
	perror("errno");
	printf("return : [%zd]\n\n", ret2);
	printf("\033[36mresult : libasm\033[00m\n");
	ret1 = ft_read(fd, NULL, 0);
	perror("errno");
	printf("return : [%zd]\n", ret1);
	printf("\033[36mresult : libc\033[00m\n");
	ret2 = read(fd, NULL, 0);
	perror("errno");
	printf("return : [%zd]\n\n", ret2);
	printf("\033[36mresult : libasm\033[00m\n");
	ret1 = ft_read(fd, NULL, 10);
	perror("errno");
	printf("return : [%zd]\n", ret1);
	printf("\033[36mresult : libc\033[00m\n");
	ret2 = read(fd, NULL, 10);
	perror("errno");
	printf("return : [%zd]\n", ret2);
	close(fd);
}

void		check_strdup(void)
{
	char	dup[] = "New Malloc";
	char	dup1[] = "";
	char	dup2[] = "Very big malloc, libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test !";
	printf("============================================\n");
	printf("================ Ft_strdup =================\n");
	printf("============================================\n\n");
	printf("\033[36mresult : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strdup(dup));
	printf("\033[36mresult : libc\033[00m\n");
	printf("return : |%s|\n\n", strdup(dup));
	printf("\033[36mresult : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strdup(dup1));
	printf("\033[36mresult : libc\033[00m\n");
	printf("return : |%s|\n\n", strdup(dup1));
	printf("\033[36mresult : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strdup(dup2));
	printf("\033[36mresult : libc\033[00m\n");
	printf("return : |%s|\n\n", strdup(dup2));
}

int			main(void)
{
	check_strlen();
	check_strcpy();
	check_strcmp();
	check_write();
	check_read();
	check_strdup();
	return (0);
}
