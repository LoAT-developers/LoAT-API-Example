# CINT Safety / Unsafety Checker

This tool is designed to check the **safety** or **unsafety** of CINT Programmes. It leverages ANTLR4 for parsing and the LoAT API for model checking.

## Features

- Parse CINT files.
- Perform **Safety** and **Unsafety** analysis.
- Easy-to-use command-line interface (CLI).

## Prerequisites

- **C++17** or later
- **ANTLR4 Runtime**
- **LoAT API**
- A C++ compiler like `g++`, `clang++`, or MSVC.

Everything is included either in the devcontainer or will be automatically fetched via GitHub.

## Build Instructions

```bash
mkdir build
cd build
cmake -S .. -B .
make install -j$(nproc)
```

## Usage

```bash
./UnSafetyChecker [input_file] [--safety | --unsafety]
```

### Arguments

- `input_file`: Path to the `.cint` file to analyze.
- `--safety`: Run the safety checker (default mode).
- `--unsafety`: Run the unsafety checker.
- `--help`: Display the help page with usage instructions.
- `--version`: Display the version information.

### Examples

Check if the program is **safe**:

```bash
./UnSafetyChecker example.cint --safety
```

Check if the program is **unsafe**:

```bash
./UnSafetyChecker example.cint --unsafety
```

Display help:

```bash
./UnSafetyChecker --help
```

Display version:

```bash
./UnSafetyChecker --version
```

## Output

The program will output whether the CINT program is **SAFE**, **UNDECIDED/UNSAFE**, or **NON UNSAFE** based on the selected mode.

Example output for safe programm in safety mode:

```
======== Safety Check ========
Program is SAFE
```

Example output for safe programm in unsafety mode:

```
======== Unsafety Check ========
Program is NON UNSAFE
```

## License

See LICENSE File.