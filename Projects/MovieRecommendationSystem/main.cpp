#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Movie
{
private:
    string title;
    string genre;
    vector<int> ratings;

public:
    Movie(string title, string genre)
    {
        this->title = title;
        this->genre = genre;
    }

    string getTitle()
    {
        return title;
    }

    string getGenre()
    {
        return genre;
    }

    void addRating(int rating)
    {
        ratings.push_back(rating);

    }

    double getAverageRating()
    {
        if (ratings.empty())
        {
            return 0;
        }

        double sum = 0;

        for (int rating : ratings)
        {
            sum += rating;
        }

        return sum / ratings.size();
    }
};

class User
{
private:
    string name;
    map<string, int> ratings;

public:
    User(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return name;
    }

    void addRating(string title, int rating)
    {
        ratings[title] = rating;
    }

    int getRating(string title)
    {
        map<string,int>::iterator it = ratings.find(title);
        if (it == ratings.end()) return -1;
        return it->second;
    }
};

class MovieDatabase
{
private:
    vector<Movie> movies;
    vector<User> users;

public:
    void addMovie(string title, string genre)
    {
        //movies.push_back(Movie(title, genre));
        movies.emplace_back(title, genre);
    }

    Movie* getMovie(string title)
    {
        for (Movie& movie : movies)
        {
            if (movie.getTitle() == title)
            {
                return &movie;
            }
        }

        return nullptr;
    }

    void addUser(string name)
    {
        //users.push_back(User(name));
        users.emplace_back(name);
    }

    User* getUser(string name)
    {
        for (User& user : users)
        {
            if (user.getName() == name)
            {
                return &user;
            }
        }

        return nullptr;
    }
};

int main()
{
    MovieDatabase db;

    db.addMovie("The Dark Knight", "Action");
    db.addMovie("The Shawshank Redemption", "Drama");
    db.addMovie("The Godfather", "Crime");
    db.addMovie("The Godfather: Part II", "Crime");

    db.addUser("Alice");
    db.addUser("Bob");
    db.addUser("Charlie");

    User* alice = db.getUser("Alice");
    User* bob = db.getUser("Bob");
    User* charlie = db.getUser("Charlie");

    Movie* darkKnight = db.getMovie("The Dark Knight");
    Movie* shawshank = db.getMovie("The Shawshank Redemption");
    Movie* godfather = db.getMovie("The Godfather");
    Movie* godfather2 = db.getMovie("The Godfather: Part II");

    alice->addRating("The Dark Knight", 5);
    alice->addRating("The Godfather", 4);

    bob->addRating("The Shawshank Redemption", 5);

    cout << alice->getRating("The Dark Knight") << endl;
}
