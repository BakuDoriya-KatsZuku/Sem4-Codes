// FCFS
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
};

bool compare(Process a, Process b)
{
	if (a.arrival == b.arrival)
	{
		return (a.id > b.id);
	}

	return a.arrival > b.arrival;
}

int32_t main(void)
{
	int n = 0;
	cout << "Number of Processes: ";
	cin >> n;
	Process a[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Process ID: ";
		cin >> a[i].id;
		cout << "Arrival Time: ";
		cin >> a[i].arrival;
		cout << "Burst Time: ";
		cin >> a[i].burst;
	}

	sort(a, a + n, compare);

	std::vector<int> v;
	int time = a[0].burst + a[0].arrival;
	a[0].completion = a[0].burst;
	a[0].turnaround = time;

	for (int i = 0; i < a[0].arrival; i++)
	{
		v.push_back(-1);
	}
	for (int i = a[0].arrival; i < time; i++)
	{
		v.push_back(a[0].id);
	}

	for (int i = 1; i < n; i++)
	{
		if (a[i].arrival < time)
		{
			a[i].wait = time - a[i].arrival;
		}

		for (int j = time; j < time + a[i].burst; i++)
		{
			v.push_back(a[i].id);
		}

		time += a[i].burst;
		a[i].completion = a[i].wait + a[i].burst;
		a[i].turnaround = time;
	}

	cout << setw(3) << "PID"
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