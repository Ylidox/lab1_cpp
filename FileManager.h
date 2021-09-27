#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include "files.h"

using namespace std;

class FileManager
{
private:
	string path;
public:
	FileManager() : path("data.txt") {}

	FileManager(string path) {
		this->path = path;
	}
	
	void addRecord(string record) {
		ofstream out( path, ios::app);
		if (out.is_open())
		{
			out << record << endl;
		}
		out.close();
	}
};

