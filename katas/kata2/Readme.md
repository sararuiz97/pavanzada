A password is considered strong if below conditions are all met:

It has at least 6 characters and at most 20 characters.
It must contain at least one lowercase letter, at least one uppercase letter, and at least one digit.
It must NOT contain three repeating characters in a row ("...aaa..." is weak, but "...aa...a..." is strong, assuming other conditions are met).
Write a function strongPasswordChecker(s), that takes a string s as input, and return the MINIMUM change required to make s a strong password. If s is already strong, return 0.

Insertion, deletion or replace of any one character are all considered as one change.

int strongPasswordChecker(char* s) {    }




a. Mayor a 6 y menor a 20
b. 1 lowercase, 1 uppercase, 1 digito
c. si tiene caracteres repetidos*

1. Input la palabra, split()
2. dividir la palabra por caracteres metiendo cada caracter en un arreglo
3. leer si son mas de 6 y menor a 20 (arr.length)
4. recorrer el arreglo, si encuentra una mayuscula
    mayus = true, isUpperCase()
    lower = true, isLowerCase()
    digit = true, isDigit()

![alt text](http://url/to/kata2-1.jpg)

![alt text](http://url/to/kata2-2.jpg)

![alt text](http://url/to/kata2-3.jpg)