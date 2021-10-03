#include "libft.h"
#include <stdio.h>
int main()
// { CHECK ITOA
//     char *str; 

//     str = ft_itoa(12345);

// 	printf("%s \n", str);
// 	//printf("%d \n", itoa(-1234));// ITOA function is not in C99, so there is no library for it
//     // free(str);
// 	sleep(100);
    
// }

// { // CHECK STRTRIM

//     char *set = "123";
//     char s1[] = "123net321";
//     char *res;
//     res = ft_strtrim(s1, set);

//         printf ("%s\n", res);
//     // free(res); при отключении этой функции в strtrim and main утечек нет хотя вчера была одна
//     // Очень странное поведение
//   	sleep (100);
//     // return 0;
// }


// { // CHECK SUBSTR
//     const char *s = "I love you,darling!";
//     char *out;
//     out = ft_substr(s, 15, 10);
//     printf("in my function:%s\n", out);
//     // printf("%s\n", out);
//     // printf("%s\n", s);

//     sleep(100);
// }

{ // CHECK MEMSET
    //http://www.c-cpp.ru/content/memset-fmemset
    // по сути эта функция заполняет элементы массива каким-то символом на указанную глубину
    // char *array;

    // ft_memset(array, '\0', 10); // создаем массив размером 10 байтов
    // printf("in my memset I print the sting OUT:%s\n", array);

    // ft_memset(array, 'X', 5); //затем в первые 5 ячеек пишем Х
    // printf("in my memset I print the sting OUT2:%s\n", array);

    
	char array[20] = "hello world!";// создаем массив размером 10 байтов
	char *result;
	printf("%s \n", array);
	result = ft_memset(array, 'X', 5);//затем в первые 5 ячеек пишем Х
	printf("%s \n", result);

}