import Header from "./Header";
import StudentCard from "./StudentCard";
import Footer from "./Footer";

function App() {
  const students = [
    { id: 1, name: "Prakhar", age: 21, course: "React" },
    { id: 2, name: "Rahul", age: 23, course: "Java" }
  ];

  return (
    <div>
      <Header />

      {students.map(student => (
        <StudentCard
          key={student.id}
          name={student.name}
          age={student.age}
          course={student.course}
        />
      ))}

      <Footer />
    </div>
  );
}

export default App;