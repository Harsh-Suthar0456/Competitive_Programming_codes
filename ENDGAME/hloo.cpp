#include <cstring>
#include <iomanip>
#include <iostream>

using namespace std;

class StudentData {
public:
  char name[32];
  char entryNumber[15];
  char email[32];
};

class StudentAttendanceRecord : public StudentData {
public:
  int numberOfDays;
  int attendance[100]; // the ith entry will be either 0/1 indicating whether
                       // the student was present or absent on the ith day
                       // (0-indexed)
  // TODO: Complete this method to calculate mean attendance (b/w 0 and 1)
  float calc_meanAttendance() {
    float I = 0;
    for(int i=0;i<numberOfDays;i++){
        I=I+attendance[i];
        
    }
    return (I/numberOfDays);
    
  }
};

class StudentGradeRecord : public StudentData {
public:
  int grade[50]; // the ith value indicates the grade out of 10 in the ith
                 // course (0-indexed)
  int numberOfCourses;

  // TODO: Complete this method to calculate CGPA b/w 0 and 10 as a float
  float calc_cgpa() {
    float sum=0;
    for(int i=0;i<numberOfCourses;i++){
        sum += grade[i];
    }
    return (sum/numberOfCourses)
    // Implement the logic here

    
    
    
     return 0;// Placeholder return
  }
};

int main() {
  StudentAttendanceRecord sar;
  StudentGradeRecord sgr;

  cin.getline(sar.name, 32);
  cin.getline(sar.email, 32);
  cin.getline(sar.entryNumber, 15);

  strcpy(sgr.name, sar.name);
  strcpy(sgr.email, sar.email);
  strcpy(sgr.entryNumber, sar.entryNumber);

  cin >> sar.numberOfDays;
  cin >> sgr.numberOfCourses;

  for (int i = 0; i < sar.numberOfDays; i++)
    cin >> sar.attendance[i];

  for (int i = 0; i < sgr.numberOfCourses; i++)
    cin >> sgr.grade[i];

  // Calculate and display the results
  cout << setprecision(4) << "Mean Attendance: " << sar.calc_meanAttendance()
       << endl;
  cout << setprecision(4) << "Calculated CGPA: " << sgr.calc_cgpa() << endl;

  return 0;
}