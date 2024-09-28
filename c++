#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;

    Task(string desc) : description(desc), completed(false) {}
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& taskDesc) {
        tasks.push_back(Task(taskDesc));
        cout << "Task added: " << taskDesc << endl;
    }

    void markCompleted(int taskNumber) {
        if (taskNumber > 0 && taskNumber <= tasks.size()) {
            tasks[taskNumber - 1].completed = true;
            cout << "Task '" << tasks[taskNumber - 1].description << "' marked as completed." << endl;
        } else {
            cout << "Invalid task number." << endl;
        }
    }

    void viewTasks() const {
        if (tasks.empty()) {
            cout << "No tasks in the list." << endl;
        } else {
            for (int i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i].description
                     << " - " << (tasks[i].completed ? "Completed" : "Not Completed") << endl;
            }
        }
    }
};

int main() {
    ToDoList todoList;
    int choice;

    do {
        cout << "\nTo-Do List Menu:\n";
        cout << "1. Add Task\n";
        cout << "2. Mark Task as Completed\n";
        cout << "3. View Tasks\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter task description: ";
                cin.ignore(); // to handle leftover newline character from cin
                string taskDesc;
                getline(cin, taskDesc);
                todoList.addTask(taskDesc);
                break;
            }
            case 2: {
                todoList.viewTasks();
                cout << "Enter task number to mark as completed: ";
                int taskNumber;
                cin >> taskNumber;
                todoList.markCompleted(taskNumber);
                break;
            }
            case 3: {
                todoList.viewTasks();
                break;
            }
            case 4:
                cout << "Exiting the application." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;

    Task(string desc) : description(desc), completed(false) {}
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& taskDesc) {
        tasks.push_back(Task(taskDesc));
        cout << "Task added: " << taskDesc << endl;
    }

    void markCompleted(int taskNumber) {
        if (taskNumber > 0 && taskNumber <= tasks.size()) {
            tasks[taskNumber - 1].completed = true;
            cout << "Task '" << tasks[taskNumber - 1].description << "' marked as completed." << endl;
        } else {
            cout << "Invalid task number." << endl;
        }
    }

    void viewTasks() const {
        if (tasks.empty()) {
            cout << "No tasks in the list." << endl;
        } else {
            for (int i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i].description
                     << " - " << (tasks[i].completed ? "Completed" : "Not Completed") << endl;
            }
        }
    }
};

int main() {
    ToDoList todoList;
    int choice;

    do {
        cout << "\nTo-Do List Menu:\n";
        cout << "1. Add Task\n";
        cout << "2. Mark Task as Completed\n";
        cout << "3. View Tasks\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter task description: ";
                cin.ignore(); // to handle leftover newline character from cin
                string taskDesc;
                getline(cin, taskDesc);
                todoList.addTask(taskDesc);
                break;
            }
            case 2: {
                todoList.viewTasks();
                cout << "Enter task number to mark as completed: ";
                int taskNumber;
                cin >> taskNumber;
                todoList.markCompleted(taskNumber);
                break;
            }
            case 3: {
                todoList.viewTasks();
                break;
            }
            case 4:
                cout << "Exiting the application." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
