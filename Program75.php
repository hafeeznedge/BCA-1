<html>
<head>
  <title>Update Real Estate Data</title>
</head>
<body>
<h2>Update Property Price</h2>

<form method="post">
  Enter Property ID: <input type="number" name="id" required><br><br>
  New Price: <input type="number" name="price" required><br><br>
  <input type="submit" value="Update">
</form>
<hr>

<?php
$servername = "localhost";
$username   = "root";   // change if needed
$password   = "Hafeez@3418";       // change if password set
$dbname     = "realestate";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Update when form submitted
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $id    = $_POST['id'];
    $price = $_POST['price'];

    $sql = "UPDATE properties SET price=$price WHERE id=$id";
    if ($conn->query($sql) === TRUE) {
        echo "✅ Property updated successfully!<br><br>";
    } else {
        echo "❌ Error updating record: " . $conn->error;
    }
}

// Display all records
$result = $conn->query("SELECT * FROM properties");
if ($result->num_rows > 0) {
    echo "<h3>Property Listings:</h3>";
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
} else {
    echo "No properties found.";
}

$conn->close();
?>
</body>
</html>