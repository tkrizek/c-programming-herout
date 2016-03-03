	.file	"05.c"
	.section	.rodata
.LC0:
	.string	"%f%f"
.LC2:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	-12(%rbp), %rdx
	leaq	-8(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movss	-8(%rbp), %xmm1
	movss	.LC1(%rip), %xmm0
	addss	%xmm1, %xmm0
	cvttss2si	%xmm0, %eax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	cltd
	shrl	$31, %edx
	addl	%edx, %eax
	andl	$1, %eax
	subl	%edx, %eax
	cmpl	$1, %eax
	jne	.L3
	addl	$1, -4(%rbp)
	jmp	.L3
.L4:
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	addl	$2, -4(%rbp)
.L3:
	pxor	%xmm0, %xmm0
	cvtsi2ss	-4(%rbp), %xmm0
	movss	-12(%rbp), %xmm1
	ucomiss	%xmm0, %xmm1
	ja	.L4
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC1:
	.long	1065353216
	.ident	"GCC: (GNU) 5.3.1 20151207 (Red Hat 5.3.1-2)"
	.section	.note.GNU-stack,"",@progbits
