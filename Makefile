##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## My_Sokoban
##

all:
	make -C ./generator/
	make -C ./solver/

clean:
	make clean -C ./generator/
	make clean -C ./solver/

fclean:
	make fclean -C ./generator/
	make fclean -C ./solver/

re:
	make re -C ./generator/
	make re -C ./solver/


tests_run:	$(OBJC)
			make -C ./lib/my
			gcc -o $(CRITERION) $(OBJC) $(CFLAGS) $(LE) $(CRIT)
			rm -f $(OBJC)
			rm -f ../lib/my/libmy.a
			rm -f lib/my/libmy.a
			./$(CRITERION)
