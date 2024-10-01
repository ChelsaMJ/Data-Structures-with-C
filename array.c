#include <stdio.h>
int main() {
    //array declaration
    int rolINo[10]; 
    
    // taking inputs
    for(int i=0; i<10; i++) {
        scanf("%d", &rolINo[i]);
    }
    
    // printing
    for(int i=0; i<10; i++) {
        printf("%d ", rolINo[i]);
    }
    
    return 0;
}
