#include <iostream>
#include <cstring>

using namespace std;

class TaskList
{
private:
    const string *tasks;
    int numberOfTasks;
    const char *name;

    static const char * dupCStr(const char *name){
        int len = strlen(name);
        char *result = new char[len];
        for(int i = 0; i<len; i++){
            result[i] = name[i];
        }
        return result;
    }
    static const string * dupTsk(const string *tasks, int numberOfTasks){
        string *result = new string[numberOfTasks];
        for(int i = 0; i<numberOfTasks; i++){
            result[i] = tasks[i];
        }
        return result;
    }

protected:
    static int numberOfLists;

public:
    TaskList(): tasks(new string[1]), name("") {
        numberOfLists++;
    }

    TaskList(const char *name, const string *tasks, int numberOfTasks)
        : name(name), tasks(tasks), numberOfTasks(numberOfTasks)
    {
        if(numberOfTasks <= 0) throw invalid_argument("Number of Tasks <= 0! ");
        if(tasks == nullptr || name == nullptr) throw invalid_argument("Nullptr!");
        numberOfLists++;
    }

    TaskList(const TaskList &other)
        //: name(strdup(other.name)), tasks{new string[other.numberOfTasks]}, numberOfTasks(other.numberOfTasks)
        : name(dupCStr(other.name)), tasks(dupTsk(other.tasks, other.numberOfTasks)), numberOfTasks(other.numberOfTasks)
    {
        numberOfLists++;
    }

    ~TaskList()
    {
        if (tasks != nullptr) delete[] tasks;
        if (name != nullptr) delete[] name;
        numberOfLists--;
    }

    TaskList &operator=(const TaskList &other)
    {
        if(&other != this)
        {
            delete[] name;
            this->name = dupCStr(other.name);
            this->tasks = dupTsk(other.tasks, other.numberOfTasks);
            this->numberOfTasks = other.numberOfTasks;
            // TaskList copy(other);
            // swap(tasks, copy.tasks);
            // swap(name, copy.name);
            // swap(numberOfTasks, copy.numberOfTasks);
        }
        return *this;
    }

    void printListInformation() const
    {
        cout << "Number of tasks: " << numberOfTasks << "\n"<< endl;
        cout << "Tasks: " << *tasks << "\n"<< endl;
        cout << "Name: " << name << "\n" << endl;
    }
    static int getActiveLists() {return numberOfLists;}
    string getTasks() const {return *tasks;}
    int getNumberOfTasks() const {return numberOfTasks;}
    const char *getName() const {return name;}
};

int TaskList::numberOfLists = 0;

class ShoppingList : public TaskList
{
private:
    string *boughtProducts;
    int numberOfBoughtProducts;
   
public:
    ShoppingList(const char *name, const string *productsToBuy, int numberOfProductsToBuy, string *boughtProducts, int numberOfBoughtProducts)
    : TaskList(name, productsToBuy, numberOfBoughtProducts), boughtProducts(boughtProducts), numberOfBoughtProducts(numberOfBoughtProducts)
    {
        if(boughtProducts == nullptr) throw invalid_argument("Nullptr!");
        if(numberOfBoughtProducts <= 0) throw invalid_argument("Number of bought products <= 0!");
        numberOfLists++;
    }

    ShoppingList(const ShoppingList &other)
    :   TaskList(other), boughtProducts(other.boughtProducts), numberOfBoughtProducts(other.numberOfBoughtProducts)
    {
       numberOfLists++;
    }

    ShoppingList &operator=(const ShoppingList &other)
    {
        if(this != &other)
        {
            ShoppingList::operator=(other);
            this->boughtProducts = other.boughtProducts;
            this->numberOfBoughtProducts = other.numberOfBoughtProducts;
        }
        return *this;
    }

    ~ShoppingList()
    {
        delete[] boughtProducts;
        numberOfLists--;
    }

    void printListInformation() const
    {
        cout << "Number of products to buy: " << TaskList::getNumberOfTasks() << "\n" << endl;
        cout << "Products to buy: " << TaskList::getTasks() << "\n" << endl;
        cout << "Name: " << TaskList::getName() << "\n" << endl;
        cout << "Bought prodcuts: " << *boughtProducts << "\n" << endl;
        cout << "Number of bought products: " << numberOfBoughtProducts << "\n" << endl;
    }
};

int main()
{
    // create a TaskList object and print its information
    string tasks[3] = {"Task 1", "Task 2", "Task 3"};
    TaskList taskList("My Task List", tasks, 3);
    taskList.printListInformation();

    // create a ShoppingList object and print its information
    string productsToBuy[2] = {"Product 1", "Product 2"};
    string boughtProducts[2] = {"Product 3", "Product 4"};
    ShoppingList shoppingList("My Shopping List", productsToBuy, 2, boughtProducts, 2);
    shoppingList.printListInformation();

    // test the copy constructor
    ShoppingList shoppingListCopy(shoppingList);
    shoppingListCopy.printListInformation();

    // test the assignment operator
    ShoppingList shoppingListCopy2 = shoppingList;
    shoppingListCopy2.printListInformation();
}