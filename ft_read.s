; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_read.s                                          :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: adeburea <adeburea@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/04/05 01:51:39 by adeburea          #+#    #+#              ;
;    Updated: 2021/04/06 03:40:41 by adeburea         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

global			ft_read					;
extern			__errno_location		;

section			.text					;

ft_read:
	mov		rax, 0						;	/* syscall for read */
	cmp		rsi, 0						;	if (!buf)
	jz		ret_zero					;		ret_zero();
	syscall								;	rd = read(fd, buf, count);
	mov		[rsi + rax], byte 0			;	buf[rd] = '\0';
	cmp		rax, 0						;	if (rd == 0)
	jl		error						;		error();
	ret									;	return (ret);

ret_zero:								;
	ret									;	return (ret);

error:
	neg		rax							;	ret = -ret;
	mov		r15, rax					;	*tmp = ret;
	call	__errno_location			;	/* call errno */
	mov		[rax], r15					;	&ret = tmp;
	mov		rax, -1						;	ret = -1;
	ret									;	return (ret);
