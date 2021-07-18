################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Calculator\ function.cpp \
../src/functions.cpp 

OBJS += \
./src/Calculator\ function.o \
./src/functions.o 

CPP_DEPS += \
./src/Calculator\ function.d \
./src/functions.d 


# Each subdirectory must supply rules for building sources it contributes
src/Calculator\ function.o: ../src/Calculator\ function.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Calculator function.d" -MT"src/Calculator\ function.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


