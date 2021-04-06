; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_write.s                                         :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: adeburea <adeburea@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/04/05 14:02:00 by adeburea          #+#    #+#              ;
;    Updated: 2021/04/06 02:17:06 by adeburea         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

global			ft_write			;
extern			__errno_location	;

section			.text				;

ft_write:
	mov		rax, 1					;	/* syscall for write */
	syscall							;	ret = write(fd, buf, count);
	cmp		rax, 0					;	if (ret == 0)
	jl		error					;		error();
	ret								;	return (ret);

error:
	neg		rax						;	ret = -ret;
	mov		r15, rax				;	*tmp = ret;
	call	__errno_location		;	/* call errno */
	mov		[rax], r15				;	&ret = tmp;
	mov		rax, -1					;	ret = -1;
	ret								;	return (ret);
