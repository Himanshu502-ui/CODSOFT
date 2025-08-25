#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Task structure
struct Task {
    string description;
    bool completed;
};

// Functon declaration
void addTask(vector<Task> &tasks);
void viewTasks(const vector<Task> &tasks);
void markTaskCompleted(vector<Task> &tasks);
void removeTask(vector<Task> &tasks);

int main() {
    vector<Task> tasks;
    int choice;
 do {
     cout << "\n**** TO-DO LIST MANAGER ****\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
      cout << "4. Remove Task \n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                markTaskCompleted(tasks);
                break;
            case 4:
                removeTask(tasks);
                break;
            case 5:
                cout <<"ExitTo-Do List Manager. Goodbye!\n";
                break;
            default:
                cout <<"Invalid choice Please try again\n";
        }

    } while (choice != 5);

    return 0;
}

// Function  for adding a task
void addTask(vector<Task> &tasks) {
    Task newTask;
    cin.ignore(); // Clear input buffer
    cout << "Enter task description: ";
    getline(cin, newTask.description);
    newTask.completed = false;
  tasks.push_back(newTask);
    cout << "Task added successfully!\n";
}

// Function to view all tasks
void viewTasks(const vector<Task> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    cout << "\n--- To-Do List ---\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i].description
             << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]\n";
    }
}

// Function to mark a task as completed
void markTaskCompleted(vector<Task> &tasks) {
    int index;
    viewTasks(tasks);
    if (tasks.empty()) return;

    cout << "Enter task number to mark as completed: ";
    cin >> index;

    if (index < 1 || index > tasks.size()) {
        cout << "Invalid task number.\n";
    } else {
        tasks[index - 1].completed = true;
        cout << "Task marked as completed.\n";
    }
}

// Function to remove a task
void removeTask(vector<Task> &tasks) {
    int index;
    viewTasks(tasks);
    if (tasks.empty()) return;

    cout << "Enter task number to remove: ";
    cin >> index;

    if (index < 1 || index > tasks.size()) {
        cout << "Invalid task number.\n";
    } else {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task removed successfully.\n";
    }
}
