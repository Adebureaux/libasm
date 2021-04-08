; **************************************************************************** ;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strdup.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: adeburea <adeburea@student.42.fr>          +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2021/04/08 14:01:58 by adeburea          #+#    #+#              ;
;    Updated: 2021/04/08 15:00:00 by adeburea         ###   ########.fr        ;
;                                                                              ;
; **************************************************************************** ;

global			ft_strdup			;
extern			ft_strlen			;
extern			ft_strcpy			;
extern			malloc				;

section			.text				;

ft_strdup:
	call		ft_strlen			;	/* call ft_strlen */
	inc			rax					;	/* increment rax for the '\0' */
	push		rdi					;	/* push rdi to the stack */
	mov			rdi, rax			;	/* move the len in rdi */
	call		malloc				;	/* call malloc */
	pop			r15					;	/* restore rdi in r15 */
	mov			rdi, rax			;	/* put the string allocated in rdi */
	mov			rsi, r15			;	/* put the source in rsi */
	call		ft_strcpy			;	/* call ft_strcpy */
	ret								;	/* return rax */
