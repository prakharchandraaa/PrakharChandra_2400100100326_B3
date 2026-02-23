function StudentCard({ name, age, course }) {
  return (
    <div style={{ border: "1px solid black", padding: "10px", margin: "10px" }}>
      <h3>Name: {name}</h3>
      <p>Age: {age}</p>
      <p>Course: {course}</p>
    </div>
  );
}

export default StudentCard;
