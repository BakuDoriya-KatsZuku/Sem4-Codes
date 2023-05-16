// RR
#include <bits/stdc++.h>
using namespace std;

#define int long long

typedef struct Process
{
	int id = 0;
	int arrival = 0;
	int burst = 0;
	int turnaround = 0;
	int wait = 0;
	int completion = 0;
	int stop = 0;
	int tempb = 0;
};

bool compare(Process a, Process b)
{
	if (a.arrival == b.arrival)
	{
		return (a.id < b.id);
	}

	return (a.arrival < b.arrival);
}

int32_t main(void)
{
	int n = 0;
	cout << "Number of Processes: ";
	cin >> n;
	int quanta = 0;
	cout << "Time Quantum: ";
	cin >> quanta;
	Process a[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Process ID: ";
		cin >> a[i].id;
		cout << "Arrival Time: ";
		cin >> a[i].arrival;
		a[i].stop = a[i].arrival;
		cout << "Burst Time: ";
		cin >> a[i].burst;
		a[i].tempb = a[i].burst;
	}

	sort(a, a + n, compare);
	int time = 0;
	queue<Process> q;
	std::vector<Process> v;
	int count = 0;
	vector<int> gant;

	while (v.size() < n)
	{
		if (q.size() == 0)
		{
		    while (a[count].arrival <= time && count < n)
		    {
			    q.push(a[count]);
			    count++;
		    }
		}

		Process x = q.front();
		q.pop();
		if (x.tempb >= quanta)
		{
			for (int i = time; i < time + quanta; i++)
			{
				gant.push_back(x.id);
			}
			x.wait += time - x.stop;
			time += quanta;
			x.stop = time;
			x.tempb -= quanta;
			if (x.tempb == 0)
			{
			    x.completion = time;
			    x.turnaround = x.completion - x.wait;
				v.push_back(x);
			}
		}
		else
		{
			for (int i = time; i < time + x.tempb; i++)
			{
				gant.push_back(x.id);
			}
			x.wait += time - x.stop;
			time += x.tempb;
			x.completion = time;
			x.turnaround = x.completion - x.wait;
			x.tempb = 0;
			v.push_back(x);
		}
		
		while (a[count].arrival <= time && count < n)
	    {
		    q.push(a[count]);
		    count++;
	    }
	    if (x.tempb > 0)
		{
		    q.push(x);
		}
	}

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
    	cout << setw(3) << v[i].id
		     << setw(15) << v[i].arrival
		     << setw(13) << v[i].burst
		     << setw(12) << v[i].wait
		     << setw(18) << v[i].completion
		     << setw(18) << v[i].turnaround << "\n";

		avgtat += v[i].turnaround;
		avgwt += v[i].wait;
    }

    cout << "\nAverage Turnaround Time: " << (avgtat / n) << "\nAverage Wait Time: " << (avgwt / n) << "\n";

    n = gant.size();
    cout << "Gantt Chart\n";
    for (int i = 0; i < n; i++)
    {
    	cout << "| " << gant[i] << " |";
    }
}