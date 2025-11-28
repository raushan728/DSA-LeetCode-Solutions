class LRUCache {
public:
    class Node {
    public:
        int key, val;
        Node* prev;
        Node* next;

        Node(int k, int v) {
            key = k;
            val = v;
            prev = next = NULL;
        }
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    unordered_map<int, Node*> m;
    int limit;

    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void removeNode(Node* node) {
        Node* prev = node->prev;
        Node* next = node->next;
        prev->next = next;
        next->prev = prev;
    }
    void addAfterHead(Node* node) {
        Node* next = head->next;
        head->next = node;
        node->prev = head;
        node->next = next;
        next->prev = node;
    }

    int get(int key) {
        if (m.find(key) == m.end()) {
            return -1;
        }
        Node* node = m[key];
        removeNode(node);
        addAfterHead(node);
        return node->val;
    }

    void put(int key, int value) {
        if (m.find(key) != m.end()) {
            Node* existing = m[key];
            existing->val = value;
            removeNode(existing);
            addAfterHead(existing);
            return;
        }

        if (m.size() == limit) {
            Node* lru = tail->prev;
            m.erase(lru->key);
            removeNode(lru);
            delete lru;
        }

        Node* newNode = new Node(key, value);
        addAfterHead(newNode);
        m[key] = newNode;
    }
};
