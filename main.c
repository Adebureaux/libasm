/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeburea <adeburea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 14:08:44 by adeburea          #+#    #+#             */
/*   Updated: 2021/04/05 16:10:24 by adeburea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		check_strlen(void)
{
	printf("============================================\n");
	printf("================ ft_strlen =================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("Lorem"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("Lorem"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("ipsum"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("ipsum"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("dolor sit amet, consectetur"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("dolor sit amet, consectetur"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("."));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("."));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen(""));
	printf("\033[36mresultat : libc\033[00m\n");
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
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str1, str2));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str1, str2));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str3, str4));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str3, str4));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str5, str6));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str5, str6));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str6, str7));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str6, str7));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str7, str6));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str7, str6));
}

void		check_strcmp(void)
{
	char	str1[] = "A";
	char	str2[] = "Lorem ipsum dolor";
	printf("============================================\n");
	printf("================ ft_strcmp =================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp("Hello", "Hello"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%d]\n\n", strcmp("Hello", "Hello"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp("abcd", "abcde"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%d]\n\n", strcmp("abcd", "abcde"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp(str2, str1));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%d]\n\n", strcmp(str2, str1));
}

void		check_write(void)
{
	printf("============================================\n");
	printf("================ ft_write ==================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(1, "Hello World !", 13));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(1, "Hello World !", 13));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(1, "Test", 1));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(1, "Test", 1));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : [%zd]\n", ft_write(-7, "Lorem ipsum dolor sit amet.", 500));
	perror("Error");
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%zd]\n", write(-7, "Lorem ipsum dolor sit amet.", 500));
	perror("Error");
	printf("\n\033[36mresultat : libasm\033[00m\n");
	printf("return : [%zd]\n", ft_write(1, "", -1));
	perror("Error");
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%zd]\n", write(1, "", -1));
	perror("Error");
}

// void		check_read(void)
// {
// 	ssize_t		ret_read;
// 	int			fd;
// 	char		buf[5000];
//
// 	fd = open("ft_write.s", O_RDONLY);
// 	printf("============================================\n");
// 	printf("================= Ft_read ==================\n");
// 	printf("============================================\n\n");
// 	printf("\033[36mresultat : libasm\033[00m\n");
// 	ret_read = ft_read(0, buf, 42);
// 	buf[ret_read] = '\0';
// 	printf("|%s|\nreturn : [%zd]\n", buf, ret_read);
// 	printf("\033[36mresultat : libc\033[00m\n");
// 	ret_read = read(0, buf, 42);
// 	buf[ret_read] = '\0';
// 	printf("|%s|\nreturn : [%zd]\n\n", buf, ret_read);
// 	printf("\033[36mresultat : libasm\033[00m\n");
// 	ret_read = 0;
// 	ret_read = ft_read(-7, buf, 2000);
// 	buf[ret_read] = '\0';
// 	printf("|%s|\nreturn : [%zd]\n", buf, ret_read);
// 	close(fd);
// 	fd = open("ft_write.s", O_RDONLY);
// 	printf("\033[36mresultat : libc\033[00m\n");
// 	ret_read = 0;
// 	ret_read = read(-7, buf, 2000);
// 	buf[ret_read] = '\0';
// 	printf("|%s|\nreturn : [%zd]\n\n", buf, ret_read);
// 	close(fd);
// }

// void		check_strdup(void)
// {
// 	char	dup[] = "New Malloc";
// 	char	dup1[] = "little";
// 	char	dup2[] = "Very big malloc, libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test !";
// 	printf("============================================\n");
// 	printf("================ Ft_strdup =================\n");
// 	printf("============================================\n\n");
// 	printf("\033[36mresultat : libasm\033[00m\n");
// 	printf("return : |%s|\n", ft_strdup(dup));
// 	printf("\033[36mresultat : libc\033[00m\n");
// 	printf("return : |%s|\n\n", strdup(dup));
// 	printf("\033[36mresultat : libasm\033[00m\n");
// 	printf("return : |%s|\n", ft_strdup(dup1));
// 	printf("\033[36mresultat : libc\033[00m\n");
// 	printf("return : |%s|\n\n", strdup(dup1));
// 	printf("\033[36mresultat : libasm\033[00m\n");
// 	printf("return : |%s|\n", ft_strdup(dup2));
// 	printf("\033[36mresultat : libc\033[00m\n");
// 	printf("return : |%s|\n\n", strdup(dup2));
// }

int			main(void)
{
	check_strlen();
	check_strcpy();
	check_strcmp();
	check_write();
	//check_read();
	//check_strdup();
	return (0);
}
