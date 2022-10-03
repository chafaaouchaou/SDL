#include <stdio.h>
#include <SDL.h>

int main(int argc , char **argv) {
	printf("Hello World!\n");
	SDL_version nb;
	SDL_VERSION(&nb);
	printf("%d.%d.%d",nb.major,nb.minor,nb.patch);
	return 0;
}