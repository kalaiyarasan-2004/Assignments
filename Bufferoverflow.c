#include <stdio.h>
int main(){
	char a[10];
	char b[10]= "HELLO SNA";
	
	//before string
	printf("a = %s\n",a);
	printf("b = %s\n",b);
	
	printf("enter string : ");
	scanf("%s",a);
	
	//after string
	printf("a = %s\n",a);
	printf("b = %s\n",b);

}

/* 

-----output ---
mky ? .../e/SNA $ gcc Bufferoverflow.c -o bf
mky ? .../e/SNA $ ./bf
a =
b = HELLO SNA
enter string : kalaiyarasan
a = kalaiyarasan
b = an


Explanation :

In this program the size of the 'a' is a fixed size of 10, and 'b' is a fixed size of 10.
when you enter a string more than 9 charecters, the program will overflow and store the charecters in b's address.

also old data of 'b' is also exist exepct first 3, but why it is not print ? , the reason is the NULL charecter,
string store the 'null' [\0] charecter at the end of the string. 
you can see those old data by printing the address of the 'b'

*/



