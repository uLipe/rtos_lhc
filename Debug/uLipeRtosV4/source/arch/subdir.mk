################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../uLipeRtosV4/source/arch/OsPort_M0.c \
../uLipeRtosV4/source/arch/OsPort_M7.c 

S_UPPER_SRCS += \
../uLipeRtosV4/source/arch/OsPort_M0_a.S \
../uLipeRtosV4/source/arch/OsPort_M7_a.S 

OBJS += \
./uLipeRtosV4/source/arch/OsPort_M0.o \
./uLipeRtosV4/source/arch/OsPort_M0_a.o \
./uLipeRtosV4/source/arch/OsPort_M7.o \
./uLipeRtosV4/source/arch/OsPort_M7_a.o 

C_DEPS += \
./uLipeRtosV4/source/arch/OsPort_M0.d \
./uLipeRtosV4/source/arch/OsPort_M7.d 

S_UPPER_DEPS += \
./uLipeRtosV4/source/arch/OsPort_M0_a.d \
./uLipeRtosV4/source/arch/OsPort_M7_a.d 


# Each subdirectory must supply rules for building sources it contributes
uLipeRtosV4/source/arch/%.o: ../uLipeRtosV4/source/arch/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -flto  -g3 -D"CPU_MKL25Z128VFM4" -I../uLipeRtosV4/arch -I../uLipeRtosV4 -I../board -I../utilities -I../CMSIS -I../drivers -I../startup -I../source -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

uLipeRtosV4/source/arch/%.o: ../uLipeRtosV4/source/arch/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU Assembler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -flto  -g3 -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


