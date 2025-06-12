// Correct.

// Cycle Detection
// https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem?isFullScreen=true















// bool has_cycle(SinglyLinkedListNode* head) {
//     SinglyLinkedListNode *slow = head;
//     SinglyLinkedListNode *fast = head;
    
//     bool ans = false;
//     while((slow != nullptr) && (fast != nullptr)){
//         if((slow->next == nullptr) || (fast->next == nullptr)){
//             break;
//         }

//     slow = slow->next;
//     fast = fast->next->next;

//     if(slow == fast){
//         ans = true;
//         break;
//     }

//     return ans;
// }