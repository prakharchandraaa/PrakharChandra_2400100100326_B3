import "./StudentCard.css";

function StudentCard({ name, age, course }) {
  return (
    <div className="card">
      <img
        src={`https://ui-avatars.com/api/?name=${name}&background=1e3a8a&color=fff&size=200`}
        alt={name}
        className="card-image"
      />

      <div className="card-content">
        <h2>{name}</h2>
        <p><strong>Age:</strong> {age}</p>
        <p><strong>Course:</strong> {course}</p>
      </div>
    </div>
  );
}

export default StudentCard;