# UPES 100 Days of Code — C Solutions (Days 1–60)

This repository contains standalone C solutions for the first 60 days of the UPES challenge.

- Days 1–50: 2 questions per day (100 programs)
- Days 51–60: 1 question per day (10 programs)
- Total: 110 `.c` files

## Structure

Each day has its own folder (`Day_01` … `Day_60`). Each question is a separate file named `Q001.c` … `Q110.c`.

Every source file begins with the original question statement and the sample test cases captured from the challenge page, followed by a C implementation.

## Compile and run

Use GCC:

```bash
gcc Day_01/Q001.c -o program
./program
```

On Windows:

```bash
gcc Day_01/Q001.c -o program.exe
program.exe
```

For programs using the math library (for example, the quadratic-roots and interest exercises), compile with:

```bash
gcc Day_05/Q009.c -o program -lm
```

## Important notes about source samples

The source page includes some illustrative pattern outputs without stdin samples. It also has a few examples whose expected output does not appear to match the written series/question exactly. Those source samples are preserved verbatim in comments; the implementations follow the written question where it is unambiguous. Review the notes in the corresponding files before treating those cases as verified.

Some sample input descriptions use commas/brackets or prose notation; enter the actual numeric values separated by spaces when running the corresponding array/matrix programs.

## Source

Question statements and sample cases: https://maitysoumik.github.io/basic-coding-with-c/
