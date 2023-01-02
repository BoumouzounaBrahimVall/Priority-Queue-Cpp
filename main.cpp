#include <iostream>
#include "Priority_Queue.cpp"
using namespace std::chrono;

/*
    output :

    Time taken by our Priority queue: 5470159 microseconds
    Time taken by STL priority queue: 3027628 microseconds
    Time taken by vector for the same task: 2268696 microseconds
 */
int main()
{
    // my Priority Queue
    Priority_Queue<int> q;
    auto start = high_resolution_clock::now(); // start the clock
    for(int i=1;i<10000000;i++){
        q.push(i,i);
    }
    auto stop = high_resolution_clock::now(); // end the clock
    //cout<<q;
    auto duration = duration_cast<microseconds>(stop - start); //calculate the duration of execution
    cout << "Time taken by our Priority queue: "
         << duration.count() << " microseconds" << endl;

    // STL priority queue
    priority_queue<int> q2;
    auto start1 = high_resolution_clock::now();

    for(int i=1;i<10000000;i++){
        q2.push(i);
    }
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop1 - start1);
    cout << "Time taken by STL priority queue: "
         << duration1.count() << " microseconds" << endl;


    // STL vector
    vector<int > v;
    auto start2 = high_resolution_clock::now();
    for(int i=1;i<10000000;i++){

        v.push_back(::rand()%i); // push a random value
    }
    std::sort(v.begin(), v.end()); // sort the vector to act like a priority queue
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(stop2 - start2);
    cout << "Time taken by vector for the same task: "
         << duration2.count() << " microseconds" << endl;




    return 0;
}