# To-do-list
A simple console-based To-Do-List application written in C++.The program allows users to add, remove and display tasks and stores them in a text file (ToDo.txt)

# Features
- **Add a new task**: You can add a new task along with a description.
- **Remove a task**: You can remove an existing task from the list by its number.
- **View all tasks**: You can view all tasks and their descriptions.

# How to use 
## Requirements
- **C++ Compiler** (e.g., GCC, Clang, Visual C++).
- A terminal or command-line interface to run the program.

- **Download and install Visual Studio** if you don't have it already. You can download it from [Visual Studio's official website](https://visualstudio.microsoft.com/).
    
- **Open the project in Visual Studio**:
    - Launch Visual Studio.
    - Click on **"Open a project or solution"**.
    - Navigate to the folder where you cloned the repository and select **`ToDoList.cpp`**.
    
- **Create a new project** (if needed): If you're prompted to create a new project, do the following
    - Click **Create a new project**.
    - Choose **Console App** from the available project types.
    - Make sure **C++** is selected as the language.
    - Name the project (e.g., `ToDoListApp`), and choose a location.
    - Click **Create**.
    - or run the "To Do List.sln" using visual studio
    
- **Add `ToDoList.cpp` to the project**:
    - Right-click on the **Source Files** folder in the **Solution Explorer** panel.
    - Click **Add > Existing Item...** and select `ToDoList.cpp`.
    
- **Build and Run the Program**:
    - Click on **Build > Build Solution** or press `Ctrl+Shift+B` to compile the project.
    - Click on **Debug > Start Without Debugging** or press `Ctrl+F5` to run the program.
    - The program should open in the **Console Window**, and you will see the menu to add, remove, or view tasks.
    
- **Follow the on-screen prompts** to add, remove, or view tasks.
	

## Program Menu
Once you run the program, you'll be presented with the following menu options:
1. **Add task** – Add a new task to the to-do list.
2. **Remove task** – Remove a task by selecting its corresponding number.
3. **View tasks** – Display all tasks currently saved in the list.
4. **Exit** – Exit the program.

## File Structure

- **ToDoList.cpp**: The main C++ source file containing the logic for adding, removing, and displaying tasks.
- **ToDo.txt**: A text file where tasks and their descriptions are stored. It is created automatically when you add tasks.
