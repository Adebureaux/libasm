; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strlen.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: adeburea <adeburea@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/03/31 14:07:24 by adeburea          #+#    #+#              ;
;    Updated: 2021/04/01 15:34:25 by adeburea         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

global			ft_strlen

section			.text

ft_strlen:
push	rcx				; save and clear out counter
xor		rcx, rcx

next_char:
cmp		[rdi], byte 0	; null byte yet?
jz		return			; yes, get out
inc		rcx				; char is ok, count it
inc		rdi				; move to next char
jmp		next_char		; process again

return:
mov		rax, rcx		; rcx = the length (put in rax)
pop		rcx				; restore rcx
ret
