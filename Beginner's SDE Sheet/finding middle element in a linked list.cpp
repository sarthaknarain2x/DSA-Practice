
// better soln
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node* moveOnce = head;
        Node* moveTwice = head;
        
        while(moveTwice!= NULL && moveTwice->next!=NULL) {
            moveOnce = moveOnce->next;
            moveTwice = moveTwice->next->next;
        }
        return moveOnce->data;
    }
};

//another way same concept

// class Solution{
//     public:
//     /* Should return data of middle node. If linked list is empty, then  -1*/
//     int getMiddle(Node *head)
//     {
//         // Your code here
//         Node* moveOnce = head;
//         Node* moveTwice = head->next;
        
//         while(moveTwice!=NULL) {
//             moveTwice = moveTwice->next;
//             if(moveTwice!=NULL) {
//                 moveTwice = moveTwice->next;
//             }
//             moveOnce = moveOnce->next;
//         }
//         return moveOnce->data;
//     }
// };
