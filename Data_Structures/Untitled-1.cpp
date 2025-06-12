#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Structure to represent an activity with start and end times
struct Activity {
    int start; // Start time of the activity
    int end;   // End time of the activity
};

// Comparator function to sort activities by their end times
// Returns true if the end time of the first activity is less than the second
bool compare(Activity a, Activity b) {
    return a.end < b.end;
}

// Function to select the maximum number of non-overlapping activities
void selectActivities(vector<Activity> &activities) {
    // Display all the activities with their start and end times
    cout << "All activities (Start, End) are:" << endl;
    for (const auto &activity : activities) {
        cout << "(" << activity.start << ", " << activity.end << ")" << endl;
    }

    // Total number of activities
    cout << "Total number of activities: " << activities.size() << endl;

    // Sort the activities based on their ending times
    sort(activities.begin(), activities.end(), compare);

    // Display the result
    cout << "\nSelected activities are:" << endl;
    
    // The first activity is always selected
    int lastEndTime = activities[0].end; // Track the end time of the last selected activity
    cout << "(" << activities[0].start << ", " << activities[0].end << ")" << endl;

    // Iterate through the remaining activities
    for (size_t i = 1; i < activities.size(); i++) {
        // Select the activity if it does not overlap with the last selected activity
        if (activities[i].start >= lastEndTime) {
            cout << "(" << activities[i].start << ", " << activities[i].end << ")" << endl;
            lastEndTime = activities[i].end; // Update the end time of the last selected activity
        }
    }
}

int main() {
    // Define a list of activities with their start and end times
    vector<Activity> activities = {
        {1, 3}, {2, 5}, {4, 6}, {6, 8}, {5, 7}, {8, 9}
    };

    // Solve the activity selection problem
    selectActivities(activities);

    return 0;
}
