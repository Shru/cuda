.PHONY: 01 01_obj 01_obj_exe_run 02 03 clean

GCC = gcc
NVCC = nvcc
CUDA_FLAGS = -arch=sm_86

01:
	@$(GCC) -o 01 01.c

# Just compile to object file
# More info on compilation process: https://www.geeksforgeeks.org/compiling-a-c-program-behind-the-scenes/

01_obj:
	@$(GCC) -c 01.c -o 01.o

# Compile and run the object file (ensure obj_01 is upto
# date by running 01_obj first if it hasn't been run yet.)

01_obj_exe_run: 01_obj
	@$(GCC) 01.o -o 01
	@./01

02:
	@$(GCC) 02.c -o 02

03:
	@$(NVCC) $(CUDA_FLAGS) 03.cu -o 03

clean:
	@rm -f 01 02 03 *.o
