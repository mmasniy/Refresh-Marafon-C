void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

static void sort_cmp(int argc, char **argv) {
	char *temp;
	for (int i = 1; i < argc; i++) {
		for (int j = 1; j < argc - 1; j++) {
			if (mx_strcmp(argv[j],argv[j + 1]) > 0) {
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
		}
	}
}

int main(int argc, char** argv){

	if (argc > 1) {
	
		sort_cmp(argc, argv);

		for (int i = 1; i < argc; i++) {
			mx_printstr(argv[i]);
			mx_printchar('\n');	
		}
	}
	return 0;
}
