#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode memberOfArray(ListNode* head, int j){ /// I needed a way to access a list item, but with this function, the complexity becomes more necessary
    int i = 1;
    ListNode ret = ListNode(0);
    ret.next = head->next;
    ret.val = head->val;
    while (i != j){
        ret.val = (ret.next)->val;
        ret.next = (*(ret.next)).next;
        i++;
    }
    return ret;
}

class Solution {
public:
    ListNode* reverseList1(ListNode* head) { ///Iterative
        int fullLen= 0;
        int len;
        while ((head->next) != NULL){
            fullLen++;
        }
        len = fullLen / 2;

        int t;
        for (int i=0; i<len; i++){
            t = head(i)->next; /// Well, I imagine I have come up a way to access an array element. In this case the algorithm is acceptable in complexity
            head(i)->next = head(fullLen-i)->next;
            head(fullLen-i)->next = t;
        }

    }
    ListNode* reverseList2(ListNode* head) { ///Recursive
        int fullLen= 0;
        int len;
        while ((head->next) != NULL){
            fullLen++;
        }
        len = fullLen / 2;

        int *pointers[len];
        for (int j=0; j<len; j++){
            pointers[i] = &(head(i)->next);
        }

        for (int j=0; j<len; j++){
            head(j)->next = head(fullLen-j)->next;
            head(fullLen-j)->next = *pointers[j];
        }

    }
};

int main()
{

    return 0;
}
