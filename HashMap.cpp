#include <iostream>

using namespace std;
#define MAX_TABLE_SIZE 20

class NODE {
    private :
        int key;
        int value;
    public :
        NODE(int key);
        NODE *next;
        NODE *prev;
        int get_key();
        int get_value();
        void increment_value();
};

void NODE::increment_value() {
    value++;
}
int NODE::get_key() {
    return this->key;
}

int NODE::get_value() {
    return this->value;
}

NODE::NODE(int input_key)
{
    key = input_key;
    value = 1;
    next = NULL;
    prev = NULL;
}

class LinkedList {
    private :
        NODE *HEAD;
        NODE *TAIL;
        int count;
    public:
        LinkedList();
        bool is_empty();
        bool insert_element(int key);
        NODE* search(int key, NODE* node);
        void print_linked_list();
};

LinkedList::LinkedList() {
    HEAD = NULL;
    TAIL = NULL;
    count = 0;
}

bool LinkedList::is_empty() {
   if ((HEAD == NULL) && (TAIL == NULL)) {
       return true;
   }
   return false;
}

bool LinkedList::insert_element(int key) {
    NODE *element = new NODE(key);
    if (NULL == element) {
        cout<<"\n[Error] NULL element passed to insert in LinkedList";
        return false;
    }

    if (is_empty()) {
       HEAD = element;
       TAIL = element;
       return true;
    }
    else {
        element->next = HEAD;
        HEAD->prev = element;
        HEAD = element;
        return true;
    }

    return false;
}

void LinkedList::print_linked_list() {
    if(!this->is_empty()) {
       // cout << "\n****** START LIST PRINT ******\n"; 
        NODE *temp = this->HEAD;
        while (temp != NULL) {
            printf("|key = [%d] value[%d]|--> ", temp->get_key(), temp->get_value());
            temp = temp->next;
        }
        //cout << "\n****** END LIST PRINT ******\n";
    }
}

NODE *LinkedList::search(int search_key, NODE *node) {
    if(!this->is_empty()) {
        node = this->HEAD;
        while (node != NULL) {
            if(search_key == node->get_key())
            {
                //cout << "\nElement "<<search_key << " found in List"<<endl;
                return node;
            }
            node = node->next;
        }
    }
    return NULL;
}

class HashMap {
    private :
        LinkedList *hash_table[MAX_TABLE_SIZE];    
        int hash_function(int key);
    public :
        HashMap();
        void is_empty();
        bool insert_element(int key);
        NODE *search(int key);
        void print_hash_map();
};

HashMap::HashMap() {
    for (int i = 0; i < MAX_TABLE_SIZE; i++) {
        hash_table[i] = new LinkedList; 
    }
}
int HashMap::hash_function(int key) {
    return key % MAX_TABLE_SIZE;
}

bool HashMap::insert_element(int key) {
    int hash_value = hash_function(key);

    LinkedList *list = hash_table[hash_value];

    if (list->is_empty())
    {
        list->insert_element(key);
    }
    else 
    {
        NODE* temp = NULL;
        if (temp = list->search(key, temp))
        {
            //cout << temp;
            temp->increment_value();    
        }
        else
        {
            list->insert_element(key);
        }
    }
    return true;
}

NODE *HashMap::search(int key) {
    int hash_value = hash_function(key);

    LinkedList *list = hash_table[hash_value];

    if (list->is_empty())
    {
        return NULL;
    }
    else 
    {
        NODE* temp = NULL;
        if (temp = list->search(key, temp))
        {
            return temp;
        }
    }
    return NULL;

}
void HashMap::print_hash_map() {
    for (int i = 0; i < MAX_TABLE_SIZE; i++)
    {
        cout << "HASH_INDEX " << i << "\t";
        if(!hash_table[i]->is_empty()) {
            hash_table[i]->print_linked_list(); 
            cout << endl;
        }
        cout << endl;
    }
}
int main()
{
    HashMap *map = new HashMap;
    
    map->insert_element(10);
    map->insert_element(10);
    map->insert_element(10);
    map->insert_element(25);
    map->insert_element(45);
    map->print_hash_map();
    NODE *temp = map->search(65);
    if(temp != NULL)
    {
        cout << "\nfrequency " << temp->get_value() << endl; 
    }
    /*
    LinkedList *list = new LinkedList; 
    NODE *temp = NULL;
    //cout<< list->is_empty() << endl;

    
    list->insert_element(10);
    list->insert_element(20);
    list->insert_element(30);
    list->insert_element(40);
    list->insert_element(50);
    list->insert_element(60);
    temp = list->search(60, temp);
    cout << temp->get_key();
    list->print_linked_list();
*/


    return 0;
}
