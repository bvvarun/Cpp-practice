################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Reversing\ array.cpp 

OBJS += \
./src/Reversing\ array.o 

CPP_DEPS += \
./src/Reversing\ array.d 


# Each subdirectory must supply rules for building sources it contributes
src/Reversing\ array.o: ../src/Reversing\ array.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Reversing array.d" -MT"src/Reversing\ array.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


