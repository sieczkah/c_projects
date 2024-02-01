#include <stdio.h>
#include "ft_printf.h"

// int main(void)
// {
//     int i;

//     i = 0;
//     i = ft_printf("\001\002\007\v\010\f\r\n");
//     printf("%d", i);
// }

int	main(void)
{
	int	i;
	int j;

    // **************  TEST 1 %c **********************
    printf("\n######### TEST 1 #########\n");
    printf("Testing with ('%%c', 'a')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%c'", 'a');
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");
    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%c'", 'a');
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************

	
    // **************  TEST 2 %c **********************
	// TEST WITH \0
    printf("\n######### TEST 2 #########\n");
    printf("Testing with ('%%c', '\\0')\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%c'", '\0');
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");
	
    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%c'", '\0');
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************


    // **************  TEST 3 %c **********************
	// TEST WITH 127 'del' non printable
    printf("\n######### TEST 3 #########\n");
    printf("Testing with ('%%c', 'del')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%c'", 127);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%c'", 127);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************

    // **************  TEST 4 %s **********************
	// TEST WITH REGULAR STR
    printf("\n######### TEST 4 #########\n");
    printf("Testing with ('%%s', \"Test string\")'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%s'", "Test string");
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%s'", "Test string");
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************



    // **************  TEST 5 %s **********************
    printf("\n######### TEST 5 #########\n");
    printf("Testing with ('%%s', \"\")'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%s'", "");
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%s'", "");
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************

    // **************  TEST 6 %s **********************
	// TEST WITH STR "Longer string with spaces and characters: !@#$%^&*()"
    printf("\n######### TEST 6 #########\n");
    printf("Testing with ('%%s', \"Longer string with spaces and characters: !@#$%^&*()\")'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%s'", "Longer string with spaces and characters: !@#$%^&*()");
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%s'", "Longer string with spaces and characters: !@#$%^&*()");
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************
	
    // **************  TEST 7 %s **********************
	// TEST WITH STR "Longer string with spaces and characters: !@#$%^&*()"
    printf("\n######### TEST 7 #########\n");
    printf("Testing with ('%%s', NULL)'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%s'", NULL);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%s'", NULL);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************
	
    // **************  TEST 8 %p **********************
	// TEST WITH POINTER
    printf("\n######### TEST 8 #########\n");
	void *ptr1 = (void *)0x12345678;

    printf("Testing with ('%%p', 0x12345678)'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%p'", ptr1);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%p'", ptr1);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************
	
    // **************  TEST 9 %p **********************
	// TEST WITH POINTER
    printf("\n######### TEST 9 #########\n");
	void *ptr2 = NULL;

    printf("Testing with ('%%p', NULL)'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%p'", ptr2);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%p'", ptr2);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************

	
    // **************  TEST 10 %p **********************
	// TEST WITH POINTER
    printf("\n######### TEST 10 #########\n");
	void *ptr3 = (void *)-1;

    printf("Testing with ('%%p', -1)'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%p'", ptr3);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%p'", ptr3);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************

	
    // **************  TEST 11 %x %X **********************
	// TEST WITH 12345678
    printf("\n######### TEST 11 #########\n");

    printf("Testing with ('%%x', '%%X')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%x' '%X'", 12345678, 12345678);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%x' '%X'", 12345678, 12345678);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************

    // **************  TEST 12 %x %X **********************
	// TEST WITH 0
    printf("\n######### TEST 12 #########\n");

    printf("Testing with ('%%x', '%%X')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%x' '%X'", 0, 0);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%x' '%X'", 0, 0);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************

    // **************  TEST 13 %x %X **********************
	// TEST WITH -
    printf("\n######### TEST 13 #########\n");

    printf("Testing with ('%%x', '%%X')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%x' '%X'", -1, -1);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%x' '%X'", -1, -1);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************


    // **************  TEST 14 %x %X **********************
	// TEST WITH INT+letter
    printf("\n######### TEST 14 #########\n");

    printf("Testing with ('%%x', '%%X')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%x' '%X'", 123u, 123u);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%x' '%X'", 123u, 123u);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************

    // **************  TEST 15 %x %X **********************
	// TEST WITH hex
    printf("\n######### TEST 15 #########\n");

    printf("Testing with ('%%x', '%%X')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%x' '%X'", 0x1A3F, 0x1A3F);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%x' '%X'", 0x1A3F, 0x1A3F);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************

    // **************  TEST 16 %d %\i **********************
	// TEST WITH hex
    printf("\n######### TEST 16 #########\n");

    printf("Testing with ('%%d', '%%i')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%d' '%i'", 0x1A3F, 0x1A3F);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%d' '%i'", 0x1A3F, 0x1A3F);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************


    // **************  TEST 17 %d %\i **********************
	// TEST WITH -1
    printf("\n######### TEST 17 #########\n");

    printf("Testing with ('%%d', '%%i')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%d' '%i'", -1, -1);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%d' '%i'", -1, -1);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************

    // **************  TEST 18 %d %\i **********************
	// TEST WITH MAX_INT
    printf("\n######### TEST 18 #########\n");

    printf("Testing with ('%%d', '%%i')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%d' '%i'", 2147483647, 2147483647);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%d' '%i'", 2147483647, 2147483647);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************

    // **************  TEST 19 %d %\i **********************
	// TEST WITH 0
    printf("\n######### TEST 19 #########\n");

    printf("Testing with ('%%d', '%%i')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%d' '%i'", 0, 0);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%d' '%i'", 0, 0);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************

    // **************  TEST 20 %d %\i **********************
	// TEST WITH 1
    printf("\n######### TEST 20 #########\n");

    printf("Testing with ('%%d', '%%i')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%d' '%i'", 1, 1);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%d' '%i'", 1, 1);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************

    // **************  TEST 21 %d %\i **********************
	// TEST WITH MIN_INT
    printf("\n######### TEST 21 #########\n");

    printf("Testing with ('%%d', '%%i')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%d' '%i'", -2147483648, -2147483648);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%d' '%i'", -2147483648, -2147483648);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n***************************\n\n");
	// ***********************************************

    // **************  TEST 22 %d %i **********************
	// TEST WITH MIN_INT -1
    printf("\n################## TEST 22 ##################\n");

    printf("Testing with ('%%d', '%%i')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%d' '%i'", -2147483649, -2147483649);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%d' '%i'", -2147483649, -2147483649);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n******************************************************\n\n");
	// ***********************************************

    // **************  TEST 23 %u **********************
	// TEST WITH  -1
    printf("\n################## TEST 23 ##################\n");

    printf("Testing with ('%%u')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%u'", -1);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%u'", -1);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n****************************************\n\n");
	// ***********************************************

    // **************  TEST 24 %u **********************
	// TEST WITH 0
    printf("\n################## TEST 24 ##################\n");

    printf("Testing with ('%%u')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%u'", 0);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%u'", 0);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n****************************************\n\n");
	// ***********************************************

    // **************  TEST 25 %u **********************
	// TEST WITH MAX U_INT
    printf("\n################## TEST 25 ##################\n");

    printf("Testing with ('%%u')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%u'", 4294967295);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%u'", 4294967295);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n****************************************\n\n");
	// ***********************************************


    // **************  TEST 26 %u **********************
	// TEST WITH  %
    printf("\n################## TEST 26 ##################\n");

    printf("Testing with ('%%u')'\n\n");
    printf("-------  Original  -------\n\n");
    i = printf("Prints: '%%'", 4294967295);
    printf("\nReturn: %d\n", i);
	printf("\n--------------------------\n");

    printf("\n-------  My func  -------\n\n");
    j = ft_printf("Prints: '%%'", 4294967295);
    ft_printf("\nReturn: %d\n", j);
	ft_printf("\n--------------------------");
    printf("\n****************************************\n\n");
	// ***********************************************







}