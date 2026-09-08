# C language

Beginner-friendly C programming exercises and lab work. This repository documents
my progress while learning programming and keeps the examples small enough to
study one concept at a time.

## Repository layout

```text
C language/
├── First_Program.c       # A first standalone C program
├── C-Lab.pdf             # Reference lab material
├── Lab-1/                # Input, output, arithmetic, and simple programs
└── Lab-2/                # if/else and nested if/else examples
```

Each `.c` file contains its own `main` function, so compile and run one example
at a time.

## Prerequisites

Install a C compiler such as GCC or Clang. On macOS, Clang is usually included
with the Xcode Command Line Tools. On Linux, install GCC through your
distribution's package manager.

Check that a compiler is available:

```sh
cc --version
```

## Compile and run an example

From the repository root, compile an example to a temporary output path:

```sh
cc -std=c11 -Wall -Wextra -Wpedantic \
  "C language/Lab-1/Hello_World.c" \
  -o /tmp/hello-world
/tmp/hello-world
```

Replace the source path and output name to try another exercise. Programs that
ask for input describe the expected values in their prompts.

## Learning notes

The examples intentionally remain simple and focus on core C syntax. They are
practice exercises rather than a reusable application. As the collection grows,
new examples should be placed in the lab that matches the concept they teach
and should include a standard `int main(void)` entry point.

## Contributing

Small improvements are welcome: correct a mistake, clarify an explanation, or
add a focused example. Please keep examples beginner-friendly, compile new
programs with warnings enabled, and avoid committing generated executables or
other build artifacts.
