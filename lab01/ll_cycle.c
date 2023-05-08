#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    if (head == NULL) return 0;
    node *tortois = head;
    node *hare = head;
    while (hare->next != NULL 
            && hare->next->next != NULL) {
        hare = hare->next->next;
        tortois = tortois->next;
        if (hare == tortois) return 1;
    }
    return 0;
}
