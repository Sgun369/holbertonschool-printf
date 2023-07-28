     <img src = "/holbertonschool-printf/blob/main/image/Screenshot_2023-07-28_21_19_50.png">

# custom printf-like Function (_printf)

## Description

This project implements a custom version of the 'printf' function, which is used
to format and print data to the standard output.
IT supports a limitrd set of conversion specifiers, such as '%c' (character), '%s' (string), '%d' (decimal), '%i' (integer), '%b' (binary), and '%%' (percent sign).
The function is designed to be more lightweight and easy to extend with new conversion specifiers if needed.

## Function Signature
 `int _printf(const char =format, ...)`

**Parameters**
`format`: A pointer to the formatting string that contains the text to be written to the output,along with any conversion specifiers.

**Return value**
The function returns an integer representing the total number of characters printed on success.
on failure,it returns (-1).

**Supported conversion specifiers**
*'%c':Prints a single character.
*'%s':Prints a string.
*'%d' and '%i': Prints signed integers.
*'%%': Prints a percent sign.

**Compilation**
to compile the program we use
# gcc -Wall -Werror -Wextra -pedantic *.c


