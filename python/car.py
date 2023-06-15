class Car:
    def __init__(self, make, model, year, color):
        self.make = make
        self.model = model
        self.year = year
        self.color = color

    def display_info(self):
        print(f"Make: {self.make}")
        print(f"Model: {self.model}")
        print(f"Year: {self.year}")
        print(f"Color: {self.color}")


car1 = Car("Toyota", "Corolla", 2022, "Silver")
car2 = Car("Honda", "Accord", 2019, "White")
car3 = Car("Ford", "Mustang", 2021, "Red")
car4 = Car("Chevrolet", "Cruze", 2020, "Blue")
car5 = Car("BMW", "X5", 2018, "Black")
car6 = Car("Mercedes-Benz", "E-Class", 2023, "Gray")
car7 = Car("Audi", "A4", 2017, "Green")
car8 = Car("Nissan", "Altima", 2019, "Purple")
car9 = Car("Volkswagen", "Polo", 2012, "Yellow")
car10 = Car("Suzuki", "Swift", 2020, "Red")

car1.display_info()
print("---")
car2.display_info()
print("---")
car3.display_info()
print("---")
car4.display_info()
print("---")
car5.display_info()
print("---")
car6.display_info()
print("---")
car7.display_info()
print("---")
car8.display_info()
print("---")
car9.display_info()
print("---")
car10.display_info()
