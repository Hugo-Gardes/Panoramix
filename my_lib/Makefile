##
## EPITECH PROJECT, 2020
## B-CPE-210-MPL-2-1-solostumper05-hugo.gardes
## File description:
## Makefile
##

CC	=	gcc

AR	=	ar

NAMENM	=	libmy.a

SRCNM		=	$(wildcard */*.c)
SRCNM		+=	$(wildcard */*/*/*.c)

OBJSNM	=	$(SRCNM:.c=.o)

RM	=	rm -f

CFLAGS	=	-W -Wall -Wextra

nm:	$(NAMENM)

$(NAMENM):	$(OBJSNM)
	$(AR) rsc $(NAMENM) $(OBJSNM)

all:	nm

clean:
	$(RM) $(OBJSNM)
	$(RM) *~
	$(RM) #*#

fclean:	clean
	$(RM) $(NAMENM)

re:	fclean all
