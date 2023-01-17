<h1 align='center'>
	📖 <b>Libft</b><br>
	<i style='font-size:120%;'>Personal home-made Library</i>
</h1>

<h2 style='font-size:160%; font-family:impact'>
	💡	What is it?
</h2><p>
	This is my custom library I made while studying at 1337 and that I will update over time as I study.<br>
	Feel free to tell me your thoughts and if there's anything to improve it :) <br><br>
</p>

<h2 style='font-size:160%; font-family:impact'>
	📚	What is in?
</h2><p>
	There's a bunch of differents functions, which has been used througout the whole 42 cursus.<br>
	There is currently:
	<ul>
		<li>Libft</li>
		<li>ft_printf</li>
		<li>GetNextLine</li>
		<li>Lots of extra functions</li>
        <li>Feel free to discover theme one by one</li>
	</ul><br>
</p>

<h2 style='font-size:140%; font-family:impact'>
	📜	Side Notes
</h2><p><em>
	<ul>
		<li>The goal of the library is to get to use the least amount of C standard library functions as possible!</li>
		<li>If you are a student of 42 aswell and came for solutions, be aware some functions has been sightly modified<br>
		for little extra handy features</li>
	</ul>
</em></p>

<h2> C standard library</h2>

<table>
    <thead>
        <tr>
            <th colspan=3><h4>C Library <a href="https://www.tutorialspoint.com/c_standard_library/ctype_h.htm">&lt;ctype.h&gt;</h4></a></th>
        </tr>
        <tr>
            <th>Libft</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=ft_isalnum.c>ft_isalnum</a></td>
            <td>Checks whether the passed character is alphanumeric.</td>
        </tr>
        <tr>
            <td><a href=ft_isalpha.c>ft_isalpha</a></td>
            <td>Checks whether the passed character is alphabetic.</td>
        </tr>
        <tr>
            <td><a href=ft_isascii.c>ft_isascii</a></td>
            <td>Checks whether the passed character is ASCII.</td>
        </tr>
        <tr>
            <td><a href=ft_isdigit.c>ft_isdigit</a></td>
            <td>Checks whether the passed character is decimal digit.</td>
        </tr>
        <tr>
            <td><a href=ft_isprint.c>ft_isprint</a></td>
            <td>Checks whether the passed character is printable.</td>
        </tr>
        <tr>
            <td><a href=ft_tolower.c>ft_tolower</a></td>
            <td>Converts uppercase letters to lowercase.</td>
        </tr>
        <tr>
            <td><a href=ft_toupper.c>ft_toupper</a></td>
            <td>Converts lowercase letters to uppercase.</td>
        </tr>
    </tbody>
    <thead>
        <tr>
            <th colspan=3><h4>C Library <a href="https://www.tutorialspoint.com/c_standard_library/string_h.htm">&lt;string.h&gt;</h4></a></th>
        </tr>
        <tr>
            <th>Libft</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=ft_bzero.c>ft_bzero</a></td>
            <td>Erases the data in the n bytes of the memory block. (Write zeroes)</td>
        </tr>
        <tr>
            <td><a href=ft_memchr.c>ft_memchr</a></td>
            <td>Searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string.</td>
        </tr>
        <tr>
            <td><a href=ft_memcmp.c>ft_memcmp</a></td>
            <td>Compares the first n bytes of str1 and str2.</td>
        </tr>
        <tr>
            <td><a href=ft_memcpy.c>ft_memcpy</a></td>
            <td>Copies n characters from src to dest.</td>
        </tr>
        <tr>
            <td><a href=ft_memmove.c>ft_memmove</a></td>
            <td>Copies n characters from src to dest. (Non destructive manner)</td>
        </tr>
        <tr>
            <td><a href=ft_memset.c>ft_memset</a></td>
            <td>Copies the character c (an unsigned char) to the first n characters of the string.</td>
        </tr>
        <tr>
            <td><a href=ft_strchr.c>ft_strchr</a></td>
            <td>Searches for the first occurrence of the character c (an unsigned char) in the string.</td>
        </tr>
        <tr>
            <td><a href=ft_strlcat.c>ft_strlcat</a></td>
            <td>Appends string src to the end of dst. It will append at most dstsize - strlen(dst) - 1 characters.</td>
        </tr>
        <tr>
            <td><a href=ft_strlcpy.c>ft_strlcpy</a></td>
            <td>Copies up to dstsize - 1 characters from the string src to dst.</td>
        </tr>
        <tr>
            <td><a href=ft_strlen.c>ft_strlen</a></td>
            <td>Computes the length of the string but not including the terminating null character.</td>
        </tr>
        <tr>
            <td><a href=ft_strncmp.c>ft_strncmp</a></td>
            <td>Compares at most the first n bytes of str1 and str2.</td>
        </tr>
        <tr>
            <td><a href=ft_strnstr.c>ft_strnstr</a></td>
            <td>Locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.</td>
        </tr>
        <tr>
            <td><a href=ft_strrchr.c>ft_strrchr</a></td>
            <td>Searches for the last occurrence of the character c (an unsigned char) in the string.</td>
        </tr>
    </tbody>
    <thead>
        <tr>
            <th colspan=3><h4>C Library <a href="https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm">&lt;stdlib.h&gt;</h4></a></th>
        </tr>
        <tr>
            <th>Libft</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=ft_atoi.c>ft_atoi</a></td>
            <td>Converts the string to an integer (type int).</td>
        </tr>
        <tr>
            <td><a href=ft_calloc.c>ft_calloc</a></td>
            <td>Allocates the requested memory initialized to zero bytes.</td>
        </tr>
    </tbody>
    <thead>
        <tr>
            <th colspan=3><h4>Non-stantard C Library</h4></a></th>
        </tr>
        <tr>
            <th>Libft</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=ft_itoa.c>ft_itoa</a></td>
            <td>Converts the int to a string (type char *).</td>
        </tr>
        <tr>
            <td><a href=ft_putchar_fd.c>ft_putchar_fd</a></td>
            <td>Outputs the character 'c' to the given file descriptor.</td>
        </tr>
        <tr>
            <td><a href=ft_putendl_fd.c>ft_putendl_fd</a></td>
            <td>Outputs the string 's' to the given file descriptor, followed by a newline.</td>
        </tr>
        <tr>
            <td><a href=ft_putnbr_fd.c>ft_putnbr_fd</a></td>
            <td>Outputs the integer 'n' to the given file descriptor.</td>
        </tr>
        <tr>
            <td><a href=ft_putstr_fd.c>ft_putstr_fd</a></td>
            <td>Outputs the string 's' to the given file descriptor.</td>
        </tr>
        <tr>
            <td><a href=ft_strdup.c>ft_strdup</a></td>
            <td>Returns a pointer to a null-terminated byte string, which is a duplicate of the string.</td>
        </tr>
        <tr>
            <td><a href=ft_striteri.c>ft_striteri</a></td>
            <td>Applies a function to each character of the string.</td>
        </tr>
        <tr>
            <td><a href=ft_strjoin.c>ft_strjoin</a></td>
            <td>Returns a new string, which is the result of the concatenation of 's1' and 's2'.</td>
        </tr>
        <tr>
            <td><a href=ft_strmapi.c>ft_strmapi</a></td>
            <td>Applies a function to each character of the string 's' to create a new string.</td>
        </tr>
        <tr>
            <td><a href=ft_strtrim.c>ft_strtrim</a></td>
            <td>Returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string.</td>
        </tr>
        <tr>
            <td><a href=ft_substr.c>ft_substr</a></td>
            <td>Returns a substring from the string 's'. The substring begins at index 'start' and is of maximum size 'len'.</td>
        </tr>
    </tbody>
    <thead>
        <tr>
            <th colspan=3><h4>Chained lists manipulation</h4></a></th>
        </tr>
        <tr>
            <th>Libft</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=ft_lstadd_back.c>ft_lstadd_back</a></td>
            <td>Adds the element at the end of the list.</td>
        </tr>
        <tr>
            <td><a href=ft_lstadd_front.c>ft_lstadd_front</a></td>
            <td>Adds the element at the beginning of the list.</td>
        </tr>
        <tr>
            <td><a href=ft_lstclear.c>ft_lstclear</a></td>
            <td>Deletes and frees the given element and every successor of that element, using a given function and free.</td>
        </tr>
        <tr>
            <td><a href=ft_lstdelone.c>ft_lstdelone</a></td>
            <td>Takes as a parameter an element and frees the memory of the element’s content using a function given as a parameter and free the element.</td>
        </tr>
        <tr>
            <td><a href=ft_lstiter.c>ft_lstiter</a></td>
            <td>Iterates the list and applies a function to the content of each element.</td>
        </tr>
        <tr>
            <td><a href=ft_lstlast.c>ft_lstlast</a></td>
            <td>Returns the last element of the list.</td>
        </tr>
        <tr>
            <td><a href=ft_lstmap.c>ft_lstmap</a></td>
            <td>Iterates the list and applies a function to the content of each element. Creates a new list resulting of the successive applications of the function. A 'del' function is used to delete the content of an element if needed.</td>
        </tr>
        <tr>
            <td><a href=ft_lstnew.c>ft_lstnew</a></td>
            <td>Returns a new element.</td>
        </tr>
        <tr>
            <td><a href=ft_lstsize.c>ft_lstsize</a></td>
            <td>Counts the number of elements in a list.</td>
        </tr>
    </tbody>
       <thead>
        <tr>
            <th colspan=3><h4>get_next_line</h4></a></th>
        </tr>
        <tr>
            <th>Libft</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=gnl>get_next_line</a></td>
            <td>Returns a line read from the file descriptor `fd`.<br>Returns NULL if there are no more characters to read, or if an error occured.</td>
        </tr>
    </tbody>
    </tbody>
       <thead>
        <tr>
            <th colspan=3><h4>ft_printf</h4></a></th>
        </tr>
        <tr>
            <th>Libft</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=ft_printf>ft_printf</a></td>
            <td>This function mimics the real `printf` but is limited: <br>Supports these specifiers: 'cspdiuxX%' <br>Supports these flags: '-0#+ '.</td>
        </tr>
    </tbody>
    </tbody>
       <thead>
        <tr>
            <th colspan=3><h4>some needed function</h4></a></th>
        </tr>
        <tr>
            <th>Libft</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href=ft_atoll.c>ft_atoll</a></td>
            <td>Converts the initial part of the string `str` to a long long.
                The string may begin with an arbitrary amount of white space
                followed by a single optional '+' or '-' sign.
                The remainder of the string is converted to a long long
                in the obvious manner,
                stopping at the first character which is not a valid digit.
                If an overflow occurs, LONG_LONG_MAX is returned and errno is set to ERANGE.
                If an underflow occurs, LONG_LONG_MIN is returned and errno is set to ERANGE.
            </td>
        </tr>
    </tbody>
</table>
