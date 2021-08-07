################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../teste0001.c \
../teste0002.c \
../teste0003.c 

O_SRCS += \
../saida.o 

OBJS += \
./teste0001.o \
./teste0002.o \
./teste0003.o 

C_DEPS += \
./teste0001.d \
./teste0002.d \
./teste0003.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


