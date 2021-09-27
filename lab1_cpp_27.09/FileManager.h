#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include "files.h"
#include <string>

using namespace std;

class FileManager
{
private:
	string path;
	
public:
	FileManager(){
		path = "data.txt";
	}

	FileManager(string path) {
		this->path = path;
	}

	void addRecord(string record) {
		ofstream out(path, ios::app);
		if (out.is_open())
		{
			out << record << endl;
		}
		out.close();
	}
	void addRecord(double record) {
		ofstream out(path, ios::app);
		if (out.is_open())
		{
			out << record << endl;
		}
		out.close();
	}

	void readFile(Mass& m, Energy& e, Velocity& v, Impulse& p, Force& f, Acceleration& a) {
		string line; 

		ifstream file(path); // окрываем файл для чтения
		if (file.is_open())
		{
			double x = 0;
			double y = 0;
			double z = 0;
			//while (getline(file, line))
			//{
			//	//std::cout << line << std::endl;
			//}
			// Mass
			getline(file, line);
			getline(file, line);
			x = stod(line);
			m.set(x);
			// Energy
			getline(file, line);
			getline(file, line);
			x = stod(line);
			e.set(x);
			// Velocity
			getline(file, line);
			getline(file, line);
			x = stod(line);
			getline(file, line);
			y = stod(line);
			getline(file, line);
			z = stod(line);
			v.setX(x); v.setY(y); v.setZ(z);
			// Impulse
			getline(file, line);
			getline(file, line);
			x = stod(line);
			getline(file, line);
			y = stod(line);
			getline(file, line);
			z = stod(line);
			p.setX(x); p.setY(y); p.setZ(z);
			// Forse
			getline(file, line);
			getline(file, line);
			x = stod(line);
			getline(file, line);
			y = stod(line);
			getline(file, line);
			z = stod(line);
			f.setX(x); f.setY(y); f.setZ(z);
			// Acceleration
			getline(file, line);
			getline(file, line);
			x = stod(line);
			getline(file, line);
			y = stod(line);
			getline(file, line);
			z = stod(line);
			a.setX(x); a.setY(y); v.setZ(z);
		}
		file.close();
	}

	void saveMass(const Mass& m) {
		addRecord("Mass");
		addRecord(m.get());
	}
	Mass getMass() {
		return *(new Mass());
	}
	~FileManager(){}
};
