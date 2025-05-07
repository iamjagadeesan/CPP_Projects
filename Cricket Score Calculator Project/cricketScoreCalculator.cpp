#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

#define RED "\033[1;31m"
#define BLUE "\033[1;34m"
#define AQUA "\033[1;36m"
#define WHITE "\033[1;37m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[0;33m"
#define PURPLE "\033[1;35m"

void userinput();
void clear_line();
void clearspace();

int over, check, totalscore = 0, requiredtotalscore, wicket = 0, run, extra, firsthalfscore, target = 0;
float runrate, requiredrunrate;
string title = "WELCOME TO  CRICKET SCORE CALCULATOR",
       board = "\n\n\t\t\tZero\t   -\t0\n\t\t\tSingle\t   -\t1\n\t\t\tDouble\t   -\t2\n\t\t\tTriple\t   -\t3\n\t\t\tFour\t   -\t4\n\t\t\tFive\t   -\t5\n\t\t\tSix\t   -\t6\n\t\t\tWicket\t   -\t7\n\t\t\tWide\t   -\t8\n\t\t\tNo Ball\t   -\t9\n\n";
bool secondhalf = false;

int main() {
    system("cls");
    system("color 0f");
    // First Half
    cout << "\n\n\n\n\n\t\t" << AQUA;
    for (int i = 0; i < title.length(); ++i) {
        cout << title[i];
        Sleep(100);
    }
    Sleep(1000);
    system("cls");
    cout << "\n\t\t\t" << BLUE;
    for (int i = 12; i < title.length(); ++i)
        cout << title[i];
    cout << AQUA << board ;
    while(1){
    cout << YELLOW << "\t\t\tEnter how many overs : " << WHITE;
    cin >> over;
    if(over<=50)
    	break;
    else{
    	cout<< RED <<"\t\t\tEnter lesser than 50 overs\n";
    	Sleep(2000);
    	clear_line();
    	clear_line();
    	continue;
    }
	}
    clear_line();
    cout << PURPLE << "\t\t\t\tFIRST HALF" << "\n" << endl;
    userinput();
    cout << RED << "\n\t\t\t*** FIRST HALF END ***";
    Sleep(2000);
    system("cls");
    // Second Half
    secondhalf = true;
    target = totalscore;
    requiredrunrate = static_cast<float>(target) / over;
    runrate = 0;
    requiredtotalscore = totalscore;
    totalscore = 0;
    wicket = 0;
    system("cls");
    cout << "\n\t\t\t" << BLUE;
    for (int i = 12; i < title.length(); ++i)
        cout << title[i];
    cout << AQUA << board;
    cout << PURPLE << "\t\t\t\tSECOND HALF" << "\n" << endl;
    cout << RED << "\t\t\t\tTARGET : " << target << endl;
    userinput();
    if (totalscore < target) {
        system("cls");
        cout << GREEN << "\n\n\n\n\t\t\tTEAM 1 WON BY " << target - totalscore << " RUNS" << WHITE << endl;
    }
}

void clear_line() {
    cout << "\033[1A"; // Move cursor up
    cout << "\033[2K"; // Clear entire line
    cout << "\033[0G"; // Move cursor to the beginning of the line
}

void userinput() {
    int score[over][6];
    for (int i = 0; i < over; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (wicket == 10) {
                cout << RED << "\n\t\t\t*** ALL OUT ***\n";
                Sleep(2000);
                goto exit;
            }
            if (secondhalf)
                requiredrunrate = static_cast<float>(requiredtotalscore - totalscore) / (over - i);
            	runrate = static_cast<float>(totalscore) / (i + 1 + j / 6.0);
        reball:
            cout << GREEN << "\tTotal Score : " << totalscore << " / Wickets : " << wicket << "\n\tCurrent Runrate : " << fixed << setprecision(2) << runrate << " / Required Runrate : " << fixed << setprecision(2) << requiredrunrate << "\n" << endl;
            cout << YELLOW << "\tEnter " << i << " over " << j + 1 << " ball score: " << WHITE;
            cin >> run;
            switch (run) {
                case 0:
                    score[i][j] = run;
                    clearspace();
                    break;
                case 1:
                    score[i][j] = run;
                    totalscore += run;
                    clearspace();
                    break;
                case 2:
                    score[i][j] = run;
                    totalscore += run;
                    clearspace();
                    break;
                case 3:
                    score[i][j] = run;
                    totalscore += run;
                    clearspace();
                    break;
                case 4:
                    score[i][j] = run;
                    totalscore += run;
                    clearspace();
                    break;
                case 5:
                    score[i][j] = run;
                    totalscore += run;
                    clearspace();
                    break;
                case 6:
                    score[i][j] = run;
                    totalscore += run;
                    clearspace();
                    break;
                case 7:
                    wicket++;
                    clearspace();
                    break;
                case 8:
                    extra++;
                    totalscore++;
                    cout << "\n\t\t*** It's Wide ***\n";
                    clearspace();
                    clear_line();
                    clear_line();
                    goto reball;
                    break;
                case 9:
                    while (1) {
                        cout << "\n\t\tEnter the score : ";
                        cin >> run;
                        if (run <= 6)
                            break;
                        else
                        	clear_line();
                            clear_line();
                        continue;
                    }
                    extra += run;
                    totalscore += run;
                    cout << GREEN << "\n\t\t***\tIt's a FREE-HIT\t***\n";
                    Sleep(2000);
                    clearspace();
                    clearspace();
                    goto reball;
                    break;
                default:
                    cout << RED << "\n\t\t***\tEnter the correct value\t***\n";
                    Sleep(2000);
                    clearspace();
                    clear_line();
                    clear_line();
                    goto reball;
            }
            if (secondhalf && totalscore > target) {
                system("cls");
                cout << GREEN << "\n\n\n\n\t\t\tTEAM 2 Won the Match by " << 10 - wicket << " Wickets" << WHITE;
                exit(0);
            } else if (secondhalf && totalscore == target) {
                if (i == (over - 1) && j == 5) {
                    system("cls");
                    cout << RED << "\n\n\n\n\t\t\t\tMATCH TIE SUPER OVER" << WHITE;
                    exit(0);
                } else {
                    continue;
                }
            }
        }
    }
exit:
    cout << "";
}

void clearspace() {
    clear_line();
    clear_line();
    clear_line();
    clear_line();
}
