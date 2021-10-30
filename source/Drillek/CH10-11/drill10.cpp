#include "../std_lib_facilities.h"

struct Point
{
	int x;
	int y;
};

vector<Point> readVectorFromConsole(int number){
	vector<Point> vector_buffer;

	cout << "Please enter " << number << " (x,y) pairs: \n";

	int a,b,counter = 0;

	while(counter < number && cin >> a >> b){
		vector_buffer.push_back(Point{a,b});
		counter++;
	}

	cout << '\n';

	return vector_buffer;
}

void printVector(vector<Point>& dataholder ){
	cout << "This is how our vector looks like: \n";

	for(const auto& p : dataholder){
		cout << '(' << p.x << ',' << p.y << ")\n";
	}

	cout << "\n";
}

void printVector(vector<Point>& dataholder, vector<Point> dataholder2){
	cout << "First Vector: \n";

	for(const auto& p : dataholder){
		cout << '(' << p.x << ',' << p.y << ")\n";
	}

	cout << "\nSecond Vector: \n";

	for(const auto& p : dataholder2){
		cout << '(' << p.x << ',' << p.y << ")\n";
	}

	cout << "\n";
}

void writeVector(vector<Point>& dataholder, string filename){
	ofstream ost {filename};

	for(const auto& p : dataholder){
		ost << '(' << p.x << ',' << p.y << ")\n";
	}

	ost.close();
}

vector<Point> readVectorFromFile(string filename){
	vector<Point> vector_buffer;

	ifstream ifile {filename};

	if(!ifile) error("Can't open ifile ", filename);
	
	int x,y; 
	char a, b ,c;

	while(ifile >> a >> x >> b >> y >> c){
		vector_buffer.push_back(Point{x,y});
	}

	return vector_buffer;
}

bool compareVectors (vector<Point> vector_a, vector<Point> vector_b){
	//cout << "Size: vector_a: " << vector_a.size() << '\n';
	//cout << "Size: vector_b: " << vector_b.size() << '\n';

	if(vector_a.size() != vector_b.size()) {
		//error("Error in size.");
		return false;
	}

	for (int i = 0; i < vector_a.size(); ++i)
	{
		if(vector_a[i].x != vector_b[i].x){
			//error("Error mismatch in X value.");
			return false;
		}
		if(vector_a[i].y != vector_b[i].y){
			//error("Error mismatch in Y value.");
			return false;
		}
	}

	return true;
}

int main()
try{	

	vector<Point> original_points = readVectorFromConsole(7);

	printVector(original_points);
	writeVector(original_points, "mydata.txt");

	vector<Point> processed_points = readVectorFromFile("mydata.txt");

	printVector(original_points, processed_points);

	bool same = compareVectors(original_points, processed_points);
	if(!same) error("Something went wrong! :(");

	return 0;

} catch (runtime_error& e) {
	cerr << "Error: " << e.what() << '\n';
	return 1;
} catch (...){
	cerr << "Something went wrong.\n";
	return 2;
}