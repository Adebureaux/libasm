; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcmp.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: adeburea <adeburea@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/03/31 19:05:19 by adeburea          #+#    #+#              ;
;    Updated: 2021/04/03 04:34:56 by adeburea         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

global			ft_strcmp		;

section			.text			;

ft_strcmp:
xor		rcx, rcx				;	i = 0;

loop:
mov		al, [rdi + rcx]			;	c1 = s1[i];
mov		bl, [rsi + rcx]			;	c2 = s2[i]
cmp		al, 0					;	if (!c1)
je		return					;		return();
cmp		bl, 0					;	if (!c2)
je		return					;		return()
cmp		al, bl					;	if (s2[i] != s1[i])
jne		return					;		return();
inc		rcx						;	i++;
jmp		loop					;	loop();

return:
movzx		rax, al				;	ret = c1;
movzx		rbx, bl				;	tmp = c2;
sub			rax, rbx			;	ret -= tmp;
ret								;	return (ret);
