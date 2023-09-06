#include "main.h"
/**
 *handleError - handles errors
 *@message:message to display
 *@exitCode:exiting message
 */
void handleError(const char *message, int exitCode)
{
	/*Print the error message to the standard error*/
	dprintf(STDERR_FILENO, message, exitCode);

	/*Exit the program with the specified exit code*/
	exit(exitCode);
}
