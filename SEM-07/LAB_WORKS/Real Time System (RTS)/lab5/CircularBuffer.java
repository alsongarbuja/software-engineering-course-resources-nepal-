import java.util.ArrayList;

class CircularQueue {
    int number;

    CircularQueue(int number) {
        this.number = number;
    }
}

class Buffer {
    ArrayList<CircularQueue> queues = new ArrayList<CircularQueue>();
    int tail = 0;
    int head = 0;
    int currentIndex = 0;
    int size = 0;

    Buffer(int size) {
        this.size = size;
    }

    void add(int n) {
        if(currentIndex == size) {
            System.out.println("Buffer is Full. Cannot add item: " + n);
            return;
        }

        queues.add(head, new CircularQueue(n));
        System.out.println("Added item " + n + " at " + head + " index in the buffer");

        head = (head + 1) % size;
        currentIndex++;
    }

    void remove() {
        if(currentIndex == 0) {
            System.out.println("Buffer is empty");
            return;
        }

        System.out.println("Removed item " + queues.get(tail).number + " from " + tail + " index in the buffer");
        queues.remove(tail);

        tail = (tail + 1) % size;
        currentIndex--;
    }

    void printList() {
        System.out.println();
        for (int i = 0; i < queues.size(); i++) {
            System.out.println("Item in index " + i + " : " + queues.get(i).number);
        }
    }
}

public class CircularBuffer {
    public static void main(String[] args) {
        Buffer buffer = new Buffer(3);

        buffer.remove();
        buffer.add(90);
        buffer.add(30);
        buffer.add(50);
        buffer.add(60);
        buffer.remove();
        buffer.add(100);

        buffer.printList();
    }    
}
