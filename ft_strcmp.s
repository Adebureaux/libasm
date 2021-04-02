; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcmp.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: adeburea <adeburea@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/03/31 19:05:19 by adeburea          #+#    #+#              ;
;    Updated: 2021/04/01 19:35:12 by adeburea         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

global			ft_strcmp		;

section			.text			;

ft_strcmp:
xor		rcx, rcx				;	i = 0;

loop:
cmp		[rsi + rcx], [rdi + rcx];	if (s2[i] != s1[i])
jz		return					;		return();
inc		rcx						;	i++;
jmp		loop					;	loop();

return:
sub			dl, dh				;
movzx		[rax], byte dl		;	ret = dest;
ret								;	return (ret);
