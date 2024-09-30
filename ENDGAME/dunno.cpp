#include<iostream>
using namespace std;
/*int vir(int n){
    cout << n;
    if(n==1){return 1;}
    if(n==0){return 0;}
    return vir(n-1)+vir(n-2);
}
int main(){
    cout<< vir(5);
}*/
/*int *myfunction(int n){
int arr[n];
int i;
for (i=0;i<n;i++) arr[i] = 2*i;
return arr;
}

int main(){
    int a[]=myfunction(10);
    for(int i=0;i<10;i++){
        cout << a[i];
    }
}
int *ok(int a,int b){
    int* c;
    *c=a+b;
    return c;
}
int main(){
    int *d=ok(1,2);
}
int main(){
int a=0, b=0;
for(int i=0; i<3; i++) {
for(int j=i; j<3; j++) {
a = a + i;
}
i++;
b = a + i;
}
cout << a<<endl<<b;

}
struct T {int a[1]; int b[2];};
int main() {
T a, *b;
*(a.a) = 10; // line 1
b = &a; // line 2
//b.b = a.b; // line 3
*(b)->a = a.a; // line 4
return 1;
}
struct person {
string name, petname;
vector <person> friends; }; // blank1
int main() {
person people[3]; // array to store 3 persons
// get basic information (name and petname) of each person
for (int i=0; i<3; i++) {
cin >> people[0].name; // name, blank2
cin >> people[0].petname; // petname, blank3
}
// setup friends of Person 0 and Person 1
// Friend of Person 0 is 1, and Friends of 1 are 0 and 2
people[0].friends.push_back(people[1]); // blank4
people[1].friends.push_back(people[0]);; // blank5
people[1].friends.push_back(people[2]);; // blank6
// print friends of Person 1. first find the number of
// friends using a function call
size_t s = people[1].friends.size(); 
cout << s<<endl;// blank7
// print names of friends (of Person 1)
for (int i=0; i<s; i++)
cout << people[1].friends[i].name <<endl; // blank8
// change pet name of Person 1
cin >> people[1].petname; // blank9
// print updated pet name of Person 1 via friend information of Person

cout << people[0].friends[0].petname; // blank10
return 1; }*/
int main(){
    int n;
    cin >> n;
    int arr[n];
}