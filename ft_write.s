; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_write.s                                         :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: adeburea <adeburea@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/04/05 14:02:00 by adeburea          #+#    #+#              ;
;    Updated: 2021/04/05 15:53:02 by adeburea         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

;	write -> int fd, char *buf, size_t count
;	asm_write -> rdi	rsi		rdx

global			ft_write		;
extern			__errno_location		;

section			.text			;

ft_write:
mov		rax, 1
syscall
cmp		rax, 0
jl		error
ret

error:
neg		rax
mov		r15, rax
call	__errno_location				;
mov		[rax], r15
mov		rax, -1
ret