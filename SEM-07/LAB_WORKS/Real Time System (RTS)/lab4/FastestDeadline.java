import java.util.*;

class FastestDeadline{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("enter no. of processes : ");
        int n = sc.nextInt();
        int job[]=new int[n+1];
        int burst[]=new int[n+1];
        // int newburst[]=new int[n+1];
        int arrival[]=new int[n+1];
        int deadline[]=new int[n+1];
        int wt[]=new int[n+1];
        int turn[]=new int[n+1];
        
        int tot_turn=0;
        int tot_wait=0;
        float avg_turn=0;
        float avg_wait=0;
        int j;
        
        for(int m=1;m<=n;m++){
            arrival[m]=m;
        }

        for(int m=1;m<=n;m++){
            job[m]=m;
        }

        for(int m=1;m<=n;m++){
            System.out.println("enter arrival time, burst time and deadline of process "+(m)+"(0 for none):");
            arrival[m]=sc.nextInt();
            burst[m]=sc.nextInt();
            deadline[m]=sc.nextInt();
            
            if (deadline[m]==0){
                deadline[m]=1000;
            }
        }

        int temp;
        
        for(int i=1;i<n;i++){
            for(j=1;j<n;j++){
                if(deadline[i+1]<deadline[j]){
                    temp=deadline[j+1];
                    deadline[j+1]=deadline[j];
                    deadline[j]=temp;
                    temp=job[j+1];
                    job[j+1]=job[j];
                    job[j]=temp;
                    temp=burst[j+1];
                    burst[j+1]=burst[j];
                    burst[j]=temp;
                }
            }
        }

        turn[1]=burst[1];
        
        for(int i=2;i<=n;i++){
            turn[i]=burst[i]+turn[i-1];
            wt[i]=turn[i]-burst[i];
        }

        for(int i=1;i<=n;i++){
            tot_turn+=(wt[i]+burst[i])-arrival[i];
            avg_turn=(float)tot_turn/n;
            tot_wait+=wt[i]-arrival[i];
            avg_wait=(float)tot_wait/n;
        }

        System.out.println("----Earliest Deadline Scheduling Diagram ----");
        
        for(int m=1;m<=n;m++){
            if(deadline[m]==1000){
                deadline[m]=0;
            }
            if(wt[m]==0){
                System.out.println("0"+wt[m]+" _____");
            }else{
                System.out.println(wt[m]+" _____");
            }

            System.out.println(" | |");
            System.out.println(" |job "+job[m]+"|");
            System.out.println(" |_____|");
            try{
                //newburst[m]=(burst[m]*1000);
                Thread.sleep(1000);
            }catch (InterruptedException ie){
                System.out.println(ie.getMessage());
            }
        }

        System.out.println((wt[wt.length-1]+burst[burst.length-1]));
    }
}
