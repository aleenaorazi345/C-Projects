//#include<iostream>
//using namespace std;
//char** NameInput(int CourseNo) {
//	char** CourseName = new char* [CourseNo + 1];
//	for (int i = 0; i < CourseNo; i++) {
//		CourseName[i] = new char[100];
//	}
//
//	cout << "Enter name of each course:\n";
//
//	for (int i = 0; i < CourseNo; i++) {
//
//		cout << "Course " << i + 1 << ": ";
//		cin.ignore();
//		cin.getline(CourseName[i], 100);
//
//	}
//	return CourseName;
//}
//float* GradeInput( int CourseNo) {
//	float* Grades = new float[CourseNo];
//	cout << "Enter grade points earned in each course:\n";
//	for (int i = 0;i < CourseNo;i++) {
//		cin >> Grades[i];
//	}
//	return Grades;
//}
//int* CrdInput( int CourseNo) {
//	int* Crd= new int[CourseNo];
//	cout << "Enter Credit Hour of each course:\n";
//	for (int i = 0;i < CourseNo;i++) {
//		cin >> Crd[i];
//	}
//	return Crd;
//}
//void OutputData(char** CourseName, float* Grades, int* CrdHr, int CourseNo) {
//	for (int i = 0;i < CourseNo;i++) {
//		fflush(stdin);
//		cout << CourseName[i] << " GRADE POINTS: " << Grades[i] << " CREDIT HOUR:" << CrdHr[i] << "\n";
//
//	}
//}
//void CalculateGPA(int CourseNo, float* Grades, int* CrdHr) {
//	int Gradesum = 0, Crdsum = 0;
//	float CGPA = 0;
//	//calcualte gpa according to each grade lets use switch staement
//	for (int i = 0;i < CourseNo;i++) {
//		Gradesum += Grades[i];
//		Crdsum += CrdHr[i];
//	}
//	cout << Gradesum << Crdsum;
//	//using the formula to calculate the result
//	CGPA = (float)(Gradesum / Crdsum);
//	cout << "The CGPA for the given semester is " << CGPA;
//}
//int main() {
//	int CourseNo = 0;
//	cout << "CGPA CALCULATOR!\n";
//	cout << "enter number of courses taken?\n";
//	cin >> CourseNo;
//	
//
//	char** CourseNameReturened = NameInput( CourseNo);
//
//	float* GradePoints = GradeInput( CourseNo);
//
//	int* CrdReturned = CrdInput( CourseNo);
//	
//	OutputData(CourseNameReturened, GradePoints, CrdReturned, CourseNo);
//	
//	CalculateGPA(CourseNo, GradePoints, CrdReturned);
//	
//	delete[] CourseNameReturened;
//	delete[] GradePoints;
//	delete[] CrdReturned;
//
//
//	system("pause");
//	return 0;
//}
