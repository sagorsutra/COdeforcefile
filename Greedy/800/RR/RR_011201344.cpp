 #include <bits/stdc++.h>

using namespace std;

class Process {
public:
    int id, burstTime, arrivalTime, startTime, finishTime, waitingTime, turnaroundTime, responseTime;
    Process(int _id, int _burstTime, int _arrivalTime) : id(_id), burstTime(_burstTime), arrivalTime(_arrivalTime) {
        startTime = finishTime = waitingTime = turnaroundTime = responseTime = 0;
    }
};

class RR {
private:
    int quantum;
    vector<Process> processes;
    queue<Process *> readyQueue;

public:
    RR(int _quantum) : quantum(_quantum) {}

    void gProcesses(float p, int n) {
        srand(time(NULL));
        int id = 1;
        bool generated = false;

        for (int i = 1; i <= 50; ++i) {
            float randProb = static_cast<float>(rand()) / RAND_MAX;
            if (randProb <= p) {
                int burstTime = rand() % (n) + 1;
                processes.emplace_back(id++, burstTime, i * 2);
                generated = true;
            }
        }

        
        if (!generated) {
            int burstTime = rand() % (n) + 1;
            processes.emplace_back(id++, burstTime, 2); 
        }
    }

    void runScheduler() {
        int currentTime = 0;
        while (!processes.empty() || !readyQueue.empty()) {
            while (!processes.empty() && processes.front().arrivalTime <= currentTime) {
                readyQueue.push(&processes.front());
                processes.erase(processes.begin());
            }

            if (!readyQueue.empty()) {
                Process *currentProcess = readyQueue.front();
                readyQueue.pop();
                if (currentProcess->responseTime == 0) {
                    currentProcess->responseTime = currentTime - currentProcess->arrivalTime;
                }
                currentProcess->startTime = currentTime;

                int remainingTime = min(quantum, currentProcess->burstTime);
                currentTime += remainingTime;
                currentProcess->burstTime -= remainingTime;

                if (currentProcess->burstTime == 0) {
                    currentProcess->finishTime = currentTime;
                    currentProcess->turnaroundTime = currentProcess->finishTime - currentProcess->arrivalTime;
                    currentProcess->waitingTime = currentProcess->turnaroundTime - currentProcess->burstTime; // Corrected this line
                } else {
                    readyQueue.push(currentProcess);
                }
            } else {
                currentTime++;
            }
        }
    }

    void printStatistics() {
       

        double avgTurnaroundTime = 0, avgWaitingTime = 0;
        int maxTurnaroundTime = 0, maxWaitingTime = 0, processWithMaxTurnaround = -1, processWithMaxWaiting = -1;

        for (const Process &process : processes) {
            avgTurnaroundTime += process.turnaroundTime;
            avgWaitingTime += process.waitingTime;

            if (process.turnaroundTime > maxTurnaroundTime) {
                maxTurnaroundTime = process.turnaroundTime;
                processWithMaxTurnaround = process.id;
            }

            if (process.waitingTime > maxWaitingTime) {
                maxWaitingTime = process.waitingTime;
                processWithMaxWaiting = process.id;
            }
        }

        int totalProcesses = processes.size();
        avgTurnaroundTime /= totalProcesses;
        avgWaitingTime /= totalProcesses;

        cout << "Avg Turnaround Time: " << avgTurnaroundTime << endl;
        cout << "Avg Waiting Time: " << avgWaitingTime << endl;
        cout << "Max Turnaround Time: " << maxTurnaroundTime << " (Process " << processWithMaxTurnaround << ")" << endl;
        cout << "Max Waiting Time: " << maxWaitingTime << " (Process " << processWithMaxWaiting << ")" << endl;
    }
};

int main() {
    float p;
    int n, l;
    cout << "probality: ";
    cin >> p;
    cout << "burst time n: ";
    cin >> n;
    cout << "quantum l: ";
    cin >> l;

    RR scheduler(l);
    scheduler.gProcesses(p, n);
    scheduler.runScheduler();
    scheduler.printStatistics();

    return 0;
}
