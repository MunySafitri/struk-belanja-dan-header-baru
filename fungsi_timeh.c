#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	time_t currentTime;//prototype
	time(&currentTime);
	
	struct tm *myTime= localtime(&currentTime);
	//merampilkan angkanya saja.
	printf("%i/%i/%i/%i:%i:%i\n",myTime->tm_mday,myTime->tm_mon+1,myTime->tm_year+1900,myTime->tm_hour,myTime->tm_min,myTime->tm_sec);
	printf(ctime(&currentTime));// menampilkan variabelnya
}
