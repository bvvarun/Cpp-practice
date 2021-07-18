################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Arrays\ and\ pointers.cpp 

OBJS += \
./src/Arrays\ and\ pointers.o 

CPP_DEPS += \
./src/Arrays\ and\ pointers.d 


# Each subdirectory must supply rules for building sources it contributes
src/Arrays\ and\ pointers.o: ../src/Arrays\ and\ pointers.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Arrays and pointers.d" -MT"src/Arrays\ and\ pointers.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


