#include <stdio.h>
#include <stdlib.h>

int main( void ){
	FILE *file = fopen( "swb.html", "w");
	char *urlImage = "britney-spears-loves-30s.jpg";
	int i;

	fprintf(file, "<HTML><HEAD></HEAD>\n ");
	fprintf(file, "<body style='background: black;' leftmagin=0 topmargin=0>\n");
	fprintf(file, "<style>\n");
	fprintf(file, "pre{ color: white; font-family: Courier; font-size: 8px; }\n");
	fprintf(file, "</style>\n");
	for(int i = 0; i < 10; i++){
		fprintf(file, "<pre>%d. batatinha</pre>\n", i);
	}
	fprintf(file, "<img src=\'%s\'>\r\n", urlImage);
	fprintf(file, "</body>\n");
	fprintf(file, "</html>");
	fclose(file);

	return EXIT_SUCCESS;
}
