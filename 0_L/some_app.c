#include <stdio.h>


struct t_struct
{
    int a;
    double b;
    char c;
};


union t_union 
{
    int a;
    double b;
    char c;
};

struct company
{
    char companyname[40];
};

struct owner
{
    ownername[40];
};

//анонимные объединения
struct bill_data
{
    int who;
    union 
    {
        struct owner own;
        struct company cmp;
    };
    
};

enum colors { red = 101, green, blue };
enum teletubbies {tinky_winky,dispy,laa_laa,po};

enum errors { ERROR_NO_ERROR, ERROR_PERM, ERROR_NO_ENT,END};
char *errors_str[] = {"ERROR_NO_ERROR", "Operation is not permited", "No such file"};

/*
typedef
*/

typedef char * STRING;
typedef struct  __mystruct 
{
    int a;
} MYSTRUCT,*PMYSTRUCT;

//  typedef unsigned char BYTE;

#define BYTE unsigned char

typedef int (*cb_func)();

int func()
{
    printf("FUNC\n");
    return 0;
}


int main()
{
    printf("This is some app\n");
    
    printf("%d %d %d\n",sizeof(int), sizeof(double), sizeof(char)); //4 8 1
    struct t_struct my_t_strcut;
    printf("%d\n",sizeof(my_t_strcut)); // 24 - из-за "выравнивания в памяти" / минимум - сумма всех полей

    union t_union ifit; 
    printf("%d\n", sizeof(ifit));

    struct bill_data bd;
    printf("%s\n",bd.own.ownername);

    enum colors cl;
    cl = red;
    printf("%d %d %d \n", red, green, blue);

    for (int i = 0; i < END; i++)
    {
        printf("%s \n", errors_str[i]);
        switch (i)
        {
        case ERROR_NO_ERROR:
            break;
        case ERROR_PERM:
            break;
        case ERROR_NO_ENT:
            break;
        }
    
    }
    STRING S;

    MYSTRUCT m;
    PMYSTRUCT pm; // MYSTRUCT *pm;
    m.a = 1;
    pm = &m; // pm->a = 1;
    printf("%d\n", pm->a);

    BYTE b;
    // char -128 -- 127
    // unsi 0 - 255

    cb_func f;
    f = func;
    f();
}
