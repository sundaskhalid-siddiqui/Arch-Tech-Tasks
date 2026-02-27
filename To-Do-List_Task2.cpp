#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<string> tasks;
    int choice;
    string task;
    do {
        cout << "\n--- TO-DO LIST MENU ---" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Remove Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // To ignore leftover newline
        switch (choice) {

        case 1:
            cout << "Enter task: ";
            getline(cin, task);
            tasks.push_back(task);
            cout << "Task added successfully!" << endl;
            break;
        case 2:
            cout << "\nYour Tasks:" << endl;
            if (tasks.empty()) {
                cout << "No tasks available." << endl;
            } else {
                for (int i = 0; i < tasks.size(); i++) {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
            }
            break;
        case 3:
            int taskNumber;
            cout << "Enter task number to remove: ";
            cin >> taskNumber;

            if (taskNumber > 0 && taskNumber <= tasks.size()) {
                tasks.erase(tasks.begin() + taskNumber - 1);
                cout << "Task removed successfully!" << endl;
            } else {
                cout << "Invalid task number!" << endl;
            }
            break;

        case 4:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
