
/*������� �������� ������. �������� � �������� ��������� �������� ���������.
���� ������ ���������� - ���������� ������, � ��������� ������ - ����*/
bool isWon(int);

/*������ ���������� ��������� �������� 6-� ������� �����. ���������� �������� ����� �� 1 �� 6*/
int generateDiceValues();

/*������ ��������� ������ n-�� ����������� ��������� �������� 6-� ������� �����. 
�������� � �������� ��������� ��������� �� ������, ���������� ���������������� ������ � ������� ��������� ��������� �����*/
void fillRandomDices(int*, int, int (*)());

/*������� ������� �� ������ ������ ������. 
�������� � �������� ��������� ��������� �� ������ ������ � ���������� ���������������� ������*/
void printDices(int*, int);

/*������� ��������� ������ ��������� ������� ������ � ���������� �� ����������.
�������� � �������� ��������� ��������� �� ���������� �������������� ������ � ��������� �� ������ ��������� ������*/
void playerMove(int*, int*);

/*������� �������� ��� ���������� ���� �����.
�������� � �������� ��������� ��������� �� ���������� �������������� ������ � ��������� �� ������ ���-�� ������ ������� �������*/
void botMove(int*, int*);

/*������� ���������� ��� ����� ��� ���������.
�������� � �������� ��������� ��������� �� ������ ��������� ������ � ���������� ���������������� ������*/
void selectAllDice(int*, int);

/*������� ���������� � ������ ���������� ������ ������� ��������.
�������� � �������� ��������� ��������� �� ������ ��������� ������,
��������� �� ������ ���� ��������������� ������ � ��������� �� ������ ��������������� ������*/
void sortByQuantity(int*, int*, int*);

/*������� ������� ����� ��������� ������.
�������� � �������� ��������� ��������� �� ������ ���-�� ������ ������� �������� � ��������� �� ���������� ��� ������ �����*/
void calculateTheSum(int*, int*);

/*������� ������������ ������� ������ � ����������� ������ ��� ��� ����������.
�������� � �������� ��������� ��������� �� �����, ��������� �� ���-�� ��������� ������,
��������� �� �������� ��������� ������ � ���������� ����� ������*/
int playersRoundResult(int*, int*, int*);

/*������� ������������ ������� ���� � ����������� ������ ��� ��� ����������.
�������� � �������� ��������� ��������� �� �����, ��������� �� ���-�� ��������� ������,
��������� �� �������� ��������� ���� � ���������� ����� ����*/
int botRoundResult(int*, int*, int*);
