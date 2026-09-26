{\rtf1\ansi\ansicpg1251\cocoartf2870
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
\
void print_fibonacci(int n) \{\
    int a = 0;\
    int b = 1;\
\
    for (int i = 0; i < n; i++) \{\
        printf("%d", a);\
        if (i < n - 1) \{\
            printf(", ");\
        \}\
        int next = a + b;\
        a = b;\
        b = next;\
    \}\
    printf("\\n");\
\}\
\
int main(void) \{\
    int count;\
\
    printf("How many Fibonacci numbers do you want? ");\
    if (scanf("%d", &count) != 1 || count <= 0) \{\
        printf("Please enter a positive integer.\\n");\
        return 1;\
    \}\
\
    printf("First %d Fibonacci numbers: ", count);\
    print_fibonacci(count);\
\
    return 0;\
\}}