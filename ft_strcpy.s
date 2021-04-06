; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcpy.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: adeburea <adeburea@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/04/01 14:02:00 by adeburea          #+#    #+#              ;
;    Updated: 2021/04/06 02:17:45 by adeburea         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

global			ft_strcpy			;

section			.text				;

ft_strcpy:
	xor		rcx, rcx				;	i = 0;

loop:
	cmp		[rsi + rcx], byte 0		;	if (!src[i])
	jz		return					;		return();
	mov		dl, [rsi + rcx]			;	c = src[i];
	mov		[rdi + rcx], dl			;	dest[i] = c;
	inc		rcx						;	i++;
	jmp		loop					;	loop();

return:
	mov		[rdi + rcx], byte 0		;	dest[i] = '\0';
	mov		rax, rdi				;	ret = dest;
	ret								;	return (ret);
