//Q.1 Develop a program that prints the given Right half triangle pattern using a nested for loop.

// #include<stdio.h>
// int main() {

// int start = 40;
//     for(int a = 1; a <= 5; a++){

//         for(int b = 1; b <= a; b++){

//             printf("%d ",b + start);
//         }
//         printf("\n");
//     }


//     return 0;
// }



//Q.2 Develop a program that prints the given Floyd’s triangle pattern using a nested for loop.

// #include<stdio.h>
// int main() {

// int start = 10;

//     for(int a = 1; a <= 4; a++){

//         for(int b = 1; b <= a; b++){

//             start++;
//             printf("%d ",start);
//         }

//         printf("\n");
//     }


//     return 0;
// }



//Q.3 Develop a program that prints the given Left half triangle pattern using a nested for loop.

// #include <stdio.h>

// int main() {
//     int numRows = 5;

//     for (int i = 1; i <= numRows; i++) {

//         for (int j = 1; j <= numRows - i; j++) {
//             printf("  ");
//         }
        
//         for (int k = 6-i; k <= numRows; k++) {
//             printf("%d ", k);
//         }
        
//         printf("\n");
//     }

//     return 0;
// }



//Q.4 Develop a program that prints the given Inverted Left half triangle pattern using a nested for

// #include <stdio.h>

// int main() {
//  int numRows = 5, end = 5, b = 1;

//  for (int i = 1; i <= numRows; i++) {
 
//  for (int j = 1; j < i; j++) {
//  printf(" ");
 
//  }

//  for (int k = 1; b <= end; b++) {
//  printf("%d", k);

//  if(k == 1){
//  k--;
//  }
//  else{
//  k++;
//  }
 
//  }
//  b = 1, end--;
 
//  printf("\n");
//  }

//  return 0;
// }



//Q.5 Develop a program that prints the given Full Pyramid pattern using a nested for loop.

// #include <stdio.h>

// int main() {
//     int numRows = 5;

//     for (int i = 1; i <= numRows; i++) {
 
//         for (int j = 1; j <= numRows - i; j++) {
//             printf("  ");
//         }
        
//         for (int k = 6-i; k <= numRows; k++) {
//             printf("%d ", k);
//         }
        
//         for(int l = 4; l > 0 && l > numRows - i; l--)  {
//             printf("%d ",l);
//         }

//         printf("\n");
//     }

//     return 0;
// }




//Q.6 Develop a program that prints the given Custom numeric pattern using a nested for loop.

// #include<stdio.h>
// void main() {

//     int a, b, i = 8, j = 0;

//     for(a = 1; a <= 5; a++) {
        
//         for(b = 1; b <= a; b++){

//             printf("%d",b);
//         }
//         for(int c = 1; c <= i - j; c++){

//             printf(" ");
//         }
//         for(int d = b - 1; d >= 1; d--){

//             printf("%d",d);
//         }
//         j = j + 2;
//         printf("\n");
//     }

// }



//Q.7 Develop a program that prints the given Custom alphabetic pattern using a nested for loop.

// #include<stdio.h>
// void main() {

//     int a;

//     for(a = 1; a <= 5; a++){
        
//         if(a == 1 || a == 3){
//             for(int b = 1; b <= 5; b++) {
//                 printf("* ");
//             }}

//         else if(a == 2) {
//             printf("*       *");
//         }    
//         else{
//             printf("*");
//         }
//             printf("\n");

//     }
// }