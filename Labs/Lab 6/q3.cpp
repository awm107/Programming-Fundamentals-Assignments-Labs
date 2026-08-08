#include<iostream>
using namespace std;
float g = 9.8;
float fallingDistance(float t)
{
	float d = 0.0;
	d = 0.5 * g * t * t;
	return d;
}
int main()
{
	int time = 1;
	float distance = 0.0;
	for (int i = 10; time <= i; time++)
	{
		distance = fallingDistance(time);
		cout << "The distance travelled at time " << time << " seconds is: " << distance << " meters." << endl;
	}
	system("pause");
	return 0;

}