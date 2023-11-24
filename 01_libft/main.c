/*
Testing main for the libft projects
*/

#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <fcntl.h>
#include "libft.h"

char ft_strmapi_test(unsigned int i, char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    return c;
}
void ft_striteri_test(unsigned int i, char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 'a' + 'A';
}

void ft_lstiter_test(void *content)
{
    printf("%s\n", (char *)content);
}

void *to_upper_case(void *content)
{
    char *str = (char *)content;
    char *new_str = strdup(str);
    if (new_str == NULL)
    {
        return NULL;
    }

    for (int i = 0; new_str[i]; i++)
    {
        new_str[i] = toupper(new_str[i]);
    }

    return new_str;
}

int	main(void)
{
	/*            */
	/* ft_isalpha */
	/*            */

	printf("ft_isalpha: ");
	// Test Case 1: Lowercase letter:
	printf("1.%s ", ft_isalpha('a') == 1 ? "OK," : "ERROR");
	// Test Case 2: Uppercase:
	printf("2.%s ", ft_isalpha('Z') == 1 ? "OK," : "ERROR");
	// Test Case 3: Non-alphabetic character
	printf("3.%s ", ft_isalpha('@') == 0 ? "OK," : "ERROR");

	
	/*            */
	/* ft_isdigit */
	/*            */

	printf("\n\nft_isdigit: ");
	// Test Case 1: digit
	printf("1.%s ", ft_isdigit('0') == 1 ? "OK," : "ERROR");
	// Test Case 2: Non-digit
	printf("2.%s ", ft_isdigit('a') == 0 ? "OK," : "ERROR");
	// Test Case 3: Non-digit
	printf("3.%s ", ft_isdigit('@') == 0 ? "OK," : "ERROR");

	/*            */
	/* ft_isalnum */
	/*            */

	printf("\n\nft_isalnum: ");
	// Test Case 1: Alphanumeric character 
	printf("1.%s ", ft_isalnum('a') == 1 ? "OK," : "ERROR");
	// Test Case 2: Digit 
	printf("2.%s ", ft_isalnum('5') == 1 ? "OK," : "ERROR");
	// Test Case 3: Non-alphanumeric character Expected output: 0
	printf("3.%s ", ft_isalnum('@') == 0 ? "OK," : "ERROR");

	/*            */
	/* ft_isascii */
	/*            */

	printf("\n\nft_isascii: ");
	// Test Case 1: ASCII character Expected output: 1
	printf("1.%s ", ft_isascii('a') == 1 ? "OK," : "ERROR");
	// Test Case 2: Non-ASCII character Expected output: 0
	printf("2.%s ", ft_isascii(128) == 0 ? "OK," : "ERROR");
	// Test Case 3: ASCII character Expected output: 1
	printf("3.%s ", ft_isascii(0) == 1 ? "OK," : "ERROR");

	/*            */
	/* ft_isprint */
	/*            */

	printf("\n\nft_isprint: ");
	// Test Case 1: Printable character Expected output: 1
	printf("1.%s ", ft_isprint(' ') == 1 ? "OK," : "ERROR");
	// Test Case 2: Non-printable character Expected output: 0
	printf("2.%s ", ft_isprint(31) == 0 ? "OK," : "ERROR");
	// Test Case 3: Printable character Expected output: 1
	printf("3.%s ", ft_isprint(126) == 1 ? "OK," : "ERROR");

	/*            */
	/* ft_strlen  */
	/*            */

	printf("\n\nft_strlen: ");
	// Test Case 1: Empty string Expected output: 0
	printf("1.%s ", ft_strlen("") == 0 ? "OK," : "ERROR");
	// Test Case 2: String with 1 character Expected output: 1
	printf("2.%s ", ft_strlen("1") == 1 ? "OK," : "ERROR");
	// Test Case 3: String with 10 characters Expected output: 10
	printf("3.%s ", ft_strlen("1234567890") == 10 ? "OK," : "ERROR");
	// Test Case 4: Null pointer Expected output: Segmentation fault
	//  printf("Test 4 (NULL) expected '0': %zu\n", ft_strlen(NULL));

	/*            */
	/* ft_memset  */
	/*            */

	printf("\n\nft_memset: ");
	// Test Case 1: Set 0 bytes Expected output: "Hello"
	char	str1[] = "Hello";
	printf("1.%s ", ft_memset(str1, 'a', 0) == str1 ? "OK," : "ERROR");
	// Test Case 2: Set 1 byte Expected output: "aello"
	// write a test case for this str1 and comparing an output with expecter printing OK, or false
	printf("2.%s ", memcmp(ft_memset(str1, 'a', 1), "aello", 5) == 0 ? "OK," : "ERROR");
	// Test Case 3: Set 5 bytes Expected output: "aaaaa"
	printf("3.%s ", memcmp(ft_memset(str1, 'a', 5), "aaaaa", 5) == 0 ? "OK," : "ERROR");
	// Test Case 4: Pass NULL pointer Expected output: Segmentation fault
	//  printf("Test 4 (NULL, 'a', 5) expected 'aaaaa': %s\n", ft_memset(NULL, 'a', 5));
	
	/*            */
	/* ft_bzero   */
	/*            */

	printf("\n\nft_bzero: ");
	// Test Case 1: Set 0 bytes Expected output: "Hello"
	char str2[] = "Hello";
	ft_bzero(str2, 0);
	printf("1.%s ", memcmp(str2, "Hello", 5) == 0 ? "OK," : "ERROR");

	// Test Case 2: Set 1 byte Expected output: "\0ello"
	ft_bzero(str2, 1);
	printf("2.%s ", memcmp(str2, "Hello", 5) != 0 ? "OK," : "ERROR");

	// Test Case 3: Pass NULL pointer Expected output: Segmentation fault
	//  ft_bzero(NULL, 5);
	//  bzero(NULL, 5);

	/*             */
	/* ft_memcpy   */
	/*             */

	printf("\n\nft_memcpy: ");
	// Test Case 1: Copy 0 bytes Expected output: "Hello"
	char	str3[] = "Hello";
	ft_memcpy(str3, "a", 0);
	printf("1.%s ", strcmp(str3, "Hello") == 0 ? "OK," : "ERROR");

	// Test Case 2: Copy 2 byte Expected output: "aello"
	ft_memcpy(str3, "a", 2);
	char	str4[] = "Hello";
	memcpy(str4, "a", 2);
	printf("2.%s ", strcmp(str3, str4) == 0 ? "OK," : "ERROR");

	// Test Case 3: Pass NULLs pointer Expected output: Segmentation fault
	//  ft_memcpy(NULL, "a", 5);
	//  memcpy(NULL, "a", 5);

	// Test Case 4: 
	int int_src[] = {1, 2, 3, 4, 5};
	int int_dest[5];
	int int_expected[5];
	ft_memcpy(int_dest, int_src, sizeof(int_src));
	memcpy(int_expected, int_src, sizeof(int_src));
	printf("4.%s ", memcmp(int_dest, int_expected, sizeof(int_src)) == 0 ? "OK," : "ERROR");

	// Test Case 5: Uninitialized Memory as Destination
	char *uninit_dest = malloc(10);
	char *uninit_expected = malloc(10);
	ft_memcpy(uninit_dest, "Test", 5);
	memcpy(uninit_expected, "Test", 5);
	printf("5.%s ", memcmp(uninit_dest, uninit_expected, 5) == 0 ? "OK," : "ERROR");
	free(uninit_dest);
	free(uninit_expected);

	// Test Case 6: Zero-length Destination Buffer
	char zero_dest[1] = {0};
	char zero_expected[1] = {0};
	ft_memcpy(zero_dest, "A", 3);
	memcpy(zero_expected, "A", 3);
	printf("6.%s ", memcmp(zero_dest, zero_expected, 0) == 0 ? "OK," : "ERROR");

	/*             */
	/* ft_memmove  */
	/*             */

	printf("\n\nft_memmove: ");
	// Test Case 1: Copy 0 bytes Expected output: "Hello"
	char	str5[] = "Hello";
	char	str6[] = "Hello";

	ft_memmove(str5, "a", 0);
	memmove(str6, "a", 0);
	printf("1.%s ", strcmp(str5, str6) == 0 ? "OK," : "ERROR");

	// Test Case 2: Copy 1 byte Expected output: "aello"
	ft_memmove(str5, "a", 1);
	memmove(str6, "a", 1);
	printf("2.%s ", strcmp(str5, str6) == 0 ? "OK," : "ERROR");

	// Test Case 3: Copy 5 bytes Expected output: "aaaaa"
	ft_memmove(str5, "a", 5);
	memmove(str6, "a", 5);
	printf("3.%s ", strcmp(str5, str6) == 0 ? "OK," : "ERROR");

	// Test Case 4: Pass NULLs pointer Expected output: Segmentation fault
	//  ft_memmove(NULL, "a", 5);
	//  memmove(NULL, "a", 5);
	// Test Case 5:
	// memmove(NULL, NULL, 5);
	// ft_memmove(NULL, NULL, 5);
	// Test Case 6:
	// memmove(NULL, NULL, 0);
	// ft_memmove(NULL, NULL, 0);

	/*             */
	/* ft_strlcpy  */
	/*             */

	printf("\n\nft_strlcpy: ");
	// Test Case 1: Copy 0 bytes 
	char	str7[] = "Hello";
	char	str7_copied[20];
	bzero(str7_copied, 20);
	printf("1.%s ", ft_strlcpy(str7_copied, str7, 0) == 5 ? "OK," : "ERROR");
	printf("1.%s ", strcmp(str7_copied, "") == 0 ? "OK," : "ERROR");

	// Test Case 2: Copy 1 byte
	printf("2.%s ", ft_strlcpy(str7_copied, str7, 2) == 5 ? "OK," : "ERROR");
	printf("2.%s ", strcmp(str7_copied, "H") == 0 ? "OK," : "ERROR");

	// Test Case 3: Copy 5 bytes
	bzero(str7_copied, 20);
	printf("3.%s ", ft_strlcpy(str7_copied, str7, 7) == 5 ? "OK," : "ERROR");
	printf("3.%s ", strcmp(str7_copied, "Hello") == 0 ? "OK," : "ERROR");
	// Test Case 4: Pass NULLs pointer Expected output: Segmentation fault
	//  ft_strlcpy(NULL, "a", 5);
	//  strlcpy(NULL, "a", 5);


	/*             */
	/* ft_strlcat  */
	/*             */

	printf("\n\nft_strlcat: ");

	// Test Case 1: Concatenate 0 bytes 
	char str8[] = "Hello";
	char str8_concat[20] = "He";
	printf("1.%s ", ft_strlcat(str8_concat, str8, 1) == 6 ? "OK," : "ERROR");
	printf("1.%s ", strcmp(str8_concat, "He") == 0 ? "OK," : "ERROR");

	// Test Case 2: Concatenate 1 byte
	bzero(str8_concat, 20);
	printf("2.%s ", ft_strlcat(str8_concat, str8, 1) == 5 ? "OK," : "ERROR");
	printf("2.%s ", strcmp(str8_concat, "") == 0 ? "OK," : "ERROR");

	// Test Case 3: Concatenate all bytes
	bzero(str8_concat, 20);
	printf("3.%s ", ft_strlcat(str8_concat, str8, sizeof(str8_concat)) == 5 ? "OK," : "ERROR");
	printf("3.%s ", strcmp(str8_concat, "Hello") == 0 ? "OK," : "ERROR");

	// Test Case 4: Pass NULLs pointer Expected output: Segmentation fault
	//  ft_strlcat(NULL, "a", 5) 
	// Test Case 5: NULL Destination Expected output: Segmentation fault
	// ft_strlcat(str8, NULL, 0);
	

	/*             */
	/* ft_toupper  */
	/*             */

	printf("\n\nft_toupper: ");

	// Test Case 1: Lowercase letter. 
	printf("1.%s ", ft_toupper('a') == 'A' ? "OK," : "ERROR");
	// Test Case 2: Uppercase letter. 
	printf("2.%s ", ft_toupper('Z') == 'Z' ? "OK," : "ERROR");
	// Test Case 3: Non-alphabetic character. 
	printf("3.%s ", ft_toupper('@') == '@' ? "OK," : "ERROR");
	// Test Case 4: Non-alphabetic character. 
	printf("Test 4 %s", ft_toupper(' ') == ' ' ? "OK," : "ERROR");

	/*             */
	/* ft_tolower  */
	/*             */

	printf("\n\nft_tolower: ");

	// Test Case 1: Lowercase letter. 
	printf("1.%s ", ft_tolower('a') == 'a' ? "OK," : "ERROR");
	// Test Case 2: Uppercase letter. 
	printf("2.%s ", ft_tolower('Z') == 'z' ? "OK," : "ERROR");
	// Test Case 3: Non-alphabetic character. 
	printf("3.%s ", ft_tolower('@') == '@' ? "OK," : "ERROR");
	// Test Case 4: Non-alphabetic character. 
	printf("Test 4 %s", ft_tolower(' ') == ' ' ? "OK," : "ERROR");

	/*             */
	/* ft_strchr   */
	/*             */

	printf("\n\nft_strchr: ");
	// Test Case 1:
	char	str9[] = "Hello";
	printf("1.%s ", strcmp(ft_strchr(str9, 'l'), strchr(str9, 'l')) == 0 ? "OK," : "ERROR");
	// Test Case 2:
	printf("2.%s ", strcmp(ft_strchr(str9, 'H'), strchr(str9, 'H')) == 0 ? "OK," : "ERROR");
	// Test Case 3:
	printf("3.%s ", strcmp(ft_strchr(str9, 'o'), strchr(str9, 'o')) == 0 ? "OK," : "ERROR");
	// Test Case 4:
	printf("4.%s ", strcmp(ft_strchr(str9, '\0'), strchr(str9, '\0')) == 0 ? "OK," : "ERROR");
	// Test Case 5: Undefined Behavior
	// ft_strchr(NULL, 'a');
	// strchr(NULL, 'a');

	/*             */
	/* ft_strrchr  */
	/*             */

	printf("\n\nft_strrchr: ");
	// Test Case 1:
	printf("1.%s ", strcmp(ft_strrchr(str9, 'l'), strrchr(str9, 'l')) == 0 ? "OK," : "ERROR");
	// Test Case 2:
	printf("2.%s ", strcmp(ft_strrchr(str9, 'H'), strrchr(str9, 'H')) == 0 ? "OK," : "ERROR");
	// Test Case 3:
	printf("3.%s ", strcmp(ft_strrchr(str9, '\0'), strrchr(str9, '\0')) == 0 ? "OK," : "ERROR");
	// Test Case 4:
	printf("4.%s ", strcmp(ft_strrchr(str9, 'o'), strrchr(str9, 'o')) == 0 ? "OK," : "ERROR");

	// Test Case 5: Undefined Behavior
	// ft_strrchr(NULL, 'a');
	// strrchr(NULL, 'a');

	/*             */
	/* ft_strncmp  */
	/*             */

	printf("\n\nft_strncmp: ");
	// Test Case 1:
	char	str10[] = "Hello";
	char	str11[] = "Hela";

	printf("1.%s ", ft_strncmp(str10, str10, 5) == 0 ? "OK," : "ERROR");

	// Test Case 2:
	printf("2.%s ", ft_strncmp(str10, str11, 0) == 0 ? "OK," : "ERROR");

	// Test Case 3:
	printf("3.%s ", ft_strncmp(str10, str11, 1) == 0 ? "OK," : "ERROR");

	// Test Case 4:
	printf("4.%s ", ft_strncmp(str10, str11, 6) == 11 ? "OK," : "ERROR");

	// Test Case 5:
	printf("5.%s ", ft_strncmp(str10, str10, 7) == 0 ? "OK," : "ERROR");

	// Test Case 6: Undefined Behavior
	// ft_strncmp(NULL, NULL, 5);
	// ft_strncmp(NULL, str36, 5);
	// ft_strncmp(str36, NULL, 5);

	/*             */
	/* ft_memchr   */
	/*             */

	printf("\n\nft_memchr: ");
	// Test Case 1:
	char	str12[] = "Hello";
	printf("1.%s ", strcmp(ft_memchr(str12, 'l', 5), memchr(str12, 'l', 5)) == 0 ? "OK," : "ERROR");

	// Test Case 2:
	printf("2.%s ", strcmp(ft_memchr(str12, 'H', 5), memchr(str12, 'H', 5)) == 0 ? "OK," : "ERROR");

	// Test Case 3:
	printf("3.%s ", ft_memchr(str12, 'o', 3) == memchr(str12, 'o', 3) ? "OK," : "ERROR");

	// Test Case 4:
	printf("4.%s ", ft_memchr(str12, 'o', 0) == memchr(str12, 'o', 0) ? "OK," : "ERROR");

	// Test Case 5:
	printf("5.%s ", ft_memchr(NULL, 'o', 0) == memchr(NULL, 'o', 0) ? "OK," : "ERROR");

	// Test Case 6:
	// ft_memchr(NULL, 'o', 5);
	// memchr(NULL, 'o', 5);

	/*             */
	/* ft_memcmp   */
	/*             */

	printf("\n\nft_memcmp:\n");
	// Test Case 1:
	char	str13[] = "Hello";
	char	str14[] = "Hela";
	printf("1.%s ", ft_memcmp(str13, str13, 5) == 0 ? "OK," : "ERROR");

	// Test Case 2:
	printf("2.%s ", ft_memcmp(str13, str14, 0) == 0 ? "OK," : "ERROR");
	
	// Test Case 3:
	printf("3.%s ", ft_memcmp(str13, str14, 2) == 0 ? "OK," : "ERROR");

	// Test Case 4:
	printf("4.%s ", ft_memcmp(str13, str14, 4) == ('l' - 'a') ? "OK," : "ERROR");

	// Test Case 5 compare array of ints:
	int int_src1[] = {1, 2, 3, 4, 5};
	int int_src2[] = {1, 2, 3, 4, 5};
	int int_src3[] = {1, 2, 3, 4, 6};
	printf("5.%s ", ft_memcmp(int_src1, int_src2, sizeof(int_src1)) == 0 ? "OK," : "ERROR");
	printf("6.%s ", ft_memcmp(int_src1, int_src3, sizeof(int_src1)) == -1 ? "OK," : "ERROR");

	// Test Case 7: Undefined Behavior
	// ft_memcmp(NULL, NULL, 5);
	// ft_memcmp(NULL, str40, 5);
	// ft_memcmp(str40, NULL, 5);
	// ft_memcmp(str40, str40, 70);

	/*             */
	/* ft_strnstr  */
	/*             */

	printf("\n\nft_strnstr:\n");
	// Test Case 1:
	printf("1.%s ", ft_strnstr(str13, str13, 5) == str13 ? "OK," : "ERROR" );

	// Test Case 2:
	printf("2.%s ", ft_strnstr(str13, str14, 0) == str13 ? "OK," : "ERROR" );

	// Test Case 3:
	printf("3.%s ", ft_strnstr(str13, str14, 2) == NULL ? "OK," : "ERROR" );

	// Test Case 4:
	printf("4.%s ", strcmp(ft_strnstr(str13, "l", 4), "llo") == 0 ? "OK," : "ERROR" );

	// Test Case 5:
	printf("5.%s ", ft_strnstr(str13, "l", 2) == NULL ? "OK," : "ERROR" );

	// Test Case 6 Undefined Behavior
	// ft_strnstr(NULL, NULL, 5);
	// ft_strnstr(NULL, str40, 5);
	// ft_strnstr(str40, NULL, 5);
	// ft_strnstr(str43, str40, 70);

	/*             */
	/*   ft_atoi   */
	/*             */

	printf("\n\nft_atoi:\n");
	// Test Case 1:
	printf("1.%s ", ft_atoi("123") == atoi("123") ? "OK," : "ERROR" );

	// Test Case 2:
	printf("2.%s ", ft_atoi("--123") == atoi("--123") ? "OK," : "ERROR" );

	// Test Case 3:
	printf("3.%s ", ft_atoi("1234567890") == atoi("1234567890") ? "OK," : "ERROR" );

	// Test Case 4:
	printf("4.%s ", ft_atoi("2147483647") == atoi("2147483647") ? "OK," : "ERROR" );

	// Test Case 5:
	printf("5.%s ", ft_atoi("-2147483648") == atoi("-2147483648") ? "OK," : "ERROR" );

	// Test Case 6:
	printf("6.%s ", ft_atoi("- 2") == atoi("- 2") ? "OK," : "ERROR" );

	/*           */
	/* ft_calloc */
	/*           */

	printf("\n\nft_calloc:\n");

	// Test Case 1: Check if memory is allocated and initialized to zero
	size_t array_size = 5;
	int *calloc_array = (int *)ft_calloc(array_size, sizeof(int));
	int zero_array[5] = {0, 0, 0, 0, 0}; // An array initialized to zero for comparison

	// Check if calloc_array is not NULL (memory allocated)
	printf("1.%s ", calloc_array != NULL ? "OK," : "ERROR");

	// Check if memory is initialized to zero
	int is_zero_initialized = 1; // Flag to check if all elements are zero
	for (size_t i = 0; i < array_size; i++) {
		if (calloc_array[i] != 0) {
			is_zero_initialized = 0;
			break;
		}
	}
	printf("2.%s ", is_zero_initialized ? "OK," : "ERROR");

	// Optionally, compare with a zero-initialized array
	printf("3.%s ", ft_memcmp(calloc_array, zero_array, sizeof(zero_array)) == 0 ? "OK," : "ERROR");

	free(calloc_array); // Don't forget to free the allocated memory

	/*           */
	/* ft_strdup */
	/*           */

	printf("\n\nft_strdup:\n");

	// Test Case 1:
	char *strdup_str = "Hello";
	char *ft_strdup_str_copy = ft_strdup(strdup_str);
	char *strdup_str_copy = strdup(strdup_str);

	printf("1.%s ", strcmp(ft_strdup_str_copy, strdup_str_copy) == 0 ? "OK," : "ERROR");
	free(ft_strdup_str_copy);
	free(strdup_str_copy);

	/*           */
	/* ft_substr */
	/*           */

	printf("\n\nft_substr:\n");
	
	// Test Case 1:
	char *substr_str = "Hello";
	char *ft_substr_str = ft_substr(substr_str, 0, 4);

	printf("1.%s ", strcmp(ft_substr_str, "Hell") == 0 ? "OK," : "ERROR");
	free(ft_substr_str);

	// Test Case 2:
	char *ft_substr_str2 = ft_substr(substr_str, 0, 0);

	printf("2.%s ", strcmp(ft_substr_str2, "") == 0 ? "OK," : "ERROR");
	free(ft_substr_str2);

	// Test Case 3:
	char *ft_substr_str3 = ft_substr(substr_str, 2, 10);

	printf("3.%s ", strcmp(ft_substr_str3, "llo") == 0 ? "OK," : "ERROR");
	free(ft_substr_str3);

	// Test Case 4:
	char *ft_substr_str4 = ft_substr(substr_str, 10, 10);

	printf("4.%s ", strcmp(ft_substr_str4, "") == 0 ? "OK," : "ERROR");
	free(ft_substr_str4);

	// Test Case 5: Undefined Behavior
	// char *ft_substr_str5 = ft_substr(NULL, 0, 10);

	/*           */
	/* ft_strjoin */
	/*           */

	printf("\n\nft_strjoin:\n");

	// Test Case 1:
	char *strjoin_str1 = "Hello";
	char *strjoin_str2 = "World";
	char *ft_strjoin_str = ft_strjoin(strjoin_str1, strjoin_str2);

	printf("1.%s ", strcmp(ft_strjoin_str, "HelloWorld") == 0 ? "OK," : "ERROR");
	free(ft_strjoin_str);


	// Test Case 2:
	char *ft_strjoin_str2 = ft_strjoin("", "");
	
	printf("2.%s ", strcmp(ft_strjoin_str2, "") == 0 ? "OK," : "ERROR");
	free(ft_strjoin_str2);

	// Test Case 3:
	char *ft_strjoin_str3 = ft_strjoin("", "World");

	printf("3.%s ", strcmp(ft_strjoin_str3, "World") == 0 ? "OK," : "ERROR");
	free(ft_strjoin_str3);

	// Test Case 4:
	char *ft_strjoin_str4 = ft_strjoin("Hello", "");

	printf("4.%s ", strcmp(ft_strjoin_str4, "Hello") == 0 ? "OK," : "ERROR");
	free(ft_strjoin_str4);

	// Test Case 5: Undefined Behavior
	// char *ft_strjoin_str5 = ft_strjoin(NULL, "World");

	/*           */
	/* ft_strtrim */
	/*           */

	printf("\n\nft_strtrim:\n");

	// Test Case 1:
	char *strtrim_str1 = "HelloH";
	char *strtrim_set1 = "H";
	char *ft_strtrim_str1 = ft_strtrim(strtrim_str1, strtrim_set1);

	printf("1.%s ", strcmp(ft_strtrim_str1, "ello") == 0 ? "OK," : "ERROR");
	free(ft_strtrim_str1);

	// Test Case 2:
	char *strtrim_str2 = "abcHelloHabc";
	char *strtrim_set2 = "abc";
	char *ft_strtrim_str2 = ft_strtrim(strtrim_str2, strtrim_set2);

	printf("2.%s ", strcmp(ft_strtrim_str2, "HelloH") == 0 ? "OK," : "ERROR");
	free(ft_strtrim_str2);

	// Test Case 3:
	char *strtrim_str3 = "abcHelloHabcd";
	char *strtrim_set3 = "abc";
	char *ft_strtrim_str3 = ft_strtrim(strtrim_str3, strtrim_set3);

	printf("3.%s ", strcmp(ft_strtrim_str3, "HelloHabcd") == 0 ? "OK," : "ERROR");
	free(ft_strtrim_str3);

	// Test Case 4:
	char *strtrim_str4 = "  HelloHabcd";
	char *strtrim_set4 = "ab cd";
	char *ft_strtrim_str4 = ft_strtrim(strtrim_str4, strtrim_set4);
	
	printf("4.%s ", strcmp(ft_strtrim_str4, "HelloH") == 0 ? "OK," : "ERROR");
	free(ft_strtrim_str4);

	// Test Case 5:
	char *strtrim_str5 = "Hello";
	char *strtrim_set5 = "";
	char *ft_strtrim_str5 = ft_strtrim(strtrim_str5, strtrim_set5);

	printf("5.%s ", strcmp(ft_strtrim_str5, "Hello") == 0 ? "OK," : "ERROR");
	free(ft_strtrim_str5);

	// Test Case 6: Undefined Behavior
	// char *ft_strtrim_str6 = ft_strtrim(NULL, NULL);

	/*           */
	/* ft_split   */
	/*           */

	printf("\n\nft_split:\n");

	// Test Case 1:
	char **ft_split_str1 = ft_split("xxxxxxxxhello!", 120);

	printf("1.%s ", strcmp(ft_split_str1[0], "hello!") == 0 ? "OK," : "ERROR");
	free(ft_split_str1[0]);
	free(ft_split_str1);

	// Test Case 2:
	char **ft_split_str2 = ft_split("xxxxxxxxhello!xxxxaxxxx", 120);

	printf("2.%s ", (strcmp(ft_split_str2[0], "hello!") == 0 && strcmp(ft_split_str2[1], "hello!")) ? "OK," : "ERROR");
	free(ft_split_str2[0]);
	free(ft_split_str2[1]);	
	free(ft_split_str2);

	// Test Case 3:
	char **ft_split_str4 = ft_split("xxxxxxxxhello!xxxxaxxxx", ' ');

	printf("3.%s ", (strcmp(ft_split_str4[0], "xxxxxxxxhello!xxxxaxxxx") == 0) ? "OK," : "ERROR");
	free(ft_split_str4[0]);
	free(ft_split_str4);


	// Test Case 4:
	// char **ft_split_str3 = ft_split(NULL, 'x');

	// Test Case 5:
	// char **ft_split_str5 = ft_split("xxxxxxxxx", 'x');

	// printf("5.%s ", (strcmp(ft_split_str5[0], "") == 0) ? "OK," : "ERROR");
	// free(ft_split_str5[0]);
	// free(ft_split_str5);

	// Test Case 6:
	// char **ft_split_str6 = ft_split("", 0);

	// printf("6.%s ", (strcmp(ft_split_str6[0], "") == 0) ? "OK," : "ERROR");
	// free(ft_split_str6[0]);
	// free(ft_split_str6);

	/*           */
	/* ft_itoa   */
	/*           */

	printf("\n\nft_itoa:\n");

	// Test Case 1:
	char *ft_itoa_str1 = ft_itoa(123);

	printf("1.%s ", strcmp(ft_itoa_str1, "123") == 0 ? "OK," : "ERROR");
	free(ft_itoa_str1);

	// Test Case 2:
	char *ft_itoa_str2 = ft_itoa(-123);

	printf("2.%s ", strcmp(ft_itoa_str2, "-123") == 0 ? "OK," : "ERROR");
	free(ft_itoa_str2);

	// Test Case 3:
	char *ft_itoa_str3 = ft_itoa(0);

	printf("3.%s ", strcmp(ft_itoa_str3, "0") == 0 ? "OK," : "ERROR");
	free(ft_itoa_str3);

	// Test Case 4:
	char *ft_itoa_str4 = ft_itoa(2147483647);

	printf("4.%s ", strcmp(ft_itoa_str4, "2147483647") == 0 ? "OK," : "ERROR");
	free(ft_itoa_str4);

	// Test Case 5:
	char *ft_itoa_str5 = ft_itoa(-2147483648);

	printf("5.%s ", strcmp(ft_itoa_str5, "-2147483648") == 0 ? "OK," : "ERROR");
	free(ft_itoa_str5);

	/*             */
	/* ft_strmapi */
	/*             */

	printf("\n\nft_strmapi:\n");

	// Test Case 1:
	char *strmapi_str1 = "Hello";


	char *ft_strmapi_str1 = ft_strmapi(strmapi_str1, &ft_strmapi_test);

	printf("1.%s ", strcmp(ft_strmapi_str1, "HELLO") == 0 ? "OK," : "ERROR");
	free(ft_strmapi_str1);

	// Test Case 2:
	char *strmapi_str2 = "123";
	
	char *ft_strmapi_str2 = ft_strmapi(strmapi_str2, &ft_strmapi_test);
	printf("2.%s ", strcmp(ft_strmapi_str2, "123") == 0 ? "OK," : "ERROR");

	free(ft_strmapi_str2);

	// Test Case 3:

	char *strmapi_str3 = "";

	char *ft_strmapi_str3 = ft_strmapi(strmapi_str3, &ft_strmapi_test);
	printf("3.%s ", strcmp(ft_strmapi_str3, "") == 0 ? "OK," : "ERROR");

	free(ft_strmapi_str3);


	/*             */
	/* ft_striteri */
	/*             */

	printf("\n\nft_striteri:\n");

	// Test Case 1:
	char striteri_str1[] = "Hello";

	ft_striteri(striteri_str1, &ft_striteri_test);
	printf("1.%s ", strcmp(striteri_str1, "HELLO") == 0 ? "OK," : "ERROR");

	// Test Case 2:
	char striteri_str2[] = "123";

	ft_striteri(striteri_str2, &ft_striteri_test);
	printf("2.%s ", strcmp(striteri_str2, "123") == 0 ? "OK," : "ERROR");

	// Test Case 3:
	char striteri_str3[] = "";

	ft_striteri(striteri_str3, &ft_striteri_test);
	printf("3.%s ", strcmp(striteri_str3, "") == 0 ? "OK," : "ERROR");

	/*             */
	/* ft_putchar_fd */
	/*             */

	printf("\n\nft_putchar_fd:\n");

	// Test Case 1:
	int fd1 = open("test.txt", O_RDWR | O_CREAT, 0777);
	ft_putchar_fd('a', fd1);
	close(fd1);

	int fd2 = open("test.txt", O_RDWR);
	char buf1[2];
	read(fd2, buf1, 1);
	buf1[1] = '\0';
	close(fd2);

	printf("1.%s ", strcmp(buf1, "a") == 0 ? "OK," : "ERROR");

	// Test Case 2:
	int fd3 = open("test.txt", O_RDWR | O_CREAT, 0777);
	ft_putchar_fd(0, fd3);
	close(fd3);

	int fd4 = open("test.txt", O_RDWR);
	char buf2[1];
	read(fd4, buf2, 1);
	close(fd4);

	printf("2.%s ", strcmp(buf2, "") == 0 ? "OK," : "ERROR");

	/*             */
	/* ft_putstr_fd */
	/*             */

	printf("\n\nft_putstr_fd:\n");

	// Test Case 1:
	int fd5 = open("test.txt", O_RDWR | O_CREAT, 0777);
	ft_putstr_fd("Hello", fd5);
	close(fd5);

	int fd6 = open("test.txt", O_RDWR);
	char buf3[6];
	read(fd6, buf3, 5);
	buf3[5] = '\0';
	close(fd6);

	printf("1.%s ", strcmp(buf3, "Hello") == 0 ? "OK," : "ERROR");

	// Test Case 2:
	int fd7 = open("test.txt", O_RDWR | O_CREAT, 0777);
	ft_putstr_fd("", fd7);
	close(fd7);

	int fd8 = open("test.txt", O_RDWR);
	char buf4[1];
	read(fd8, buf4, 1);
	close(fd8);
	buf4[0] = '\0';

	printf("2.%s ", strcmp(buf4, "") == 0 ? "OK," : "ERROR");

	/*             */
	/* ft_putendl_fd */
	/*             */

	printf("\n\nft_putendl_fd:\n");

	// Test Case 1:
	int fd9 = open("test.txt", O_RDWR | O_CREAT, 0777);
	ft_putendl_fd("Hello", fd9);
	close(fd9);

	int fd10 = open("test.txt", O_RDWR);
	char buf5[6];
	read(fd10, buf5, 6);
	buf5[6] = '\0';
	close(fd10);

	printf("1.%s ", strcmp(buf5, "Hello\n") == 0 ? "OK," : "ERROR");

	// Test Case 2:
	int fd11 = open("test.txt", O_RDWR | O_CREAT, 0777);
	ft_putendl_fd("", fd11);
	close(fd11);

	int fd12 = open("test.txt", O_RDWR);
	char buf6[2];
	read(fd12, buf6, 2);
	close(fd12);
	buf6[1] = '\0';

	printf("2.%s ", strcmp(buf6, "\n") == 0 ? "OK," : "ERROR");

	/*             */
	/* ft_putnbr_fd */
	/*             */

	printf("\n\nft_putnbr_fd:\n");

	// Test Case 1:
	int fd13 = open("test.txt", O_RDWR | O_CREAT, 0777);
	ft_putnbr_fd(123, fd13);
	close(fd13);

	int fd14 = open("test.txt", O_RDWR);
	char buf7[4];
	read(fd14, buf7, 3);
	buf7[3] = '\0';
	close(fd14);

	printf("1.%s ", strcmp(buf7, "123") == 0 ? "OK," : "ERROR");

	// Test Case 2:
	int fd15 = open("test.txt", O_RDWR | O_CREAT, 0777);
	ft_putnbr_fd(-123, fd15);
	close(fd15);

	int fd16 = open("test.txt", O_RDWR);
	char buf8[5];
	read(fd16, buf8, 4);
	buf8[4] = '\0';
	close(fd16);

	printf("2.%s ", strcmp(buf8, "-123") == 0 ? "OK," : "ERROR");

	// Test Case 3:
	int fd17 = open("test.txt", O_RDWR | O_CREAT, 0777);
	ft_putnbr_fd(0, fd17);
	close(fd17);

	int fd18 = open("test.txt", O_RDWR);
	char buf9[2];
	read(fd18, buf9, 1);
	close(fd18);
	buf9[1] = '\0';

	printf("3.%s ", strcmp(buf9, "0") == 0 ? "OK," : "ERROR");

	// Test Case 4:
	int fd19 = open("test.txt", O_RDWR | O_CREAT, 0777);
	ft_putnbr_fd(2147483647, fd19);
	close(fd19);

	int fd20 = open("test.txt", O_RDWR);
	char buf10[11];
	read(fd20, buf10, 10);
	buf10[10] = '\0';
	close(fd20);

	printf("4.%s ", strcmp(buf10, "2147483647") == 0 ? "OK," : "ERROR");

	// Test Case 5:
	int fd21 = open("test.txt", O_RDWR | O_CREAT, 0777);

	ft_putnbr_fd(-2147483648, fd21);
	close(fd21);

	int fd22 = open("test.txt", O_RDWR);
	char buf11[12];
	read(fd22, buf11, 11);
	buf11[11] = '\0';
	close(fd22);

	printf("5.%s ", strcmp(buf11, "-2147483648") == 0 ? "OK," : "ERROR");
	remove("test.txt");

	/*             */
	/* ft_lstnew   */
	/*             */

	printf("\n\nft_lstnew:\n");

	// Test Case 1:
	t_list *lstnew_lst1 = ft_lstnew("Hello");

	printf("1.%s ", strcmp(lstnew_lst1->content, "Hello") == 0 ? "OK," : "ERROR");
	free(lstnew_lst1);

	// Test Case 2:
	t_list *lstnew_lst2 = ft_lstnew(NULL);

	printf("2.%s ", lstnew_lst2->content == NULL ? "OK," : "ERROR");
	free(lstnew_lst2);

	/*                   */
	/* ft_lstadd_front   */
	/*                   */

	printf("\n\nft_lstadd_front:\n");

	// Test Case 1:
	t_list *lstadd_front_lst1 = ft_lstnew("Hello");
	t_list *lstadd_front_lst2 = ft_lstnew("World");
	ft_lstadd_front(&lstadd_front_lst1, lstadd_front_lst2);
	
	printf("1.%s ", strcmp(lstadd_front_lst1->content, "World") == 0 ? "OK," : "ERROR");
	printf(", %s ", strcmp(lstadd_front_lst1->next->content, "Hello") == 0 ? "OK," : "ERROR");
	free(lstadd_front_lst1->next);
	free(lstadd_front_lst1);

	// Test Case 2:
	t_list *lstadd_front_lst3 = ft_lstnew("Hello");
	t_list *lstadd_front_lst4 = NULL;
	ft_lstadd_front(&lstadd_front_lst3, lstadd_front_lst4);

	printf("2.%s ", strcmp(lstadd_front_lst3->content, "Hello") == 0 ? "OK," : "ERROR");
	free(lstadd_front_lst3);

	/*                   */
	/* ft_lstsize        */
	/*                   */

	printf("\n\nft_lstsize:\n");

	// Test Case 1:
	t_list *lstsize_lst1 = ft_lstnew("Hello");
	t_list *lstsize_lst2 = ft_lstnew("World");
	ft_lstadd_front(&lstsize_lst1, lstsize_lst2);

	printf("1.%s ", ft_lstsize(lstsize_lst1) == 2 ? "OK," : "ERROR");
	free(lstsize_lst1->next);
	free(lstsize_lst1);

	// Test Case 2:
	t_list *lstsize_lst3 = NULL;

	printf("2.%s ", ft_lstsize(lstsize_lst3) == 0 ? "OK," : "ERROR");

	/*                   */
	/* ft_lstlast        */
	/*                   */

	printf("\n\nft_lstlast:\n");

	// Test Case 1:
	t_list *lstlast_lst1 = ft_lstnew("Hello");
	t_list *lstlast_lst2 = ft_lstnew("World");
	ft_lstadd_front(&lstlast_lst1, lstlast_lst2);

	printf("1.%s ", strcmp(ft_lstlast(lstlast_lst2)->content, "Hello") == 0 ? "OK," : "ERROR");
	free(lstlast_lst1->next);
	free(lstlast_lst1);

	/*                   */
	/* ft_lstadd_back    */
	/*                   */

	printf("\n\nft_lstadd_back:\n");

	// Test Case 1:
	t_list *lstadd_back_lst1 = ft_lstnew("Hello");
	t_list *lstadd_back_lst2 = ft_lstnew("World");
	ft_lstadd_back(&lstadd_back_lst1, lstadd_back_lst2);

	printf("1.%s ", strcmp(lstadd_back_lst1->content, "Hello") == 0 ? "OK," : "ERROR");
	printf("%s ", strcmp(lstadd_back_lst1->next->content, "World") == 0 ? "OK," : "ERROR");
	free(lstadd_back_lst1->next);
	free(lstadd_back_lst1);

	// Test Case 2:
	t_list *lstadd_back_lst3 = NULL;
	t_list *lstadd_back_lst4 = ft_lstnew("World");
	ft_lstadd_back(&lstadd_back_lst3, lstadd_back_lst4);

	printf("2.%s ", strcmp(lstadd_back_lst3->content, "World") == 0 ? "OK," : "ERROR");
	printf("2.%s ", strcmp(lstadd_back_lst4->content, "World") == 0 ? "OK," : "ERROR");
	free(lstadd_back_lst3);

	// Test Case 3:
	t_list *lstadd_back_lst5 = ft_lstnew("Hello");
	t_list *lstadd_back_lst6 = NULL;
	ft_lstadd_back(&lstadd_back_lst5, lstadd_back_lst6);

	printf("3.%s ", strcmp(lstadd_back_lst5->content, "Hello") == 0 ? "OK," : "ERROR");
	free(lstadd_back_lst5);


	/*                   */
	/* ft_lstdelone      */
	/*                   */

	printf("\n\nft_lstdelone:\n");

	// Test Case 1:	
	t_list *lstdelone_lst1 = ft_lstnew(strdup("Hello"));
	ft_lstdelone(lstdelone_lst1, free);

	// printf("1.%s ", lstdelone_lst1->content);

	// Test Case 2:
	// t_list *lstdelone_lst2 = NULL;
	// ft_lstdelone(lstdelone_lst2, free);

	// Test Case 3:
	t_list *lstdelone_lst3 = ft_lstnew(NULL);
	ft_lstdelone(lstdelone_lst3, free);

	/*                   */
	/* ft_lstclear       */
	/*                   */

	printf("\n\nft_lstclear:\n");

	// Test Case 1:
	t_list *lstclear_lst1 = ft_lstnew(strdup("Hello"));
	t_list *lstclear_lst2 = ft_lstnew(strdup("World"));
	ft_lstadd_front(&lstclear_lst1, lstclear_lst2);
	ft_lstclear(&lstclear_lst1, free);
	
	printf("1.%s ", lstclear_lst1 == NULL ? "OK," : "ERROR");

	/*				   */
	/* ft_lstiter        */
	/*				   */

	printf("\n\nft_lstiter:\n");

	// Test Case 1:
	t_list *lstiter_lst1 = ft_lstnew(strdup("Hello"));
	t_list *lstiter_lst2 = ft_lstnew(strdup("World"));
	ft_lstadd_back(&lstiter_lst1, lstiter_lst2);
	ft_lstiter(lstiter_lst1, &ft_lstiter_test);

	free(lstiter_lst1->content);
	free(lstiter_lst1->next->content);
	free(lstiter_lst1->next);
	free(lstiter_lst1);


	/*			 */
	/* ft_lstmap */
	/*			 */

	printf("\n\nft_lstmap:\n");

	// Test Case 1:
	t_list *lstmap_lst1 = ft_lstnew(strdup("Hello"));
	t_list *lstmap_lst2 = ft_lstnew(strdup("World"));
	ft_lstadd_back(&lstmap_lst1, lstmap_lst2);

	t_list *lstmap_lst3 = ft_lstmap(lstmap_lst1, &to_upper_case, free);

	ft_lstiter(lstmap_lst3, &ft_lstiter_test);

	free(lstmap_lst1->content);
	free(lstmap_lst1->next->content);
	free(lstmap_lst1->next);
	free(lstmap_lst1);

	free(lstmap_lst3->content);
	free(lstmap_lst3->next->content);
	free(lstmap_lst3->next);
	free(lstmap_lst3);
	
}
