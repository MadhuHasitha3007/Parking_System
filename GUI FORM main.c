<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Parking Management System</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f2f2f2;
        }
        .container {
            width: 400px;
            margin: 50px auto;
            background: white;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 0 10px rgba(0,0,0,0.1);
        }
        h2 {
            text-align: center;
            color: #333;
        }
        label {
            font-weight: bold;
        }
        input, select {
            width: 100%;
            padding: 8px;
            margin: 8px 0 15px;
            border: 1px solid #ccc;
            border-radius: 4px;
        }
        button {
            width: 100%;
            padding: 10px;
            background-color: #4CAF50;
            border: none;
            color: white;
            font-size: 16px;
            border-radius: 4px;
            cursor: pointer;
        }
        button:hover {
            background-color: #45a049;
        }
    </style>
</head>
<body>

<div class="container">
    <h2>Parking System</h2>

    <form>
        <label>Vehicle Number</label>
        <input type="text" placeholder="Enter vehicle number" required>

        <label>Vehicle Type</label>
        <select required>
            <option value="">Select</option>
            <option>Car</option>
            <option>Bike</option>
            <option>Truck</option>
        </select>

        <label>Owner Name</label>
        <input type="text" placeholder="Enter owner name" required>

        <label>Parking Slot</label>
        <input type="number" placeholder="Slot number" required>

        <label>Entry Time</label>
        <input type="time" required>

        <button type="submit">Park Vehicle</button>
    </form>
</div>

</body>
</html>
