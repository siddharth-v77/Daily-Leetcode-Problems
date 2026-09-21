/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL){
            return head;
        }

        Node* newhead = new Node(head->val);
        Node* oldtmp = head->next;
        Node* newtmp = newhead;

        unordered_map<Node*,Node*> mp ;
        mp[head] = newhead;
        while(oldtmp != NULL){
            Node* copynode = new Node(oldtmp->val);
            mp[oldtmp] = copynode;
            newtmp->next = copynode;

            oldtmp = oldtmp->next;
            newtmp = newtmp->next; 
        }
        
         newtmp = newhead;
         oldtmp = head;
        while(oldtmp != NULL){
            newtmp->random = mp[oldtmp->random];

            oldtmp = oldtmp->next;
            newtmp = newtmp->next;
        }
        return newhead;
    }
};