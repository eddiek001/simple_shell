#include "eddieshell.h"
/**
 * eddie_findpath - function to find path
 * @eddiecmd: - input command to path
 *
 * Return: Null
 */

char *eddie_findpath(char *eddiecmd)
{
	char *annpathname = getenv("PATH");
	char *anntoken;
	char annpath_size[4000];

	anntoken = strtok(annpathname, ":");
	while (anntoken != NULL)
	{
		unsigned int eddiecmdlen = eddie_strlen(eddiecmd);
		unsigned int anntokenlen = eddie_strlen(anntoken);

		if (eddiecmdlen + anntokenlen + 2 <= 4000)
		{
			strcpy(annpath_size, anntoken);
			annpath_size[anntokenlen] = '/';
			strcpy(annpath_size + anntokenlen + 1, eddiecmd);
			if (access(annpath_size, X_OK) == 0)
				return (strdup(annpath_size));
		}
		anntoken = strtok(NULL, ":");
	}
	return (NULL);
}
