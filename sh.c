#include <stdio.h>
#include <signal.h>

void sigfunc(int sig) {
        printf("\tSignal %i ", sig);

        switch(sig)
        {
                case 1: printf("%s", "SIGHUP"); break;
                case 2: printf("%s", "SIGINT"); break;
                case 3: printf("%s", "SIGQUIT"); break;
                case 4: printf("%s", "SIGILL"); break;
                case 5: printf("%s", "SIGTRAP"); break;
                case 6: printf("%s", "SIGABRT"); break;
                case 8: printf("%s", "SIGFPE"); break;
                case 9: printf("%s", "SIGKILL"); break;
                case 10: printf("%s", "SIGBUS"); break;
                case 11: printf("%s", "SIGSEGV"); break;
                case 12: printf("%s", "SIGSYS"); break;
                case 13: printf("%s", "SIGPIPE"); break;
                case 14: printf("%s", "SIGALRM"); break;
                case 15: printf("%s", "SIGTERM"); break;
                case 16: printf("%s", "SIGUSR1"); break;
                case 17: printf("%s", "SIGUSR2"); break;
                case 18: printf("%s", "SIGCHLD"); break;
                case 20: printf("%s", "SIGTSTP"); break;
                case 21: printf("%s", "SIGURG"); break;
                case 22: printf("%s", "SIGPOLL"); break;
                case 23: printf("%s", "SIGSTOP"); break;
                case 25: printf("%s", "SIGCONT"); break;
                case 26: printf("%s", "SIGTTIN"); break;
                case 27: printf("%s", "SIGTTOU"); break;
                case 28: printf("%s", "SIGVTALRM"); break;
                case 29: printf("%s", "SIGPROF"); break;
                case 30: printf("%s", "SIGXCPU"); break;
                case 31: printf("%s", "SIGXFSZ"); break;
        }
        printf("\n");
        return;
}

int main() {
        signal(SIGHUP,sigfunc);
        signal(SIGINT,sigfunc);
        signal(SIGQUIT,sigfunc);
        signal(SIGILL,sigfunc);
        signal(SIGTRAP,sigfunc);
        signal(SIGABRT,sigfunc);
        signal(SIGFPE,sigfunc);
        signal(SIGKILL,sigfunc);
        signal(SIGBUS,sigfunc);
        signal(SIGSEGV,sigfunc);
        signal(SIGSYS,sigfunc);
        signal(SIGPIPE,sigfunc);
        signal(SIGALRM,sigfunc);
        signal(SIGTERM,sigfunc);
        signal(SIGUSR1,sigfunc);
        signal(SIGUSR2,sigfunc);
        signal(SIGCHLD,sigfunc);
        signal(SIGTSTP,sigfunc);
        signal(SIGURG,sigfunc);
        signal(SIGPOLL,sigfunc);
        signal(SIGSTOP,sigfunc);
        signal(SIGCONT,sigfunc);
        signal(SIGTTIN,sigfunc);
        signal(SIGTTOU,sigfunc);
        signal(SIGVTALRM,sigfunc);
        signal(SIGPROF,sigfunc);
        signal(SIGXCPU,sigfunc);
        signal(SIGXFSZ,sigfunc);
        printf("Start\n");
        while(1);
        return 0;
}
