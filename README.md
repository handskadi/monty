# 0x19. C - Stacks, Queues - LIFO, FIFO

This project was completed by Mohamed Kadi, a software engineer at ALX Cohort 13 in 2023.

## The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes, similar to Python. It utilizes a unique stack with specific instructions to manipulate it. The objective of this project is to create an interpreter for Monty ByteCodes files.

## Monty byte code files
Files containing Monty byte codes typically have the .m extension, although it is not a requirement according to the language's specification. Each line in the file contains only one instruction. There can be any number of spaces before or after the opcode and its argument.

### Files:
- `_dumper.c`
- `_error_handlers.c`
- `_instructions.c`
- `_opcode_even_more_op.c`
- `_opcode_more_op.c`
- `_opcode_op.c`
- `check_if_number.c`
- `main.c`
- `monty`
- `monty.h`
- `tokenize.c`
- `utils.c`

Please refer to the individual files in the repository for more details and code implementation.

## Usage
To use the code in this repository, follow these steps:

1. Clone the repository:
```bash
git clone <repository_url>
```
2. Navigate to the project directory:
```bash
cd <project_directory>
```

3. Compile the code:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```
4. Run the interpreter with a Monty byte code file:
```bash
./monty <byte_code_file>
```
## Contributing
Contributions to this project are welcome. If you encounter any issues or would like to add new features or improvements, please feel free to submit a pull request. When contributing, please ensure that you follow the existing coding style and include relevant documentation and test cases.

## License
This project is licensed under the ALX License.

## Contact
If you have any questions or suggestions regarding this project, please feel free to contact Mohamed Kadi at handskadi@gmail.com.

