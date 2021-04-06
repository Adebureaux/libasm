; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strlen.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: adeburea <adeburea@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/03/31 14:07:24 by adeburea          #+#    #+#              ;
;    Updated: 2021/04/06 02:17:51 by adeburea         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

global			ft_strlen			;

section			.text				;

ft_strlen:
	xor		rcx, rcx				;	i = 0;

loop:
	cmp		[rdi + rcx], byte 0		;	if (!s[i])
	jz		return					;		return();
	inc		rcx						;	i++;
	jmp		loop					;	loop();

return:
	mov		rax, rcx				;	ret = i;
	ret								;	return (ret);
