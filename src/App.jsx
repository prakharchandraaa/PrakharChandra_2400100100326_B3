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

      <div style={styles.container}>
        {students.map((student) => (
          <StudentCard
            key={student.id}
            name={student.name}
            age={student.age}
            course={student.course}
          />
        ))}
      </div>

      <Footer />
    </div>
  );
}

const styles = {
  container: {
    display: "flex",
    justifyContent: "center",
    flexWrap: "wrap",
    padding: "20px",
    backgroundColor: "#f3f4f6"
  }
};

export default App;