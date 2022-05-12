#include"game.h"

int keyControl() {
    char temp = getch();

    if (temp == 'w' || temp == 'W') {
        return UP;
    }
    else if (temp == 'a' || temp == "a") {
        return LEFT;
    }
    else if (temp == 's' || temp == 'S') {
        return DOWN;
    }
    else if (temp == 'd' || temp == 'D') {
        return RIGHT;
    }
    else if (temp == ' ') {
        return SUBMIT;
    }
}

void titleDraw() {
    printf("\n\n\n\n");
    printf("        #####   ###    ###    #     ####   ###### \n");
    printf("        #      #      #      # #    #   #  #      \n");
    printf("        #####  ####   #     #####   ####   ###### \n");
    printf("        #          #  #     #   #   #      #      \n");
    printf("        #####  ####    ###  #   #   #      ###### \n\n");
}

int menuDraw() {
    int x = 24;
    int y = 12;
    gotoxy(x - 2, y);
    printf("> ���ӽ���");
    gotoxy(x, y + 1);
    printf("��������");
    gotoxy(x, y + 2);
    printf("  ����  ");
    while (1) {
        int n = keyControl(); // Ű���� �̺�Ʈ�� Ű������ �޾ƿ���
        switch (n) {
        case UP: { //�Է¹��� Ű���� UP�� ��� (W)
            if (y > 12) {
                gotoxy(x - 2, y);
                printf(" ");
                gotoxy(x - 2, --y);
                printf(">");
            }
            break;
        }
        case DOWN: {
            if (y < 14) {
                gotoxy(x - 2, y);
                printf(" ");
                gotoxy(x - 2, ++y);
                printf(">");
            }
            break;
        }
        case SUBMIT: {
            return y - 12;
        }
        }
    }
}

void infoDraw() {
    system("cls");
    printf("\n\n");
    printf("                        [ ���۹� ]\n\n");
    printf("                    �̵� : W, A, S, D\n");
    printf("                    ���� : �����̽��� \n\n\n\n\n\n\n");
    printf("                     ������ : ������\n\n");
    printf("                �����ڷ� : genudong.dev\n\n");
    printf("         �����̽��ٸ� ������ ����ȭ������ ���ư��ϴ�.");

    while (1) {
        if (keyControl() == SUBMIT) {
            break;
        }
    }
}