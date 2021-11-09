File Modified			Changes

- Makefile				Added changes to include thread_nosync.c and thread_sync.c

- defs.h					Added lock struct declaration and function declarations for 
									threads/locks.
									
- proc.c				  Added implementations for all required lab functions (thread/lock).

- syscall.c				Added sys_ function declarations for each of the introduced 
									thread/lock functions.
									
- syscall.h 			Added SYS_ function definitions to the header file.

- threads_sync.c  Added function calls and declarations for 
									mutex implementation.
									
- user.h 					Added lock struct declaration and int 
									function 	declarations
									
- usys.S					Added SYSCALL function declarations for
									system call implemetations.													
