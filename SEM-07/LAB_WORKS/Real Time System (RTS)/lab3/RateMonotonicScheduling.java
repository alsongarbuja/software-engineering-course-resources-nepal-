import java.util.Collections;
import java.util.List;

class Task {
    int id;
    int executionTime;
    int priority;
    int period;

    Task(int id, int executionTime, int period) {
        this.id = id;
        this.executionTime = executionTime;
        this.period = period;
    }
}

class RateMonotonicScheduler {
    List<Task> tasks;

    RateMonotonicScheduler(List<Task> tasks) {
        this.tasks = tasks;
    }

    boolean checkRMA() {
        double u = 0, n;

        n = Math.pow(2, 1/tasks.size()) - 1;

        for (int i = 0; i < tasks.size(); i++) {
            u += tasks.get(i).executionTime / tasks.get(i).period;
        }

        if(u > n) {
            return false;
        }

        return true;
    }

    void prioraties() {
        Collections.sort(tasks, (t1, t2) -> t1.period - t2.period);
    }

    void schedule() {
        
    }
}

class RateMonotonicScheduling {
    public static void main(String[] args) {
        
    }
}