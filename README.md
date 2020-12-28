# ft_printf
✅ Project score: 109/100 ✅  
The versatility of the printf function in C, the ease of its formatting and its support of diverse types in variable numbers, makes it a really good function to reprogram!  

```c
int		ft_printf(const char *format, ...)
```  
The function ft_printf, mimicking stdio's function printf, writes a string to the standard output. If it's parameter 'format' includes format specifiers (subsequences beginning with %), the additional arguments following format (variadic function) are formatted and inserted into the resulting string replacing their respective specifiers. It returns the number of output characters.  

### It handles the following types:  

| Type specifier | Type                     | Example       | Supported flags                |
| -------------- | ------------------------ | ------------- | ------------------------------ |
| d / i          | Signed decimal int       | –123          | -, +, space, 0, width, prec    |
| o              | Unsigned octal           | 05670         | -, +, space, #, 0, width, prec |
| u              | Unsigned decimal int     | 456           | -, +, space, 0, width, prec    |  
| x / X          | Unsigned hex lower/upper | 89abc / 89ABC | -, +, space, #, 0, width, prec |
| f              | Decimal floating point   | 123.456       | -, +, space, #, 0, width, prec | 
| c              | Char                     | c             | -, width, prec                 |
| s              | Char string              | abcd          | -, width, prec                 |
| p              | Pointer address          | bc080         | -, width, prec                 |
| b              | Binary                   | 10101         | -, +, space, #, 0, width, prec |  

### The flags carry out the following actions:  
| Flag       | Function                                                                   |
|----------- | -------------------------------------------------------------------------- |
| -          | Left justifies output                                                      |
| +          | Precedes positive ints with +                                              |
| space      | Inserts a blank space if no sign is to be written                          |
| #          | Precedes number with 0, 0x, or 0X                                          |
| # (type f) | Includes a decimal point even if the fractional part of the int is zero    |
| 0          | Left-pads ints using zeroes                                                |
| width      | (given as a number) The minimum number of chars to allocate for width      |
| prec       | (given as a number) The minimum number of chars to allocate for precision  |

You can read more about it [here](https://www.dummies.com/programming/cpp/using-printf-for-output/) - this link was my best friend during this project!


Through this project, I learned the importance of well-structured, readable and extendable code. The nature of this function makes it vital to have a proper plan before you start coding - no brute-forcing your way through this one!
