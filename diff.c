/* Differentiation in C! */
#include <stdio.h>
#include <string.h>


int receiveTerm(int n) {
    printf("Enter term %d: ", n);
    int term;
    scanf("%d", &term);
    return term;
}

// void fillInTerms(int nTerms, int arr[]) {
//     for (int i=1; i <= nTerms; i++) {
//         arr[i] = receiveTerm(i);
//     }
// }

void fillInTerms(int nTerms, int arr[]) {
    // Get the equation in string form.
    char* equation;
    printf("Enter the equation: ");
    scanf("%c", &equation);
    printf("%s", equation);
    int length = strlen(equation);
    printf("%d\n", length);

    // Separate out the terms
}


void differentiate(int *arr[]) {
    /* Differentiates array containing terms in place. */
}

int getNTerms() {
    int nTerms;
    printf("How many terms does it have: ");
    scanf("%d", &nTerms);
    return nTerms;   
}

int main(void) {
    printf("Differentiate your equations.\n");
    int nTerms = getNTerms();
    int arr[nTerms];
    fillInTerms(nTerms, arr);
}

