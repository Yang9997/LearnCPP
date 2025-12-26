#include<iostream>
using namespace std;
class HTask{
public:
    int task_id;
    int cpu_segment;
    int gpu_segment;

    HTask(int id,int cpu, int gpu)
        :task_id(id),cpu_segment(cpu),gpu_segment(gpu){}
};