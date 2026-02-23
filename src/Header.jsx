function Header() {
  return (
    <header style={styles.header}>
      <h1 style={styles.title}>
        United College of Engineering and Research
      </h1>
      <p style={styles.subtitle}>
        Excellence in Technical Education
      </p>
    </header>
  );
}

const styles = {
  header: {
    backgroundColor: "#1e3a8a",
    color: "white",
    padding: "20px",
    textAlign: "center",
  },
  title: {
    margin: 0,
    fontSize: "28px",
  },
  subtitle: {
    margin: "5px 0 0 0",
    fontSize: "16px",
  },
};

export default Header;