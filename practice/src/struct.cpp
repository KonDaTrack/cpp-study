// #include <iostream>
// #include <string>
// #include <vector>

// struct student
// {
//     int id;
//     std::string name;
//     float score;

//     void print() const
//     {
//         std::cout << "id: " << id << std::endl;
//         std::cout << "name: " << name << std::endl;
//         std::cout << "score: " << score << std::endl;
//     }
// };

// void add_student(std::vector<student> &students, int id, std::string name, float score)
// {
//     student s;
//     s.id = id;
//     s.name = name;
//     s.score = score;
//     students.push_back(s);
// }

// void print_students(const std::vector<student> &students)
// {
//     if (students.empty())
//     {
//         std::cout << "No students to display." << std::endl;
//         return;
//     }
    
//     for (const auto &s : students)
//     {
//         s.print();
//     }
// }

// void find_student(const std::vector<student> &students, int id)
// {
//     for (const auto &s : students)
//     {
//         if (s.id == id)
//         {
//             s.print();
//             return;
//         }
//     }
//     std::cout << "Student with id " << id << " not found." << std::endl;
// }

// int main(int argc, char *argv[])
// {
//     std::vector<student> students;

//     add_student(students, 1, "Alice", 90.5);
//     add_student(students, 2, "Bob", 85.0);
//     add_student(students, 3, "Charlie", 92.0);

//     std::cout << "All students:" << std::endl;
//     print_students(students);

//     std::cout << "\nFinding student with id 2:" << std::endl;
//     find_student(students, 2);

//     std::cout << "\nFinding student with id 4:" << std::endl;
//     find_student(students, 4);

//     return 0;
    
// }