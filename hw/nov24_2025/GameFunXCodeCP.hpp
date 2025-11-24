
#include <iostream>
using namespace std;
int NewResource=1000;
int Level=1;		//µ•Ø≈
int Resource=100;	//∏Í∑Ω
int	Experience=0;	//∏g≈Á
int Power=100;		//≈ÈØ‡
int Force=10;		//ß¿ª§O
int Defence=100;	//®æøm§O
int	En_Force=30;		//ºƒ§Ëß¿ª§O
int	En_Defence=100; 	//ºƒ§Ë®æøm§O

void Menu()
{
	system("cls");
	cout << "µ•Ø≈=" << Level << ", ≈ÈØ‡=" << Power;
	cout << ", ∏g≈Á=" << Experience << ", ∏Í∑Ω=" << Resource << ", ©“≥—∏Í∑Ω=" << NewResource<<endl;
	cout << "ß¿ª§O=" << Force << ", ®æøm§O=" << Defence << endl;
	cout << "ºƒ§Ëß¿ª§O=" << En_Force << ", ºƒ§Ë®æøm§O=" << En_Defence << endl;
	cout << endl<<endl;
	cout << "1. ¶¨∂∞∏Í∑Ω.\n";
	cout << "2. ±j§∆.\n";
	cout << "3. ß¿ª.\n";
	cout << "Esc. µ≤ßÙπC¿∏.\n";
}

void GetResource()
{
	if (NewResource>=10){
		Resource+=10;
		NewResource-=10;
	}
}

void Enhance()
{
if (Resource>=10){
					Resource-=10;
					Power+=10;
					Force += 1;
					Defence += 10;
					/*if (Power%100==0) {
						Level++;
						Force*=2;
						Defence *=2;
					}*/
				}
}

bool Attack()
{
	if (Power>=10){
		Power -= 10;
		Defence -= En_Force;
		En_Defence -= Force;
		if (Defence <= 0){
			system("cls");
			cout << "Game Over" << endl;
			return false;
		}
		else{
			Experience +=  10;
			if (Experience%100 == 0){
				Level++;
				Force+=Level;
				Defence +=Level*10;
			}
		}
	}
	else{
		cout << "\n≈È§O§£®¨!!!\n";
		getch(); // breaks
	}
	return true;
}

void FindNewResource(int p) {
   if (rand()%100 <= p) {
       int randomNumber = (rand()%10+1)*100;
       cout << "**** Find New Resource " << randomNumber << "****\n";
       sleep(20*1000);
       NewResource += randomNumber;
   }
}
