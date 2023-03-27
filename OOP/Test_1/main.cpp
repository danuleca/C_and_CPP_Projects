#include <iostream>
#include <cstring>

using namespace std;

class TaskList
{
private:
    string *tasks;
    int numberOfTasks;
    char *name;

protected:
    static int numberOfLists;

public:
    TaskList()
    :tasks(0), name(0)
    {}

    TaskList(char *name, string *tasks, int numberOfTasks)
    : name(name), tasks(tasks), numberOfTasks(numberOfTasks)
    {

        if(numberOfTasks <= 0) throw invalid_argument("Number of Tasks <= 0!");
        if(name == nullptr) throw invalid_argument("Nullptr!");
        if(tasks == nullptr) throw invalid_argument("Nullptr!");
        numberOfLists++;
    }
    
    TaskList(const TaskList &other)
    :
        tasks(other.tasks), numberOfTasks(other.numberOfTasks), name(name)
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
        if(this != &other)
        {
            delete[] name;
            this->tasks = other.tasks;
            this->numberOfTasks = other.numberOfTasks;
            this->name = new char[other.numberOfTasks];
            this->name = strcpy(name, other.name);
        }
        return *this;
    }

    void printListInformation() const
    {
        cout << "Number of tasks: " << numberOfTasks << endl;
        cout << "Tasks: " << *tasks << endl;
        cout << "Name: " << name << endl;
    }

    static int getActiveLists() {return numberOfLists;}
    string getTasks() const {return *tasks;}
    int getNumberOfTasks() const {return numberOfTasks;}
    char *getName() const {return name;}

};
int TaskList::numberOfLists = 0;

class ShoppingList : public TaskList
{
private:
    string *boughtProducts;
    int numberOfBoughtProducts;
   
public:
    ShoppingList(char *name, string *productsToBuy, int numberOfProductsToBuy, const string *boughtProducts, int numberOfBoughtProducts)
        : TaskList(name, productsToBuy, numberOfProductsToBuy), boughtProducts(new string[numberOfBoughtProducts]), numberOfBoughtProducts(numberOfBoughtProducts)
    {
        if(numberOfBoughtProducts <= 0) throw invalid_argument("Number of bought products <= 0!");
        if(boughtProducts == nullptr) throw invalid_argument("Nullptr!");
        for(int i=0; i<numberOfBoughtProducts; i++)
        {
            this->boughtProducts[i] = boughtProducts[i];
        }
    }

    ShoppingList(const ShoppingList &other)
    :
        TaskList(other), boughtProducts(other.boughtProducts), numberOfBoughtProducts(other.numberOfBoughtProducts)
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
        cout << "Number of tasks: " << TaskList::getNumberOfTasks() << endl;
        cout << "Tasks: " << TaskList::getTasks() << endl;
        cout << "Name: " << TaskList::getName() << endl;
    }

};


int main()
{
    string tasks[] = {"task1", "task2", "task3"};
    string boughtProducts[] = {"product1", "product2", "product3"};
    ShoppingList list("list1", tasks, 3, boughtProducts, 3);
    list.printListInformation();
    cout << "Number of lists: " << TaskList::getActiveLists() << endl;
}