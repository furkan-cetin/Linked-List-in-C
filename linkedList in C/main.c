#include <stdio.h>
#include <stdlib.h> // malloc kullanmak istiyorsak <stdlib.h> kütüphanesini eklemeliyiz.

struct n{
    int x;
    struct n *next;
};
typedef struct n node;

int main()
{
    node *root; // başlangış için 1 root oluşturduk.
    root = (node*)malloc(sizeof(node)); // Hafızada 1 node luk alan ayırtmak için kullanılır.
    root -> x = 10 ; // root'a 10 değerini atadık.
    root -> next = malloc(sizeof(node));
    root -> next -> x = 20; // rootun nextine 20 değerini atadık.

    node *iter; // Bağlı liste üzerinde istediğimiz yere atayabileceğimiz bir iteratör tanımladık
    iter = root; // İteratör root'u işaret ediyor.

    /*
    int i=0;
        i++;
        printf("%d. eleman : %d \n",i,iter->next);
        iter= iter ->next;
    }*/

    for(i=0;i<100;i++){
        iter->next=(node*)malloc(sizeof(node));
        iter=iter->next;
        iter->x=i*10;
        iter->next=NULL;
        printf("%d. eleman : %d \n",i,iter->x);


    }
}
