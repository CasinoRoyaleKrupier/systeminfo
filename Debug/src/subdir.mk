################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/functions_command.cpp \
../src/functions_file.cpp \
../src/functions_output.cpp \
../src/systeminfo.cpp 

OBJS += \
./src/functions_command.o \
./src/functions_file.o \
./src/functions_output.o \
./src/systeminfo.o 

CPP_DEPS += \
./src/functions_command.d \
./src/functions_file.d \
./src/functions_output.d \
./src/systeminfo.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


