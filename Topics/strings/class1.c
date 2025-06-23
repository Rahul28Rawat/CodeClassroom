#include<stdio.h>
#include<string.h>

int main() {

    char name[]="muskan";
    char name2[]="";
    // char name[]={'m','u','s','k','a','n','\0'};

    //strlen(source) = (string)+(length)
    // int length= strlen(name); //6
    // printf("%d",length);

    // int size= sizeof(name)/sizeof(name[0]); //7
    // printf("%d",size);

    // strcpy(destination, source) --> (string) + (copy)
    // strcpy(name2,name);
    // printf("%s",name2);

    // strcat(destination, source) --> (string) + (concatation)
    // char myname[15]="muskan";
    // char surname[10]="singh";
    // strcat(myname," singh");
    // printf("%s",myname);

    // strcmp(source,source) --> string + compare

    // if strings are equal --> 0
    // if string1 is bigger= 1
    // if string2 is bigger= -1

    // int ans = strcmp("Riya","muskan");
    // printf("%d",ans);

    //ASCII value --> a-z ==> 97-122
    //ASCII value --> A-Z ==> 65-90

    // "a"=="a"
    // "a">"A"
    // "c">"C"

    //every small letter > every big letter


    //"a"<"b"<"c"<"d"<......<"x"<"y"<"z"
    //"A"<"B"<"C"<"D"<......<"X"<"Y"<"Z"
    // A<B<C.......<Z<a<b<c<.....<y<z

    // strchr(s1, ch) --> (string) + (character)
    // Returns a pointer to the first occurrence of character ch in string s1. 
    char* ptr=strchr("muskan",'z');
    printf("%p",ptr);
    
    
    // strstr(s1, s2); 
    // Returns a pointer to the first occurrence of string s2 in string s1. 

    return 0;    

}