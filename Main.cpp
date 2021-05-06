int main(int argc, char *argv[]){
    // Load songs from input directory into Library
    string input_dir_name;
	string working_dir_name;
	cout << argc << endl;

	if (argc < 2){
		cout << "Error: At least one command-line argument needs to be provided." << endl;
		return 0;
	}

	if (argv[2] == ""){
		cout << "Working Directory Name is empty." << endl;
        input_dir_name = argv[1];
		working_dir_name = input_dir_name;
		cout << "Set working directory to inputted directory" << endl;
		return 0;
	}
	else{
		input_dir_name = argv[1];
		working_dir_name = argv[2];
	}
}