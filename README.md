# ft_printf

### Implementation of the standard printf function in C
The project must be compiled using a makefile. The task is aimed at understanding the operation of the standard printing function in the C language.
Description of the project tasks in the ft_printf.pdf file

ft_printf gets a string called a format, which can contain a number of placeholders represented after the % character and the type of data conversion (string (str), character (char), int to decimal, int to hexadecimal, etc.) Syntax: %[flags][width][.precision][length]type

Summary of the various types:
| Format        | Data type                 | Type values                                                              |
| ------------- |:-------------------------:| ------------------------------------------------------------------------:|
| d, i          | int                       | int as a signed integer                                                  |
| o             | unsigned int              | in octal                                                                 |
| u             | unsigned int              | print decimal                                                            |
| x, X          | unsigned int              | as a hexadecimal number. x uses lower-case letters and X uses upper-case |
| c             | char                      | character                                                                |
| s             | char*                     | null-terminated string                                                   |
| p             | void*                     | (pointer to void) in an implementation-defined format                    |

There can be a number of parameters between "%" and the conversion type: width (number or *), length modifiers (h, hh, l, ll, L), precision (number or *), flags (#, 0, ' ', +, -).

The width of the field is the minimum length of the string obtained as a result of the conversion, and is specified as a number. By default, if the converted value has fewer characters than the width of the field, then it is padded with spaces on the left (or on the right, if the left conversion flag is specified). filling in additional characters on the left. A small width does not make the conversion result truncated - if the conversion result is larger than the width of the field, the field expands to accommodate the converted value.

Precision is a decimal number preceded by a dot. For diouxX types, precision is the minimum string length, padded to the left with 0 if the conversion result is shorter than precision. To convert f, the precision indicates the number of digits to which the number needs to be rounded. For s conversions, precision gives the maximum number of characters that should be printed from the argument.

| Character     | Description                                                                                                               |
| ------------- |:-------------------------------------------------------------------------------------------------------------------------:|
| - (minus)     | Left-align the output of this placeholder. (The default is to right-align the output.)                                    |
| + (plus)      | Prepends a plus for positive signed-numeric types. positive = +, negative = -.                                            |
|   (space)     | Prepends a space for positive signed-numeric types. positive =  , negative = -. This flag is ignored if the + flag exists.|
| 0 (zero)      | When the 'width' option is specified, prepends zeros for numeric types. (The default prepends spaces.)                    |
|               | For example, ft_printf("%4X",3) produces    3, while ft_printf("%04X",3) produces 0003.                                   |
| # (hash)      | For o, x, X types, the text 0, 0x, 0X, respectively, is prepended to non-zero numbers.                                    |

How to compile a project?

1. In the project folder, the command `make` for compilation

Get_next_line (42cursus) 2021-2022

Actual Status : finished.
Result : 119%
