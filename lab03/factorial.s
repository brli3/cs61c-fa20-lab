.globl factorial

.data
n: .word 8

.text
main:
    la t0, n
    lw a0, 0(t0)
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
    # YOUR CODE HERE
    li t1, 1
    li t2, 0
    loop:
	beq t2, a0, exit
	addi t2, t2, 1
	mul t1, t1, t2
    j loop
	exit:
	    mv a0, t1
	    jr ra
