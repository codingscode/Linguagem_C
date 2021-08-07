################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../teste0004_exercicios/quest03.c 

OBJS += \
./teste0004_exercicios/quest03.o 

C_DEPS += \
./teste0004_exercicios/quest03.d 


# Each subdirectory must supply rules for building sources it contributes
teste0004_exercicios/%.o: ../teste0004_exercicios/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


