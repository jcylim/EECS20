	.ORIG x4000
	AND R0, R0, #0
	AND R1, R1, #0
	LD R1, TEST

START	AND R2, R2, #0
	LEA R0, PROMPT
	TRAP x22
	TRAP x23
	ADD R0, R0, R1
	BRz CASE1
	BRp CASE2

CASE1	ADD R2, R2, #12
	LEA R0, S1
	TRAP x22
	ADD R2, R2, #-6
	LEA R0, S2
	TRAP x22
	ADD R2, R2, #-3
	LEA R0, S3
	TRAP x22
	ADD R2, R2, #6
	LEA R0, S4
	TRAP x22
	ADD R2, R2, #3
	LEA R0, S1
	TRAP x22
	ADD R2, R2, #-6
	LEA R0, S2
	TRAP x22	
	ADD R2, R2, #-3
	LEA R0, S3
	TRAP x22
	ADD R2, R2, #6
	LEA R0, S4
	TRAP x22
	ADD R2, R2, #3
	LEA R0, S1
	TRAP x22
	ADD R2, R2, #-6
	LEA R0, S2
	TRAP x22
	ADD R2, R2, #-3
	LEA R0, S3
	TRAP x22
	ADD R2, R2, #6
	LEA R0, S4
	TRAP x22
	ADD R2, R2, #3
	LEA R0, S1
	TRAP x22
	ADD R2, R2, #-3
	LEA R0, S4
	TRAP x22
	ADD R2, R2, #-6
	LEA R0, S3
	TRAP x22
	ADD R2, R2, #3
	LEA R0, S2
	TRAP x22
	ADD R2, R2, #6
	LEA R0, S1
	TRAP x22
	ADD R2, R2, #-3
	LEA R0, S4
	TRAP x22
	ADD R2, R2, #-6
	LEA R0, S3
	TRAP x22
	ADD R2, R2, #3
	LEA R0, S2
	TRAP x22
	ADD R2, R2, #6
	LEA R0, S1
	TRAP x22
	BRnzp START

CASE2	ADD R2, R2, #12
	LEA R0, S1
	TRAP x22
	ADD R2, R2, #-3
	LEA R0, S4
	TRAP x22
	ADD R2, R2, #-6
	LEA R0, S3
	TRAP x22
	ADD R2, R2, #3
	LEA R0, S2
	TRAP x22
	ADD R2, R2, #6
	LEA R0, S1
	TRAP x22
	BRnzp START
 			
PROMPT 	.STRINGZ "Please Input 1 or 2: "
S1 	.STRINGZ "1100\n"
S2	.STRINGZ "0110\n"
S3	.STRINGZ "0011\n"
S4	.STRINGZ "1001\n"
TEST 	.FILL #-49	  
	.END