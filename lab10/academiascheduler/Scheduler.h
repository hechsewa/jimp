//
// Created by hushmans on 17.05.17.
//

#ifndef JIMP_EXERCISES_SCHEDULER_H
#define JIMP_EXERCISES_SCHEDULER_H

#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <memory>
#include <set>
#include <vector>
#include <utility>
#include <map>
#include <ostream>
#include <iostream>

using namespace std;

namespace academia {

    /*****SCHEDULER************/

    class Scheduler {

    };

    /******** SCHEDULE ************/
    class SchedulingItem;

    class Schedule{
    public:
        Schedule OfTeacher(int teacher_id) const;
        Schedule OfRoom(int room_id) const;
        Schedule OfYear(int year) const;
        void InsertScheduleItem(const SchedulingItem &item);
        size_t Size() const;
        std::vector<int> AvailableTimeSlots(int time_slots) const;
        const SchedulingItem &operator[](const int &intg) const;
        bool CheckTime(const int &intg) const;
    private:
        std::vector<SchedulingItem> schedule_;
    };


    /******SCHEDULING ITEM *******/
    class SchedulingItem {
    public:
        SchedulingItem(){};
        SchedulingItem(int course_id_, int teahcer_id_, int room_id_, int time_slot_, int year_);
        ~SchedulingItem(){};

        int CourseId() const;
        int TeacherId() const;
        int RoomId() const;
        int TimeSlot() const;
        int Year() const;

    private:
        int course_id_;
        int teacher_id_;
        int room_id_;
        int time_slot_;
        int year_;
    };

    /*******GREEDY SCHEDULER*********/
    class GreedyScheduler{

    };

    class NoViableSolutionFound : public std::runtime_error{
    public:
        NoViableSolutionFound(const string &__arg);
    };
}


#endif //JIMP_EXERCISES_SCHEDULER_H
