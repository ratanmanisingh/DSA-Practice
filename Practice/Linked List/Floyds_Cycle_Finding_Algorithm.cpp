#include <iostream>
using namespace std;

// Define the structure for a Linked List Node
struct Node
{
    int data;   // Stores the value of the node
    Node *next; // Pointer to the next node in the sequence
};

/**
 * Function to detect a loop in a linked list.
 * It uses Floyd's Cycle-Finding Algorithm (Tortoise and Hare).
 *
 * Time Complexity: O(N) - Where N is the number of nodes.
 * Space Complexity: O(1) - Constant memory used (only two pointers).
 */

bool hasLoop(Node *head)
{
    // If the list is empty or has only one node without a loop, return false
    if (head == NULL || head->next == NULL)
    {
        return false;
    }

    Node *slow = head; // Slow pointer (moves 1 step at a time)
    Node *fast = head; // Fast pointer (moves 2 steps at a time)

    // Traverse the list until the fast pointer reaches the end
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;       // Move slow pointer by 1 step
        fast = fast->next->next; // Move fast pointer by 2 steps

        // If there is a loop, the fast pointer will eventually trap
        // the slow pointer, and they will meet at the same node.
        if (slow == fast)
        {
            return true; // Loop detected
        }
    }

    return false; // Fast pointer reached the end, meaning no loop exists
}

int main()
{
    // 1. Allocate memory for 4 distinct nodes on the heap
    Node *A = new Node();
    Node *B = new Node();
    Node *C = new Node();
    Node *D = new Node();

    // 2. Assign data values to each node
    A->data = 10;
    B->data = 20;
    C->data = 30;
    D->data = 40;

    // 3. Link the nodes together sequentially: A -> B -> C -> D
    A->next = B;
    B->next = C;
    C->next = D;

    // 4. Intentionally introduce a loop by pointing D's next back to B
    // Current structure: A -> B -> C -> D
    //                         ^         |
    //                         |_________|
    D->next = B;

    // Set node A as the start (head) of the linked list
    Node *head = A;

    // 5. Test the function and display the result
    if (hasLoop(head))
    {
        cout << "Loop exists" << endl;
    }
    else
    {
        cout << "No loop" << endl;
    }

    // Clean up memory (Note: In a production scenario with loops,
    // you must break the loop before running delete to avoid infinite deletion loops)
    D->next = NULL;
    delete A;
    delete B;
    delete C;
    delete D;

    return 0;
}
