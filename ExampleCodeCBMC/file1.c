int puts(const char* s)
{
}

int main(int argc, char** argv)
{
	puts(argv[2]);
	return 0;
}


/*
Commands checked against this file:
cbmc file1.c --show-properties --bounds-check --pointer-check
The two options --bounds-check and --pointer-check instruct CBMC to look for errors related to pointers and array bounds

*/