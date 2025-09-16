<!DOCTYPE html>
<html>
<head>
  <title>Real Estate Database Demo</title>
</head>
<body>
<h2>Real Estate Services</h2>

<?php
$servername = "localhost";
$username   = "root";   
$password   = "Hafeez@3418";  

// Create connection
$conn = new mysqli($servername, $username, $password);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Create Database
$conn->query("CREATE DATABASE IF NOT EXISTS realestate");
$conn->select_db("realestate");

// Create Table
$conn->query("CREATE TABLE IF NOT EXISTS properties(
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100),
    type VARCHAR(50),
    location VARCHAR(100),
    price DECIMAL(12,2)
)");

// Insert Sample Data
$conn->query("INSERT INTO properties (name, type, location, price) VALUES
    ('Green Villa','Villa','Bangalore',8500000),
    ('Sunshine Apartments','Apartment','Hyderabad',4500000),
    ('Elite Office','Commercial','Mumbai',15000000)
");

// Display Data
$result = $conn->query("SELECT * FROM properties");
echo "<table border='1' cellpadding='5'>
<tr><th>ID</th><th>Name</th><th>Type</th><th>Location</th><th>Price</th></tr>";
while($row = $result->fetch_assoc()) {
    echo "<tr>
        <td>".$row["id"]."</td>
        <td>".$row["name"]."</td>
        <td>".$row["type"]."</td>
        <td>".$row["location"]."</td>
        <td>".$row["price"]."</td>
    </tr>";
}
echo "</table>";

$conn->close();
?>
</body>
</html>