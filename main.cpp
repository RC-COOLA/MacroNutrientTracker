int main() {
    FoodTracker tracker;
    int choice;

 do {
 std::cout << "\n=== Food Tracker Menu ===\n";
 std::cout << "1. Add Food\n2. Remove Food\n3. Display All Foods\n4. Display Macro Totals\n";
 std::cout << "5. Search for a Food\n6. Sort Foods Alphabetically\n7. Save to File\n8. Load from File\n9. Exit\n";
 std::cout << "Choose an option: ";
std::cin >> choice;
 std::cin.ignore();

  std::string name, filename;
 float p, c, f;

switch (choice) {
 case 1:
    std::cout << "Enter food name: ";
     std::getline(std::cin, name);
    std::cout << "Protein (g): "; std::cin >> p;
    std::cout << "Carbs (g): "; std::cin >> c;
    std::cout << "Fat (g): "; std::cin >> f;
    tracker.addFood(name, p, c, f);
         break;
case 2:
     std::cout << "Enter food name to remove: ";
    std::getline(std::cin, name);
     tracker.removeFood(name);
         break;
 case 3:
    tracker.displayFoods();
     break;
case 4:
 tracker.displayTotals();
     break;
case 5:
    std::cout << "Enter food name to search: ";
     std::getline(std::cin, name);
    tracker.searchFood(name);
     break;
case 6:
 tracker.sortFoods();
 std::cout << "Foods sorted.\n";
     break;
case 7:
 std::cout << "Enter filename to save: ";
 std::getline(std::cin, filename);
 tracker.saveToFile(filename);
     break;
case 8:
 std::cout << "Enter filename to load: ";
std::getline(std::cin, filename);
tracker.loadFromFile(filename);
     break;
case 9:
 std::cout << "Exiting\n";
    break;
default:
 std::cout << "Invalid choice.\n";
       }
} while (choice != 9);
    return 0;
}