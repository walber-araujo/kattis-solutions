#include "bits/stdc++.h"
typedef long long ll;
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int qtCourses, categories, course, min;
    while(1) {
        cin >> qtCourses;
        if (qtCourses == 0) break;
        unordered_set<int> courses;
        cin >> categories;
        while(qtCourses--) {
            cin >> course;
            courses.insert(course);
        }

        int isValid = 1;
        while(categories--) {
            cin >> qtCourses >> min;
            while(qtCourses--) {
                cin >> course;
                if (courses.find(course) != courses.end()) min--;
            }
            if (min > 0) isValid = 0;
        }

        if(isValid) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}