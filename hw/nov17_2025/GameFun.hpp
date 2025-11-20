int NewResource=1000;
int Level=1;		//等級 
int Resource=100;	//資源 
int	Experience=0;	//經驗 
int Power=100;		//體能 
int Force=10;		//攻擊力 
int Defence=100;	//防禦力
int	En_Force=30;		//敵方攻擊力 
int	En_Defence=100; 	//敵方防禦力

void Menu()
{
	system("cls");
	cout << "等級=" << Level << ", 體能=" << Power;
	cout << ", 經驗=" << Experience << ", 資源=" << Resource << ", 所剩資源=" << NewResource<<endl;
	cout << "攻擊力=" << Force << ", 防禦力=" << Defence << endl;
	cout << "敵方攻擊力=" << En_Force << ", 敵方防禦力=" << En_Defence << endl;
	cout << endl<<endl;
	cout << "1. 收集資源.\n";
	cout << "2. 強化.\n";
	cout << "3. 攻擊.\n";
	cout << "Esc. 結束遊戲.\n";	
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
		cout << "\n體力不足!!!\n";
		getch();
	}
	return true;
}

