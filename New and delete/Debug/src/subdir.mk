################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/New\ and\ delete.cpp 

OBJS += \
./src/New\ and\ delete.o 

CPP_DEPS += \
./src/New\ and\ delete.d 


# Each subdirectory must supply rules for building sources it contributes
src/New\ and\ delete.o: ../src/New\ and\ delete.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/New and delete.d" -MT"src/New\ and\ delete.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


