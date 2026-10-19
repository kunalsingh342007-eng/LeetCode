
class MyLinkedList {
private:
    struct ListNode {
        int val;
        ListNode* next;

        ListNode(int x) {
            val = x;
            next = nullptr;
        }
    };

    ListNode* head;
    int size;

public:
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) {
            return -1;
        }

        ListNode* curr = head;

        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }

        return curr->val;
    }

    void addAtHead(int val) {
        ListNode* node = new ListNode(val);

        node->next = head;
        head = node;
        size++;
    }

    void addAtTail(int val) {
        ListNode* node = new ListNode(val);

        if (head == nullptr) {
            head = node;
        } else {
            ListNode* curr = head;

            while (curr->next != nullptr) {
                curr = curr->next;
            }

            curr->next = node;
        }

        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0) {
            index = 0;
        }

        if (index > size) {
            return;
        }

        if (index == 0) {
            addAtHead(val);
            return;
        }

        ListNode* curr = head;

        for (int i = 0; i < index - 1; i++) {
            curr = curr->next;
        }

        ListNode* node = new ListNode(val);
        node->next = curr->next;
        curr->next = node;

        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return;
        }

        if (index == 0) {
            ListNode* temp = head;
            head = head->next;

            delete temp;
            size--;
            return;
        }

        ListNode* curr = head;

        for (int i = 0; i < index - 1; i++) {
            curr = curr->next;
        }

        ListNode* temp = curr->next;
        curr->next = temp->next;

        delete temp;
        size--;
    }
};
