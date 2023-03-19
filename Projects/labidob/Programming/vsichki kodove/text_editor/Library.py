from datetime import date, time

class Books:
  def __init__(self, author, name, pages, ganre, language):
    self.author = author
    self.name = name
    self.pages = pages
    self.ganre = ganre
    self.language = language
    
  def printing(self):
    print("Authors name is " + self.author)
    print("Name of the book  is " + self.name)
    print("Pages in the book are " + self.pages)
    print("Ganre is " + self.ganre)
    print("Language is " + self.language)

class Reader:
  def __init__(self, firstname, lastname, bookcount):
    self.firstname = firstname
    self.lastname = lastname
    self.bookcount = bookcount
    
  def ReaderPrint(self):
    print("Readers first name is " + self.firstname)
    print("Reades last name is " + self.lastname)
    print("Amount of books he has read are " + self.bookcount)


class Card:
  def __init__(self, firstname, lastname, cardID, foundingDate,expirationDate, isValid):
    self.firstname = Reader.firstname
    self.lastname = Reader.lastname
    self.cardID = cardID
    self.foundingDate = foundingDate
    self.expirationDate = expirationDate
    self.isValid = CardDatingCompare()
    def CardDatingCompare():
        today = date.today()
        newToday = time.strptime(today, "%d/%m/%Y")
        newExpDate = time.strptime(Card.expirationDate, "%d/%m/%Y")
        if(newToday>newExpDate):
            return "Not Valid"
        else:
            return "Valid"
            
    def card_printing(self):
        print("First name: " + self.firstname)
        print("Last name: " + self.lastname)
        print("Card ID: " + self.cardID)
        print("Founding date: " + self.foundingDate)
        print("Expiration date: " + self.expirationDate)
        print("Card is " + self.isValid)


b1 = Books(input("Enter name of the author: "),input("Enter name of the book: "),
     int(input("Enter count of book's pages: ")),input("Enter book's ganre: "),input("Enter book's language: "))
b1.printing()

p1 = Reader(input("Enter reader's first name: "),input("Enter reader's last name: "),
     int(input("Enter reader's book count: ")))
p1.ReaderPrint()

card = Card(input("Enter reader's first name: "),input("Enter reader's last name: "),int(input("Enter card ID: ")),
     int(input("Enter foudning date in ??/??/?? format: ")),int(input("Enter expiration date in ??/??/?? format: ")))
card.card_printing()