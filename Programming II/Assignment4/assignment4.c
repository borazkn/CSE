#include <stdio.h>
#include <string.h>

#define MAX_NAME 20
#define MAX_SYMBOL 2
#define MAX_ELEM 118

typedef struct {
    char element_name[MAX_NAME];
    char symbol[MAX_SYMBOL];
    int atomic_number;
    int mass_number;
    int ionic_weight;
    int neutron;
    int electron;
}element_t;

void print(element_t chm_element[]);
void calculator(element_t *element);

int main()
{
    element_t elem[MAX_ELEM] = {0};
    int count = 0;
    char s;

    do {
        printf("Enter the element name: ");
        scanf("%s", &elem[count].element_name);
        printf("Enter element symbol: ");
        scanf("%s", &elem[count].symbol);
        printf("Enter the atomic number: ");
        scanf("%d", &elem[count].atomic_number);
        printf("Enter the mass number: ");
        scanf("%d", &elem[count].mass_number);
        printf("Enter the ionic weight: ");
        scanf("%d", &elem[count].ionic_weight);

        calculator(&elem[count]);
        count++;

        printf("Do you want to continue? (Y/N) ");
        scanf(" %c", &s);
    }while(s != 'N' && s != 'n' && count < MAX_ELEM);

    print(elem);

    return 0;
}

void print(element_t chm_element[]) {
    printf("\n\n%-20s%-3s%-15s%-15s%-15s%-15s%-15s\n", "Name", "Sym", "Atomic Num", "Mass Num", "Ionic Weight", "Electron Num", "Neutron Num");
    for(int i = 0; i < MAX_ELEM; i++) {
        if(strlen(chm_element[i].element_name) == 0)
        break;
        printf("%-20s%-3s%-15d%-15d%-15d%-15d%-15d\n", chm_element[i].element_name, chm_element[i].symbol, chm_element[i].atomic_number, chm_element[i].mass_number, chm_element[i].ionic_weight, chm_element[i].neutron, chm_element[i].electron);
    }
}

void calculator(element_t *elem) {
    elem->neutron = -1 * (elem->ionic_weight - elem->atomic_number);
    elem->electron = -1 * (elem->mass_number - elem->atomic_number);
}