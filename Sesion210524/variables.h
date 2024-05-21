#define MAXREGISTER 100
#define MAXCHAR 60

//typedef se utiliza para crear un nuevo tipo de dato
typedef struct PERSON //Las esturcturas organizan informacion, se relaciinan entre si
 {
    char cif[MAXCHAR];
    char name[MAXCHAR];
    char lastname[MAXCHAR];
    int grade; 
};


