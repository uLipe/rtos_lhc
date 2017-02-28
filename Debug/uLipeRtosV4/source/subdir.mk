################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../uLipeRtosV4/source/OsCpuMsg.c \
../uLipeRtosV4/source/OsFlags.c \
../uLipeRtosV4/source/OsKernel.c \
../uLipeRtosV4/source/OsMutex.c \
../uLipeRtosV4/source/OsQueue.c \
../uLipeRtosV4/source/OsSem.c \
../uLipeRtosV4/source/OsTask.c 

OBJS += \
./uLipeRtosV4/source/OsCpuMsg.o \
./uLipeRtosV4/source/OsFlags.o \
./uLipeRtosV4/source/OsKernel.o \
./uLipeRtosV4/source/OsMutex.o \
./uLipeRtosV4/source/OsQueue.o \
./uLipeRtosV4/source/OsSem.o \
./uLipeRtosV4/source/OsTask.o 

C_DEPS += \
./uLipeRtosV4/source/OsCpuMsg.d \
./uLipeRtosV4/source/OsFlags.d \
./uLipeRtosV4/source/OsKernel.d \
./uLipeRtosV4/source/OsMutex.d \
./uLipeRtosV4/source/OsQueue.d \
./uLipeRtosV4/source/OsSem.d \
./uLipeRtosV4/source/OsTask.d 


# Each subdirectory must supply rules for building sources it contributes
uLipeRtosV4/source/%.o: ../uLipeRtosV4/source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -flto  -g3 -D"CPU_MKL25Z128VFM4" -I../uLipeRtosV4/arch -I../uLipeRtosV4 -I../board -I../utilities -I../CMSIS -I../drivers -I../startup -I../source -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


