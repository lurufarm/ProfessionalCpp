//import <iostream>;
//import <format>;
//import <array>; // 1.1.15 array
//import <utility>; // 1.1.17 pair
//import <optional>; // 1.1.18 optional

//import employee; // 1.1.7 Struct

//using namespace std;

// 1.1.18 std::optional
//optional<int> getData(bool giveIt)
//{
//	if (giveIt)
//		return 42;
//
//	return nullopt; // È¤Àº return {};
//}

//int main()
//{
	// 1.1.7 Struct
	//Employee anEmployee = {};
	//anEmployee.firstInitial = 'J';
	//anEmployee.lastInitial = 'D';
	//anEmployee.employeeNumber = 42;
	//anEmployee.salary = 80000;
	//cout << format("Employee:{}{}", anEmployee.firstInitial, anEmployee.lastInitial) << endl;
	//cout << format("Number:{}", anEmployee.employeeNumber) << endl;
	//cout << format("salary: ${}", anEmployee.salary) << endl;
	//

	// 1.1.15 std::array
	//array <int, 3> arr;
	//arr = { 9, 8, 7 };
	//cout << format("Array size = {}", arr.size()) << endl;
	//cout << format("2nd element = {}", arr[1]) << endl;
	//array arr2{ 1,2,3 };
	//

	// 1.1.17 std::pair
	//pair<double, int> myPair{ 1.23, 5 };
	//cout << format("{}, {}", myPair.first, myPair.second);
	//

	// 1.1.18 std::optional
	//optional<int> data1{ getData(true) };
	//optional<int> data2{ getData(false) };
	//cout << "data1.has_value = " << data1.has_value() << endl;
	//if (data2)
	//	cout << "data has a value." << endl;
	//cout << "data1.value = " << data1.value() << endl;
	//cout << "data1.value = " << *data1 << endl;
	//cout << "data2.value = " << data2.value_or(0) << endl;
	//
//}

