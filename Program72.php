<!DOCTYPE html>
<html>
<head>
    <title>Real Estate Services</title>
</head>
<body>

<h2>Add Property</h2>
<form method="post">
    Title: <input name="title"><br>
    Location: <input name="location"><br>
    Price: <input name="price"><br>
    <button type="submit">Add</button>
</form>

<h2>Submitted Property</h2>
<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    echo "Title: " . $_POST["title"] . "<br>";
    echo "Location: " . $_POST["location"] . "<br>";
    echo "Price: $" . $_POST["price"];
}
?>

</body>
</html>