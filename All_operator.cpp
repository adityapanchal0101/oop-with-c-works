#include <stdio.h>
int main(){
    
    int a = 10;
    int b = 20;

    //1. Arithmetic Operators

    printf("Addition [+] : %d\n" , a + b);

    printf("Subtraction [-] : %d\n" , a - b);

    printf("Division [/] : %d\n" , a / b);

    printf("multiplication [*] : %d\n" , a * b);

    printf("modulus(remainder) [%] : %d\n" , a % b);

    //2. Relational (Comparison) Operators

    printf("Equal to [==] : %d\n" , a == b);

    printf("Not equal to [!=] : %d\n" , a != b);

    printf("Greater than [>] : %d\n" , a > b);

    printf("Less than [<] : %d\n" , a < b);

    printf("Greater than equal to [>=]: %d\n" , a >= b);

    printf("Less than equal to [<=] : %d\n" , a <= b);

    //3. Logical Operators

    printf("Logical AND [&&] : %d\n" , a < 10 && b > 10);

    printf("Logical OR[||] : %d\n" , a || b);

    printf("Logical NOT [!] : %d\n" , !(a > b));

    //4. Assignment Operators

    printf("Assign [=] : %d\n" , a = b);

    printf("Add & assign [+=] : %d\n" , a += b);

    printf("Subtract & assign [-=] : %d\n" , a -= b);

    printf("Multiply & assign [*=] : %d\n" , a *= b);

    printf("Divide & assign [/=] : %d\n" , a /= b);

    printf("Modulus & assign [%=] : %d\n" , a %= b);

    //5. Increment / Decrement Operators

    printf("pre Increment [++] : %d\n" , ++a);

    printf("post Increment [++] : %d\n" , a++);

    printf("pre Decrement [=] : %d\n" , --a);

    printf("pre Decrement [=] : %d\n" , a--);

    //6. Bitwise Operators
    
    printf("Bitwise AND [&] : %d\n" , a & b);

    printf("Bitwise OR [`] : %d\n" );

    printf("Bitwise XOR [^] : %d\n" , a ^ b);

    printf("Bitwise NOT [~] : %d\n" , ~a);

    printf("Left shift[<<] : %d\n" , a << 1 );

    printf("right shift[>>] : %d\n" , a >> 1 );


    //7. Conditional (Ternary) Operator

    //  condition ? value1 : value2;

    int max = (a > b) ? a : b;


    //8. Special Operators
    

    printf("Size of variable [sizeof] : %d\n" , sizeof(int));

    printf("Comma operator [,] : %d\n" , a = 10 , b= 20);

    printf("Address of variable [&] : %d\n" , &a);

    printf("Pointer dereference [*] : %d\n" );

    printf("Member access [.] : %d\n"  );

    printf("Pointer member access [->] : %d\n"  );

    printf("Scope resolution [::] : %d\n"  );


    //9. Type Casting Operators

    printf("type [(type)] : %d\n" , (int)3.14);

    printf("static_cast  : %d\n" , static_cast<int>(a));






   


   























return 0;
}