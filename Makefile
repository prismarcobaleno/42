NAME		:= libft.a
CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror
SRCS		:= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			  ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_memset.c \
			  ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strchr.c \
			  ft_strrchr.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c \
			  ft_strdup.c ft_substr.c 
OBJS 		:= ${SRCS:.c=.o} 

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(NAME) # xke???
		$(CC) $(CFLAGS) -c $(SRCS)

clean :
		rm -f $(OBJS) 

re : fclean
		$(MAKE) all

fclean: clean
	rm -f $(NAME)

.PHONY: re clean

# ft_strrchr.c ft_memchr.c ft_memcmp.c  
#			  ft_substr.c 
#			  ft_strtrim.c 
#			  ft_split.c 
#			  ft_itoa.c 
#			  # ++ 

#• memset
#• bzero
#• memcpy
#• memmove
#• strlcpy
#• strlcat
#• strchr
#• strrchr
#• memchr
#• memcmp
#• strnstr
#• atoi
# con malloc():
#• calloc • strdup

#		  echo $@ # Outputs the target name: "all"
#         echo $^ # Outputs the prerequisites: Content of $(NAME)
#         echo $? # Outputs all prerequisites newer than target
