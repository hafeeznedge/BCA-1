<html>
<body>
	<h1>REAL ESTATE SERVICES</h1>
<?php
// Variable Types
$propertyName = "Dream Homes";   // string
$propertyPrice = 2000000;        // integer
$propertyArea = 1200.5;          // float

echo "<h2>Property Details</h2>";
echo "Name: $propertyName <br>";
echo "Price: Rs.$propertyPrice <br>";
echo "Area: $propertyArea sq.ft. <br><br>";

// Operator
$tax = 100000;
$totalPrice = $propertyPrice + $tax;   // addition
echo "Total Price with Tax: Rs.$totalPrice <br><br>";

// Decision Control (if–else)
if ($propertyArea > 1000) {
    echo "This is a Spacious Property<br><br>";
} else {
    echo "This is a Compact Property<br><br>";
}

// For Loop
echo "<h3>Showing 5 Available Flats:</h3>";
for ($i = 1; $i <= 5; $i++) {
    echo "Flat No: $i is available<br>";
}
?>
</body>
</html>