import Header from "./Header";
import StudentCard from "./StudentCard";
import Footer from "./Footer";
import "./App.css";

function App() {
  const students = [
    { id: 1, name: "Prakhar", age: 21, course: "React" },
    { id: 2, name: "Rahul", age: 23, course: "Java" }
  ];

  return (
    <div className="app">
      <Header />

      <section className="hero">
        <div className="hero-content">
          <h1>Future Engineers of Excellence</h1>
          <p>United College of Engineering and Research</p>
        </div>
      </section>

      <section className="students-section">
        {students.map((student) => (
          <StudentCard
            key={student.id}
            name={student.name}
            age={student.age}
            course={student.course}
          />
        ))}
      </section>

      <Footer />
    </div>
  );
}

export default App;