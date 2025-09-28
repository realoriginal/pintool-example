#include "Example.hpp"

int main(int argc, char** argv) {

	/* Initialize PIN's argv/argc */
	if (PIN_Init(argc, argv)) {
		/* Failed to initialize */
		return EXIT_FAILURE;
	}

	/* Initialize PIN Symbols */
	PIN_InitSymbols();

	/* Start the program */
	PIN_StartProgram();

	/* Return that the program initialized properly */
	return EXIT_SUCCESS;
}