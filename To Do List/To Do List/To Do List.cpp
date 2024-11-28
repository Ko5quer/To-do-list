// To Do List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;


//declaring functions
void addTask();
void removeTask();
void displayTask();
void displayMenu();


int main()
{
	int choice;
	do
	{
		displayMenu();
		cout << "Pick an option: ";
		cin >> choice;
		switch (choice)
		{
		case 1:addTask();
			break;
		case 2:removeTask();
			break;
		case 3:displayTask();
			break;
		case 4:cout << "Exiting program and goodbye" << endl;
			break;
		default: cout << "Please pick a number between 1 and 4" << endl;
			break;
		}
	} while (choice != 4);

}

void addTask()
{
	//declare variables
	string task, description;

	cin.clear();
	cin.ignore();


	//Get user input
	cout << "What task would you like to add: ";
	getline(cin, task);
	cout << "Give a description of the task: ";
	getline(cin, description);

	//Store user input in a file
	ofstream to_do("ToDo.txt",ios::app);
	if (to_do.is_open())
	{
		to_do << task << ", ";
		to_do << description << endl;
		to_do.close();
	}
	else
	{
		cout << "file failed to open" << endl;
	}
}

void removeTask()
{
	cout << "\n*****Removing task*****" << endl;
	//declare variables
	int remove;
	string line, item;
	int k = 1;
	string task[200];
	string descr[200];
	int num_of_items = 1;

	displayTask();
	//Get user input

	cout << "Enter the task number you would like to remove: ";
	cin >> remove;

	ifstream file("ToDo.txt");
	if (not file.is_open())
	{
		cout << "file failed to open" << endl;
	}
	while(getline(file, line))
	{
		int i= 1;
		stringstream seperate(line);
		while (getline(seperate, item, ','))
		{
			if (i == 1)
			{
				task[num_of_items] = item;
			}
			else if(i==2)
			{
				descr[num_of_items] = item;
			}
			i++;
		}
		num_of_items++;
	}
	file.close();

	ofstream myfile("ToDo.txt");
	if (myfile.is_open() and remove <= num_of_items)
	{
		for (int i = 1; i < num_of_items; i++)
		{
			if (i != remove)
			{
				myfile << task[i] << ", " << descr[i] << endl;
			}
		}
		cout << "Task removed succesfully" << endl;
		myfile.close();
	}
	
}

void displayTask()
{
	cout << "\n*****Viewing tasks*****" << endl;
	//declaring variables
	string line;
	int count = 1;

	ifstream file("ToDo.txt");
	if (not file.is_open())
	{
		cout << "Failed to display results" << endl;
	}
	while (getline(file, line))
	{
		int k = 1;
		string items;
		stringstream seperate(line);
		while (getline(seperate,items,','))
		{
			if (k == 1)
			{
				cout << count<<".\tTask: " << items << endl;;
			}
			else if (k == 2)
			{
				cout << "\tDescription: " << items << "\n\n";
			}
			k++;
		}
		count++;
	}
}

void displayMenu()
{
	cout << "******To Do List*****" << endl;
	cout << "1.Add task" << endl;
	cout << "2.Remove task" << endl;
	cout << "3.View task" << endl;
	cout << "4.Exit" << endl;
}