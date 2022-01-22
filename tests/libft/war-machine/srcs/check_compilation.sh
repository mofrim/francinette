# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    check_compilation.sh                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsoares- <fsoares-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/23 18:26:19 by jtoty             #+#    #+#              #
#    Updated: 2022/01/22 15:39:13 by fsoares-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

compilation()
{
	if [ -e "${PATH_TEST}"/user_exe ]
	then
		rm -f "${PATH_TEST}"/user_exe
	fi
	printf "$> clang -Wextra -Wall -Werror -g3 -fsanitize=address $1 main.c libft.a -o user_exe\n\n" >> "${PATH_DEEPTHOUGHT}"/deepthought
	clang -Wextra -Wall -Werror -g3 -fsanitize=address \
		  "${PATH_TEST}"/tests/$(echo ${part}tions)/$(echo $1 | cut -d . -f 1 | sed 's/_bonus//g')/main.c \
		  -I "${PATH_LIBFT}"/${HEADER_DIR}/ \
		  "${PATH_TEST}"/dirlibft/libft.a 2>>"${PATH_DEEPTHOUGHT}"/deepthought -o user_exe
}

check_compilation()
{
	#printf "\033[${COMPIL_COL}G"
	if [ -e "${PATH_TEST}"/user_exe ]
	then
	#	printf "${COLOR_OK}success${DEFAULT}"
		retvalue=1
	else
	#	printf "${COLOR_FAIL}failure${DEFAULT}"
		retvalue=0
	fi
	return $retvalue
}
