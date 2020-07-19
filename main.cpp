//C++ I Final Spring 2019

#include<iostream>
#include<fstream> // file <fstream> contains all the declarations necessary for file operations
using namespace std;

int main()
{
    
    
    ifstream inputFile;//defines an ifstream object named inputFile
    int number;//number is read current loop in file
    int count=0;//initilize number of numbers, count equals 0
    double sum=0;//initialize sum of numbers
    double ave;//define average of numbers
    
    
    //open the file
    inputFile.open("Random.txt");
    
    //if the file succesfully opened, process it
    
    if(inputFile)
    {
        //read the numbers from the file
        while(inputFile >> number)
        {
            cout<<number<<endl;//display each number in txt file
            count=count+1;//add 1 on count to count how many numbers in txt file
            sum=sum+number;//add each number into sum
        
        }
        
        //close the file;
        
        inputFile.close();
    }
    else
    {
        //display an error message
        cout<<"Error opening the file. \n";
        
        
    }
    ave=sum/count;//calculate average equals sum divide by final count
    cout<<"There are "<<count<<" numbers.\n";//display the total number of numbers
    cout<<"The sum is "<<sum<<".\n";//display the sum of numbers in file
    cout<<"The average of numbers is "<<ave<<".\n";//display the average of the numbers in file
    
    return 0;
    
}


