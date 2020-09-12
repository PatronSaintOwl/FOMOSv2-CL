cmake_minimum_required(VERSION 3.16)
project(FOMOSv2-CL C)

set(CMAKE_C_STANDARD 11)

add_executable(FOMOSv2-CL setup.c FOMOSCL/CL/main.c FOMOSCL/usrNam/usrNam.c FOMOSCL/CL/usrLogin.c FOMOSCL/startup/startFOMOSCL.c FOMOSCL/power/powerOff.c FOMOSCL/power/restart.c FOMOSCL/helpFiles/help.c FOMOSCL/iwi/iwi.c FOMOSCL/netConnect/netConnect.c FOMOSCL/Fopen/Fopen.c FOMOSCL/headerFiles/usrNam.h FOMOSCL/headerFiles/openFile.h)