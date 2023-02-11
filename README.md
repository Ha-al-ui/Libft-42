<h1  align="center" id="author" >Libft</h1>
<div align="center">
	<div>
<img align="center" src="https://user-images.githubusercontent.com/81205527/149165832-9344c9e5-6075-4268-b276-26b60efc5733.png"> 
	</div>
My own library of useful C Programming functions.

_Description :_ 

This first project as a 42/1337 student will help you consolidate your Piscine skills. You will recode a number of functions from the standard C library, as well as other utility functions that you will use throughout your curriculum.
	</div>

# Summary
 1. [Makefile](#makefile)
 2. [Libc Functions](#libc)
 3. [Additional functions](#additionalfunctions)
 4. [Bonus](#bonus)

# <a name="makefile">Makefile</a>

| Commande       	|  Actions 	|
|----------------	|----------	|
| `make`      	  | Compile .c and create libft.a  	|
| `make clean`    | Delete .o.  	|
| `make flcean`  	| Delete .o and libft.a.  	|
| `make re`     	| Execute fclean et make.  	|

# <a name="libc">Libc Functions</a>

- memset  [(see man)](http://linux.die.net/man/3/memset) 
- bzero   [(see man)](http://linux.die.net/man/3/bzero)
- memcpy  [(see man)](http://linux.die.net/man/3/memcpy)
- memccpy [(see man)](http://linux.die.net/man/3/memccpy)
- memmove [(see man)](http://linux.die.net/man/3/memmove)
- memchr  [(see man)](http://linux.die.net/man/3/memchr)
- memcmp  [(see man)](http://linux.die.net/man/3/memcmp)
- strlen  [(see man)](http://linux.die.net/man/3/strlen)
- strlcpy [(see man)](http://linux.die.net/man/3/strlcpy)
- strlcat [(see man)](http://linux.die.net/man/3/strlcat)
- strchr  [(see man)](http://linux.die.net/man/3/strchr)
- strrchr [(see man)](http://linux.die.net/man/3/strrchr)
- strnstr [(see man)](http://www.freebsd.org/cgi/man.cgi?query=strnstr&sektion=3)
- strncmp [(see man)](http://linux.die.net/man/3/strncmp)
- atoi    [(see man)](http://linux.die.net/man/3/atoi)
- isalpha [(see man)](http://linux.die.net/man/3/isalpha)
- isdigit [(see man)](http://linux.die.net/man/3/isdigit)
- isalnum [(see man)](http://linux.die.net/man/3/isalnum)
- isascii [(see man)](http://linux.die.net/man/3/isascii)
- isprint [(see man)](http://linux.die.net/man/3/isprint)
- toupper [(see man)](http://linux.die.net/man/3/toupper)
- tolower [(see man)](http://linux.die.net/man/3/tolower)
- strdup  [(see man)](http://linux.die.net/man/3/strdup)
- calloc  [(see man)](https://linux.die.net/man/3/calloc)



# <a name="additionalfunctions">Additional functions<a/>



| Function       	|  ft_substr  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_substr(char const *s, unsigned int start, size_t len); |
| Parameters     	| #1.  The string from which to create the substring <br/> #2.  The start index of the substring in the string ’s’. <br/> #3.  The maximum length of the  substring. |
| Return value   	| The substring.  NULL if the allocation fails. |
| External functs | malloc |
| Description    	| Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.	|

----------

| Function       	|  ft_strjoin  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_strjoin(char const *s1, char const *s2); |
| Parameters     	| #1.  The prefix string. <br/> #2.  The suffix string. |
| Return value   	| The new string.  NULL if the allocation fails. |
| External functs | malloc |
| Description    	| Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.	|

----------

| Function       	|  ft_strtrim  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_strtrim(char const *s1, char const *set); |
| Parameters     	| #1.  The string to be trimmed. <br/> #2.  The reference set of characters to trim. |
| Return value   	| The trimmed string.  NULL if the allocation fails. |
| External functs | malloc |
| Description    	| Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.	| 
  
 
----------

| Function       	|  ft_split  |
|----------------	|---------------------------------------	|
| Prototype      	| char **ft_split(char const *s, char c); |
| Parameters     	| #1.  The string to be split. <br/> #2.  The delimiter character. |
| Return value   	| The array of new strings resulting from the split. NULL if the allocation fails. |
| External functs | malloc, free |
| Description    	| Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.  The array must be ended by a NULL pointer.	|
 
----------

 
| Function       	|  ft_itoa  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_itoa(int n); |
| Parameters     	| #1.  the integer to convert. |
| Return value   	| The string representing the integer.  NULL if the allocation fails. |
| External functs | malloc |
| Description    	| Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.	|

----------

 
| Function       	|  ft_strmapi  |
|----------------	|---------------------------------------	|
| Prototype      	| char *ft_strmapi(char const *s, char (*f)(unsigned int, char)); |
| Parameters     	| #1.  The string on which to iterate. <br/> #2.  The function to apply to each character. |
| Return value   	| The string created from the successive applications of ’f’.  Returns NULL if the allocation fails. |
| External functs | malloc |
| Description    	| Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.	|
 
----------

| Function       	|  ft_putchar_fd  |
|----------------	|---------------------------------------	|
| Prototype      	| void ft_putchar_fd(char c, int fd); |
| Parameters     	| #1.  The character to output. <br/> #2.  The file descriptor on which to write. |
| Return value   	| None |
| External functs | write |
| Description    	| Outputs the character ’c’ to the given file descriptor.	|
 
----------

| Function       	|  ft_putstr_fd  |
|----------------	|---------------------------------------	|
| Prototype      	| void ft_putstr_fd(char *s, int fd); |
| Parameters     	| #1.  The string to output. <br/> #2.  The file descriptor on which to write. |
| Return value   	| None |
| External functs | write |
| Description    	| Outputs the string ’s’ to the given file descriptor.	|
 
----------

| Function       	|  ft_putendl_fd  |
|----------------	|---------------------------------------	|
| Prototype      	| void ft_putendl_fd(char *s, int fd); |
| Parameters     	| #1.  The string to output. <br/> #2.  The file descriptor on which to write.. |
| Return value   	| None |
| External functs | write |
| Description    	| Outputs the string ’s’ to the given file descriptor, followed by a newline.	|
 
----------

| Function       	|  ft_putnbr_fd  |
|----------------	|---------------------------------------	|
| Prototype      	| void ft_putnbr_fd(int n, int fd); |
| Parameters     	| #1.  The integer to output. <br/> #2.  The file descriptor on which to write. |
| Return value   	| None |
| External functs | write |
| Description    	| Outputs the integer ’n’ to the given file descriptor.	|
 
 
 # <a name="bonus">Bonus<a/>
For this part we implemented a struct defining the well-known linked lists
```C
typedef	struct	s_list
{
	void		*content;
	struct	s_list	*next;
}			t_list;
```

Bonus functions to implement

| Bonus Function | Description |
| :------------: | :---------: |
| ``ft_lstnew`` | Creates new node allocating with ``malloc`` |
| ``ft_lstadd_front`` | Adds new node at the beginning of the linked list |
| ``ft_lstsize`` | Returns number of elements of linked list |
| ``ft_lstlast`` | Retrieves last node of the list |
| ``ft_lstadd_back`` | Adds new node at the end of the linked list |
| ``ft_lstdelone`` | Deletes, frees, and applies function del to content of a given node |
| ``ft_lstclear`` | Deletes a given element and every element after that |
| ``ft_lstiter`` | Applies a function to the content of every node of the linked list |
| ``ft_lstmap`` | Applies function to a copy of the list, freeing when necessary |

 
 Warning ⚠️ : If you are a 42 Network Student, do not copy/paste this project, it will be a cheat and you will directly get a -42/100.
 
 <h2  align="center" id="author">Author</h2>
<div align="center">
	<div>
	<img height="150em" src="https://www.facebook.com/photo?fbid=677372114030134&set=a.100357958398222](https://scontent-lis1-1.xx.fbcdn.net/v/t39.30808-6/320692326_1892362827767762_7273844557738942201_n.jpg?_nc_cat=101&ccb=1-7&_nc_sid=09cbfe&_nc_eui2=AeHZMBiTucubNV-0AS9O7g6r22GWHMX7eNLbYZYcxft40sPBR3hLv6evjRF4wNbrESlXK-jQwtVk0ofrElw07Q1G&_nc_ohc=QR0z6inTWuIAX8ziZge&_nc_ht=scontent-lis1-1.xx&oh=00_AfB0Kk99VanYvUvo2aQvsqm4-38WxtkiCrvESJSUBmStUQ&oe=63EB860A">
	</div>
	<div>
		<strong> Hamza Alaoui | Devlopper web | 👨‍🚀</strong>
	
:wave: How to reach me:
    	</div> 
    	<div>
  	<a href=""><img align="center" alt="LinkedIn" height="60" src="https://user-images.githubusercontent.com/81205527/157161849-01a9df02-bf32-45be-add4-122bc40b48cf.png"></a>
	<a href="https://www.instagram.com/hamza97.alaoui/"><img align="center" alt="Instagram" height="60" src="https://user-images.githubusercontent.com/81205527/157161841-19ec3ab2-2c8f-4ec0-8b9d-3cd885256098.png"></a>
	<a href = ""> <img align="center" alt="Gmail - augustobecker.dev@gmail.com" height="60" src="https://user-images.githubusercontent.com/81205527/157161831-eb9dffee-404b-4ffe-b0af-34671219f7fb.png"></a>
	<a href=""><img align="center" alt="Discord - beckerzz#3614" height="60" src="https://user-images.githubusercontent.com/81205527/157161820-de88dc63-61a3-4c9f-9445-07ac98bf0bc2.png"></a>
	</div>
</div>

