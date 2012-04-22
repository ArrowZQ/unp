#include "unp.h"

void str_echo(int sockfd)
{
    ssize_t n;

/* unpv3 figure5-3 */
/*     char buf[MAXLINE];
 * 
 * again:
 *     while ((n = read(sockfd, buf, MAXLINE)) > 0)
 *         Writen(sockfd, buf, n);
 * 
 *     if (n < 0 && errno == EINTR)
 *         goto again;
 *     else if (n < 0)
 *         err_sys("str_echo: read error");  */

/* unpv2 figure5-3 */
    char line[MAXLINE];
    for (;;)
    {
        if ((n == Readline(sockfd, line, MAXLINE)) == 0)
            return;
        Writen(sockfd, line, n);
    }
}

