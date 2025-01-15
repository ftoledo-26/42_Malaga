/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftoledo- <ftoledo@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:23:12 by ftoledo-          #+#    #+#             */
/*   Updated: 2024/11/11 11:06:29 by ftoledo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/**
 * Checks if character is alphabetic
 *
 * Param c is the character to be checked
 * return 1 if is alpha and 0 otherwise
 */

int		ft_isalpha(char c);

/**
 * Checks if the character is numeric
 *
 * Param c is the character to be checked
 * return 1 if is numeric and 0 otherwise
 */

int		ft_isdigit(char c);

/**
 * Sets the first n bytes of the memory pointed to by s to 0
 *
 * Param s memory pointed to be 0
 * Param n number of byte to by 0
 */
void	*ft_bzero(void *s, unsigned int n);

/**
 * Allocate memory for an array of "num_elem" elements,
 * of "size" bytes and initializes all allocate memory to 0
 * it calculate by "num_elem * size"
 *
 * Param num_elem the number of elements to allocate memory for
 * Param size the size of each elements of butes
 *
 * returns		if its good a pointer to the allocated memory is return
 * 				if num_elements||size == 0 return a NULL value
 */

void	*ft_calloc(size_t num_elem, size_t size);

/**

	* search the character c  is search in the string s and if it´s found
	return a pointer to the first occurence is returned
 * and if not return null
 *
 * Param s the string to be search
 * Param c the character to found
 */

char	*ft_strchr(const char *str, int c);

/**

	* check if the charachter is an uppercase and convert in lower adding 32
	 in ascii
 * if the character is an lowercase it unchange
 *
 * Param c the character to convert
 */

int		ft_tolower(int c);

/**
 *check if the charachter is an lowercase and convert in uppercase
 resting 32 in ascii
 * if the character is an uppercase it unchange
 *
 * Param c the character to convert
 */

int		ft_toupper(int c);

/**
 * check if the character is alphanumeric
 *
 * Param c the character to be checked
 * Return 1 if it´s alphanumeric and 0 otherwise
 */

int		ft_isalnum(char c);

/**
 * check if the character is printeable
 *
 * Param c the character to be checked
 * Return 1 if the character is printeble, 0 otherwise
 */

int		ft_isprint(char c);

/**
 * the function copies the value of the 'n' bytes from memory area pointed
 * by 'src' to the memory area pointed by 'dest'
 * the memory area must be not overlap
 *
 * Param dest Pointer to the destination memory area
 * Param src Pointer to the source memory area
 * Param n Number of bytes to be copied
 *
 * Return Pointer to the destinanion memory area (dest)
 */

void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * calculate the length of a null-terminated string
 *
 * Param str the string to calculate the length
 *
 * Return the length of the string
 */

int		ft_strlen(const char *str);

/**
 * check if the character is an ascii character
 *
 * Param c Character to be checked
 *
 * return 1 if it ascii cahracter and 0 if it not
 */

int		ft_isascii(char c);

/**

	* set the first 'num' bytes of the memory are pointed to by 'value'
	to the specified value
 *
 * Param ptr pointer to the memory area to be filled

	* Param value Value to be set it star as an int but when it filled the
	 memory using the unsigned char conversion
 * Param num Number of bytes to be set to the value
 *
 * return Pointer to the memory area
 */

void	*ft_memset(void *ptr, int value, unsigned int num);

/**

	* this function take the value of the str and converts it ti an
	int it skip spaces and othrwise if it is (-
	|| +) only keep the -

	* and use if it we need to change the sign and next convert the char
	numbers into int number
 *
 * Param str the String to be converted to an integer
 * return the converted integer value
 */

int		ft_atoi(const char *str);

/**
 *this function copis the string pointed to by 'src' to the buffer pointed to
 by 'dst'
 *the copied operation will stop when either the null-teminating character
 of 'src' is reached or when
 *'size -1' characters have been copied to 'dst'
 *
 * Param dst the Destinatiokn buffer where the string will be copied
 * Param src the source String to be copied
 * Param dstsize the size of destination buffer
 *
 * return the length of the source string
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**

	* This function searches for the last occurence of the character 'c' in
	the string 'str'
 * If the charaacter is found a pointer to the last occurence is returned

	* if the character in not found and 'c' is null a pointer to the null
	terminator of the 'str' is returned
 * if the character is not found it return '\0'
 *
 * Param str The string to be searched
 * Param c The character to be found
 *
 * Return a pointer to the last occurence of the character in the string
	|| null if not found
 */

char	*ft_strrchr(const char *str, int c);

/**

	* this function compares the string pointed by 's1' and second string
	pointed by 's2' with a maximum of 'c' character
 *
 * Param str First string
 * Param str2 Second string
 * Param c Maximum of cahracter
 *
 * return An int greater,
	equal or less than 0 depending on the diferences betew str and str2
 */

int		ft_strncmp(const char *str, const char *str2, size_t c);

/**

	* This function compare the first 'n' bytes of the first string 'dst' and
	the second one 'str'
 *
 * Param dst First string
 * Param str Second string
 * Param c Number of bytes to compare
 *
 * return An int greater,
	equal or less than 0 depending on the diferences betew str and dst
 */

int		ft_memcmp(const void *dst, const void *str, size_t n);

/**
 * Searches for the first occurence of a byte in a block of memory
 *
 * Param s Pointer to the block of memory to be searched
 * Param c Value to be search for as an unsigned char
 * Parm n Number of bytes to be searched
 *

	* return Pointer to the first occurrence of the byte if found or null if
	not found
 */

void	*ft_memchr(const void *s, int c, size_t n);

/**

	* this function take two null terminated string s1 and s2 and cancatenated
	them into a newly allocated string
 * the new string is dynamycally allocated and must be free by the caller
 *
 * Param s1 the first string
 * Param s2 the second string
 *

	* Return a pointer to the newly allocated string of the result of the
	concatenated s1 and s2
 */

char	*ft_strjoin(char const *s1, char const *s2);

/**

	* this function copies 'n' bytes from memory area pointed to by 'str2'
	to the memory area pointed

	* to by 'str1' if the 'str1' memory area is located after the 'str2'
	 area the function use 'memcpy'
 *

	* Param str1 Pointer to the destination memory area where the content
	is to be copied
 * Param str2
 * pointer to the source of data to be copied
 * Param n Number of bytes to copied
 *
 * return a pointer to the destination area
 */

void	*ft_memmove(void *str1, const void *str2, size_t n);

/**

	* Locates the first occurence of the null teminated string 'needle'
	 within the null terminated string
 * 'haystack' when not more than 'len'character are searched
 *
 * Param haystack the string to be searched
 * Param needle the string to search for
 * Param len the maximun numbers of character to search
 *
 * return if needle is empty string 'haystack' is return
	/ a pointer to the first character of the first occurence of 'needle'
 * is returned
 */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strdup(const char *s);

/**
 *
 */

char	*ft_substr(char const *str, unsigned int star, size_t len);

/**
 * Generate a string that represent the value of the integer of argument
 * the number negatives must be controled
 *
 * Param n the integer to convert
 *
 * Return the string that represent the intger n
 * return a null value if the memory reserv fail
 */

char	*ft_itoa(int n);

/**
 * Send the numbre 'n' to the file added
 *
 * Param n The number to send
 * Param fd the file which we want to write
 *
 * Return nothing
 */

void	ft_putnbr_fd(int n, int fd);

/**
 * Send the string 's'to the file especified
 *
 * Param s The string to send
 * Param fd The file
 *
 * Return nothing
 */

void	ft_putstr_fd(char *s, int fd);

/**
 *
 */

void	ft_putchar_fd(char c, int fd);

/**
 *
 */

void	ft_putendl_fd(char *s, int fd);

/**
 *
 */

void	ft_putnbr_fd(int n, int fd);

char	*ft_strtrim(char const *s1, char const *set);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

char	**ft_split(char const *s, char c);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
