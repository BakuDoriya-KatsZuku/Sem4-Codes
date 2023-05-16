// SJF (Non Preemtive)
#include <bits/stdc++.h>
using namespace std;

#define int long long

typedef struct Process
{
	int id = 0;
	int arrival = 0;
	int burst = 0;
	int turnaround = 0;
	int completion = 0;
	int wait = 0;
	int over = 0;
};

bool compare(Process a, Process b)
{
	return a.turnaround < b.turnaround;
}

int32_t main(void)
{
	int n = 0;
	cout << "Number of Processes: ";
	cin >> n;
	Process a[n];
	int time = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		cout << "Process ID: ";
		cin >> a[i].id;
		cout << "Arrival Time: ";
		cin >> a[i].arrival;
		cout << "Burst Time: ";
		cin >> a[i].burst;
		if (a[i].arrival < time)
		{
			time = a[i].arrival;
		}
	}

	std::vector<int> v;
	for (int i = 0; i < time; i++)
	{
		v.push_back(-1);
	}

	int index = 0;
	int small = INT_MAX;
	for (int i = 0; i < n; i++)
	{
	    small = INT_MAX;
		for (int j = 0; j < n; j++)
		{
			if (a[j].arrival <= time && a[j].over == 0 && a[j].burst < small)
			{
				small = a[j].burst;
				index = j;
			}
		}

		if (a[index].arrival < time)
		{
			a[index].wait = time - a[index].arrival;
		}

		for (int j = time; j < time + a[i].burst; j++)
		{
			v.push_back(a[index].id);
		}

		time += a[index].burst;
		a[index].completion = a[index].wait + a[index].burst;
		a[index].turnaround = time;
		a[index].over = 1;
	}

	sort(a, a + n, compare);

	cout << setw(3) << "\n\nPID"
    	 << setw(15) << "Arrival Time"
         << setw(13) << "Burst Time"
         << setw(12) << "Wait Time"
         << setw(18) << "Completion Time"
         << setw(18) << "Turnaround Time\n";

    float avgtat = 0;
    float avgwt = 0;
    for (int i = 0; i < n; i++)
    {
    	cout << setw(3) << a[i].id
		     << setw(15) << a[i].arrival
		     << setw(13) << a[i].burst
		     << setw(12) << a[i].wait
		     << setw(18) << a[i].completion
		     << setw(18) << a[i].turnaround << "\n";

		avgtat += a[i].turnaround;
		avgwt += a[i].wait;
    }

    cout << "\nAverage Turnaround Time: " << (avgtat / n) << "\nAverage Wait Time: " << (avgwt / n) << "\n";

    n = v.size();
    cout << "Gantt Chart\n";
    for (int i = 0; i < n; i++)
    {
    	cout << "| " << v[i] << " |";
    }
}