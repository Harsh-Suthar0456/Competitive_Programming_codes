/*&template<typename T>
struct Node{
    T data;
    Node* next;
    Node(T p) : data(p), next(nullptr){}
    Node(T p, Node* q) : data(p), next(q){}
    Node(): data(0), next(nullptr){}
};

int main(){..
    Node<double> a= Node<double>();
    }*/

    struct Node{
    double data;
    Node* next;

    void Insert(double data,int n){
        Node* temp = new Node();
        temp->data=data;
        if(n==1){temp->next=this;this->next=temp;return;}
        Node* temp2= new Node();
        temp2=this;
        for(int i=1;i<n;i++){
            temp2=temp2->next;
        }
        temp->next=temp2->next;
        temp2->next=temp;
        delete temp2;
    }
    void Delete(int n){
        Node* temp= new Node();
        temp= this;
        for(int i=0;i<n-1;i++){
            temp=temp->next;
        }
        Node* temp2=temp->next;
        temp->next=temp2->next;
        delete temp2;
    }

    void Push(double data){
        Node* temp=new Node();
        temp->data=data;
        Node* temp2=this;
        while(temp2->next != nullptr){
            temp2=temp2->next;
        }
        temp2->next=temp;
        temp->next=nullptr;
    }
    };