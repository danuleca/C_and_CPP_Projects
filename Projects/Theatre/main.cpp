#include <iostream>

using namespace std;

class Theatre
{
private:
    int totalTickets;
    int soldTickets;
    // Add fields:
    // Number of total tickets to stop and one
    // Number of sold tickets

public:
    /**
     * @brief Construct a new empty Parking object - 0 tickets, 0 taken
     *
     */
    Theatre()
    {
        this->totalTickets = 0;
        this->soldTickets = 0;
    }

    /**
     * @brief Construct a new Parking object with total tickets and 0 takne
     *
     * @param totalTickets
     */
    Theatre(int totalTickets)
    {
         this->totalTickets = totalTickets;
         this->soldTickets = 0;
    }
    /**
     * @brief Construct a new Parking object with total tickets and taken tickets
     *
     * @param totaltickets
     * @param soldTickets
     */
    Theatre(int totalTickets, int soldTickets)
    {
        this->totalTickets = totalTickets;
        this->soldTickets = soldTickets;
    }

    /**
     * @brief Get the total free tickets in the parking lot
     *
     */
    int getTotalAvailableTickets() const
    {
        int result = this->totalTickets - this->soldTickets;
        return result;
    }
};


int main()
{
    /* TODO remove this comment to test the functionalities */
    Theatre t1;
    cout << "There should be 0 tickets, and there are: " << t1.getTotalAvailableTickets() << endl;

    Theatre t2(10);
    cout << "There should be 10 tickets, and there are: " << t2.getTotalAvailableTickets() << endl;

    Theatre t3(10, 5);
    cout << "There should be 5 tickets, and there are: " << t3.getTotalAvailableTickets() << endl;
}
