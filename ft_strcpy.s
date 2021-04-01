; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcpy.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: adeburea <adeburea@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/04/01 14:02:00 by adeburea          #+#    #+#              ;
;    Updated: 2021/04/01 15:34:42 by adeburea         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

global			ft_strcpy

section			.text

ft_strcpy:
push	rcx					; save and clear out counter
xor		rcx, rcx

next_char:
cmp		[rsi + rcx], byte 0	; null byte yet?
jz		return				; yes, get out
mov		dl, [rsi + rcx]		; char is ok, count it
mov		[rdi + rcx], dl		; move to next char
inc		rcx
jmp		next_char			; process again

return:
mov		[rdi + rcx], byte 0
mov		rax, rdi		; rcx = the length (put in rax)
pop		rcx				; restore rcx
ret
