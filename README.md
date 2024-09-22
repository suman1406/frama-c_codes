# Frama-C Codes

This repository contains code examples and exercises for learning and practicing Frama-C, a framework for the static analysis of C programs. The exercises focus on fundamental programming concepts like control flow (if/else statements, loops) and C programming constructs, with the goal of verifying program correctness using Frama-C.

## Repository Structure

- **If/Else**: Contains examples and exercises on conditional statements (`if`, `else if`, `else`).
- **Lab**: A collection of lab-based questions designed to strengthen understanding of C programming and Frama-C verification techniques.
- **Loop**: Focuses on loops, including exercises like summing elements in an array and other looping constructs in C.

## Prerequisites

To run the code and verify it using Frama-C, you need to have the following installed:

- **Frama-C**: The main tool for analyzing C programs. Install it from [here](https://frama-c.com/).
- **GCC (GNU Compiler Collection)**: For compiling and running C programs.

## Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/suman1406/frama-c_codes.git
   ```

2. Navigate to any folder (e.g., `If/Else`, `Lab`, `Loop`) and choose the C file you want to analyze.

3. Run Frama-C for static analysis:
   ```bash
   frama-c -wp your_file.c
   ```

4. Optionally, compile and run the C code using GCC:
   ```bash
   gcc your_file.c -o output_file
   ./output_file
   ```

## Learning Outcomes

- Develop a strong foundation in C programming concepts like conditionals and loops.
- Use Frama-C to statically analyze C programs and verify their correctness.
- Understand how to debug and improve program reliability through formal verification techniques.

## Contributors

- Suman Panigrahi
- Sravani Oruganti
