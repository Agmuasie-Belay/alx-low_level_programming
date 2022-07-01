#include <stdlib.h>                                                                                                                     
#include <time.h>                                                                                                                       
/**                                                                                                                                     
 * main - Entry point                                                                                                                   
 *                                                                                                                                      
 * Return: Always 0 (Success)                                                                                                           
 */                                                                                                                                     
int main(void)                                                                                                                          
{                                                                                                                                       
        int i;                                                                                                                          
                                                                                                                                        
        for( i = 97;i < 123; i++ )                                                                                                      
        {                                                                                                                               
                putchar((char)i);                                                                                                       
        }                                                                                                                               
        for( i = 65;i <97; i++ )                                                                                                        
        {                                                                                                                               
                putchar((char)i);                                                                                                       
        }                                                                                                                               
        putchar('\n');                                                                                                                  
                                                                                                                                        
        return (0);                                                                                                                     
