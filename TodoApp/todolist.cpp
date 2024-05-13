#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task
{
    string description;
    bool completed;
};

vector<Task> tasks;

void addTask()
{
    Task newTask;
    cout << "Enter task description: ";
    getline(cin, newTask.description);
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "Task added!" << endl;
}

void viewTasks()
{
    cout << "To-Do List:" << endl;
    for (int i = 0; i < tasks.size(); i++)
    {
        cout << "[" << (tasks[i].completed ? "X" : " ") << "] " << tasks[i].description << endl;
    }
}

void completeTask()
{
    int taskNumber;
    cout << "Enter task number to complete: ";
    cin >> taskNumber;
    if (taskNumber >= 1 && taskNumber <= tasks.size())
    {
        tasks[taskNumber - 1].completed = true;
        cout << "Task completed!" << endl;
    }
    else
    {
        cout << "Invalid task number." << endl;
    }
}

void deleteTask()
{
    int taskNumber;
    cout << "Enter task number to delete: ";
    cin >> taskNumber;
    if (taskNumber >= 1 && taskNumber <= tasks.size())
    {
        tasks.erase(tasks.begin() + taskNumber - 1);
        cout << "Task deleted!" << endl;
    }
    else
    {
        cout << "Invalid task number." << endl;
    }
}

int main()
{
    int choice;
    while (true)
    {
        cout << "To-Do List Menu:" << endl;
        cout << "1. Add task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Complete task" << endl;
        cout << "4. Delete task" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addTask();
            break;
        case 2:
            viewTasks();
            break;
        case 3:
            completeTask();
            break;
        case 4:
            deleteTask();
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice." << endl;
        }
    }
    return 0;
}