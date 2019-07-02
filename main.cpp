#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm> 
#include <iomanip>
#include <limits>
#include <array>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, 
system("pause") or input loop */

int solveMeFirst(int a, int b) {
    // Hint: Type return a+b; below
    return a + b;
  
}

void solveMeFirst_function() {
    cout<<"enter two number to perform addition...."<<endl;
	int num1, num2;
    int sum;
    cin>>num1>>num2;
    sum = solveMeFirst(num1,num2);
    cout<< num1 << " plus " << num2 << " equals ";
    cout<<sum<< endl;
}

void read_input_and_write_output(){
	cout<<"enter a string literal to see its output...."<< endl;
	// Declare a variable named 'input_string' to hold our input.
    string input_string; 
    
    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    getline(cin, input_string); 
    //cin>>input_string;
    
    // Print a string literal saying "Hello, World." to stdout using cout.
    cout << "Hello, World." << endl;

    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    cout << "you entered [ " << input_string << " ]"<< endl;
}

void data_types_function(){
	int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    // Read and save an integer, double, and String to your variables. 
    cout << "enter one integer to perform addition with " <<  i <<  "...." << endl;
	int int1 = 0;
	cin>>int1;
    // Print the sum of both integer variables on a new line.
    int _sum_int = i + int1;
    cout << i <<  " plus " <<  int1 <<  " equals " <<  _sum_int << endl; 
    cout << "enter one double to perform addition with " << d << "..." << endl;
	double double1 = 0.0;
	cin>>double1;
    // Print the sum of the double variables on a new line.
    double _sum_double = d + double1;
    cout << d << " plus " << double1 << " equals " << _sum_double << endl; 
    cout << "enter string to perform concatenation..." << endl;
	string string1 = "";
	cin>>string1;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << string1 << endl; 
}

vector<string> split_string(string input_string) {
//    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
//        return x == y and x == ' ';
//    });
//
//    input_string.erase(new_end, input_string.end());

//    while (input_string[input_string.length() - 1] == ' ') {
//        input_string.pop_back();
//    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

int int_from( std::istream& in ) { 
	int x = 0; 
	in >> x; 
	return x; 
}

void sum_arrays_fucntion(){
	cout<<"enter the array size"<<endl;
   int ar_count;
    cin >> ar_count;
//    cout<<"enter space-separated integers representing the array's elements"<<endl;
    cout<<"enter integers representing the array's elements"<<endl;
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');

	vector<int> a; // Å© Zero size by default.
	while( cin )
	{
		cout << "One number, please, or indicate EOF: ";
		int x = int_from( cin );
		if(!cin.fail()) { 
			a.push_back( x ); 
		} // Expands as necessary.
	}

//    string ar_temp_temp;
//    getline(cin, ar_temp_temp);

//    vector<string> ar_temp = split_string(ar_temp_temp);

//    vector<int> ar(ar_count);

//    for (int ar_itr = 0; ar_itr < ar_count; ar_itr++) {
//        int ar_item = stoi(ar_temp[ar_itr]);
//        string ar_item = ar_temp[ar_itr];
//        ar[ar_itr] = ar_item;
//    }

	int sum = 0;
	string str_arr = "";
	int count = 0;
	
	// You can use `sizeof` to determine how many elements are in an array.
//	const int* first = ar;
//	const int* afterLast = first + sizeof(ar) / sizeof(ar[0]);

//	for (const int* i = first; i < afterLast; ++i) {
//		std::cout << *i << std::endl;
//	}
//	int arr_size = sizeof(ar) / sizeof(ar[0]);
//	for(int i = 0; i < ar.size(); i++){
//	sum += ar[i];
//	count++;
//	if(count == arr_size){
//		str_arr += "[" + ar[i] + "]";
//	}else{
//		str_arr += "[" + ar[i] + "] + ";
//	}
//	}

	int arr_size = a.size();
	for( int i = 0; i < arr_size; ++i ) { 
		cout << a[i] << ' '; 
		sum += a[i];
		count++;
		if(count == arr_size){
			str_arr.append('[' + a[i] + ']');
		}else{
			str_arr.append('[' + a[i] + ']');
		}
	}
	cout << '\n';

	cout << str_arr<< " equals " << sum << endl; 
 }
 
int main(int argc, char** argv) {
	cout<<"hacker rank in c++ <<<<<<<<<<!!!!!!!!!!!!>>>>>>>>>>>"<<endl;
	solveMeFirst_function();
	read_input_and_write_output();
	sum_arrays_fucntion();
    return 0;
}



