#include <iostream>
#include <string>
#include <string.h>
#include <bits/stdc++.h>
#include <vector>
#include <thread>
#include <chrono>
using std::this_thread::sleep_for;
using namespace std;
// THIS IS WATERMARK BY DARK_MEPHISTO/ANDIKA :)
void LoadingFunction(string loading_)
{
    cout << loading_;
    sleep_for(1000ms);
    cout << ".";
    sleep_for(1000ms);
    cout << ".";
    sleep_for(1000ms);
    cout << ".";
    sleep_for(1000ms);
    cout << " Ok";
    sleep_for(1000ms);
    cout << endl;
}
void LoadingFunction_2(string loading_2)
{
    cout << loading_2;
    sleep_for(1000ms);
    cout << ".";
    sleep_for(1000ms);
    cout << ".";
    sleep_for(1000ms);
    cout << ".";
    sleep_for(1000ms);
    cout << endl;
}
void LoadingFunction_3(string loading_3)
{
    cout << loading_3;
    sleep_for(1000ms);
    cout << ".";
    sleep_for(1000ms);
    cout << ".";
    sleep_for(1000ms);
    cout << ".";
    sleep_for(1000ms);
}
string answer;
string name;

int main()
{
    cout << "A Cautionary Tale \n";
    sleep_for(1500ms);
    cout << "One David Martinez Ignored \n";
    sleep_for(1500ms);
    cout << "Will you? \n";
    sleep_for(1500ms);
    cout << "Type Y/N to Continue \n";
    cin >> answer;
    if (answer == "Y")
    {
        sleep_for(2000ms);
        cout << "Then Lets begin \n";
        sleep_for(1000ms);
        cout << "What's Your Name \n";
        cin.ignore();
        getline(cin, name);
        LoadingFunction("Checking authority");
        LoadingFunction("Initializing system");
        LoadingFunction("Optimizing system");
        LoadingFunction("Checking data");
        LoadingFunction("Accessing data");
        LoadingFunction("Synchronizing data");
        LoadingFunction("Starting server");
        LoadingFunction("System is starting");
        LoadingFunction_3("Terra_Brain is");
        sleep_for(1000ms);
        cout << " Starting";
        sleep_for(1000ms);
        cout << ".";
        sleep_for(1000ms);
        cout << ".";
        sleep_for(1000ms);
        cout << ".";
        sleep_for(1000ms);
        cout << endl;
        LoadingFunction_3("Terra");
        sleep_for(1000ms);
        cout << " Server";
        sleep_for(1000ms);
        cout << ".";
        sleep_for(1000ms);
        cout << ".";
        sleep_for(1000ms);
        cout << ".";
        sleep_for(1000ms);
        cout << endl;
        LoadingFunction_2("Activated");
        sleep_for(1000ms);
        cout << "Welcome to Cyberpunk ";
        cout << name << endl;
        system("Pause");
    }
    else if (answer == "N")
    {
        cout << "You are still not ready for this \n";
        sleep_for(1500ms);
        LoadingFunction_3("Signing Out");
    }
    else
    {
        cout << "Wrong input \n";
        sleep_for(1500ms);
        LoadingFunction_2("Restarting");
        cout << endl;
        sleep_for(3000ms);
        return main();
    }
    return 0;
}