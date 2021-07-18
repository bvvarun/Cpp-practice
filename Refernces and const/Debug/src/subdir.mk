################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Refernces\ and\ const.cpp 

OBJS += \
./src/Refernces\ and\ const.o 

CPP_DEPS += \
./src/Refernces\ and\ const.d 


# Each subdirectory must supply rules for building sources it contributes
src/Refernces\ and\ const.o: ../src/Refernces\ and\ const.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Refernces and const.d" -MT"src/Refernces\ and\ const.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


