##
## EPITECH PROJECT, 2020
## B-CPE-210-MPL-2-1-solostumper05-hugo.gardes
## File description:
## Makefile
##

CC	=	gcc

NAMENM	=	panoramix

SRCNM		=	$(wildcard *.c)
SRCNM		+=	$(wildcard src/*.c)

OBJSNM	=	$(SRCNM:.c=.o)

RM	=	rm -f

CFLAGS	=	-W -Wall -Wextra -g3 -I./header -L./my_lib -lmy
CFLAGS	+=	-lpthread -I./my_lib/header

nm:	$(NAMENM)

$(NAMENM):	$(OBJSNM)
	make -C ./my_lib
	$(CC) -o $(NAMENM) $(OBJSNM) $(CFLAGS)

all:	nm

clean:
	make -C ./my_lib clean
	$(RM) $(OBJSNM)
	$(RM) *~
	$(RM) #*#

fclean:	clean
	make -C ./my_lib fclean
	$(RM) $(NAMENM)

re:	fclean all
