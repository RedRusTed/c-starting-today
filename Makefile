foo: $(objects)
	gcc $(object).c -o -Wall -Wextra -Werror $(object)
