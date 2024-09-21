#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
    class Car
    {
    public:
        int pos, speed;
        Car(int p, int s) : pos(p), speed(s) {};
    };
    static bool mycomp(Car &a, Car &b)
    {
        return a.pos < b.pos;
    }

public:
    int carFleet(int target, vector<int> &position, vector<int> &speed)
    {
        vector<Car> cars;
        // /sort w r t pos
        for (int i = 0; i < position.size(); i++)
        {
            Car car(position[i], speed[i]);
            cars.push_back(car);
        }
        sort(cars.begin(), cars.end(), mycomp);

        stack<float> st;
        for (auto car : cars)
        {
            float time = (target - car.pos) / ((float)car.speed);
            while (!st.empty() && time >= st.top())
            {
                st.pop();
            }
            st.push(time);
        }
        return st.size();
    }
};
int main()
{

    return 0;
}