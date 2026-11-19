@echo off
REM Usage: compile_one.bat Day_01\Q001.c
gcc %1 -o program.exe -lm
if errorlevel 1 exit /b 1
program.exe
