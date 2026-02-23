function Footer() {
  return (
    <footer style={styles.footer}>
      <p style={styles.text}>
        © {new Date().getFullYear()} United College of Engineering and Research
      </p>
      <p style={styles.text}>
        Prayagraj, Uttar Pradesh, India
      </p>
      <p style={styles.text}>
        All Rights Reserved
      </p>
    </footer>
  );
}

const styles = {
  footer: {
    backgroundColor: "#111827",
    color: "white",
    padding: "15px",
    textAlign: "center",
    marginTop: "20px",
  },
  text: {
    margin: "5px 0",
    fontSize: "14px",
  },
};

export default Footer;