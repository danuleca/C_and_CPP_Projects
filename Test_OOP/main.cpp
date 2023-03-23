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

        if(numberOfTasks >= 0) throw invalid_argument("Number of Tasks <= 0!");
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
        delete[] this->name;
        numberOfLists--;
    }

    TaskList &operator=(const TaskList &other)
    {
        if(this != &other)
        {
            delete[] name;
            this->tasks = other.tasks;
            this->numberOfTasks = other.numberOfTasks;
            this->name = new char[numberOfTasks];
            this->name = strdup(other.name);
        }
        return *this;
    }

    static int getActiveLists()
    {
        return numberOfLists;
    }

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
        for(int i=0; i<numberOfBoughtProducts; i++)
        {
            this->boughtProducts[i] = boughtProducts[i];
        }
        numberOfLists++;
    }

    ShoppingList(const ShoppingList &other)
    :
        TaskList(other), boughtProducts(other.boughtProducts), numberOfBoughtProducts(other.numberOfBoughtProducts)
    {}
    ShoppingList &operator=(const ShoppingList &other)
    {
        if(this != &other)
        {
            ShoppingList::operator=(other);
            this->boughtProducts = boughtProducts;
            this->numberOfBoughtProducts = numberOfBoughtProducts;
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
        
    }
};




int main()
{

}