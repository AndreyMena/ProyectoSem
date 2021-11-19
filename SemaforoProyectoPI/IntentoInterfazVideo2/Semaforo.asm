
.data

.code

setPeatonal proc
	mov	rax,0		;El peatonal reinicia el estado
	ret
setPeatonal endp

setPeatonal2 proc
	mov	rax,0		;El peatonal reinicia el estado
	ret
setPeatonal2 endp


setEstado proc

	estado0:
	cmp rcx,4		;Si se encuentra el estado 4 
	jne estado1
	mov rcx,0		;Coloca estado 0, sino avanza
	jmp endASM
	estado1:
	cmp rcx,0		;Si se encuentra el estado 0
	jne estado2
	mov rcx,1		;Coloca estado 1, sino avanza
	jmp endASM
	estado2:
	cmp rcx,1		;Si se encuentra el estado 1
	jne estado3
	mov rcx,2		;Coloca estado 2, sino avanza
	jmp endASM
	estado3:
	cmp rcx,2		;Si se encuentra el estado 2
	jne estado4
	mov rcx,3		;Coloca estado 3, sino avanza
	jmp endASM
	estado4:
	mov rcx,4		;Si llega aqui es porque tenia estado 3 entonces coloca estado 4
	jmp endASM
	endASM:

	mov rax,rcx		;Mueve a rax
	ret


setEstado endp



end