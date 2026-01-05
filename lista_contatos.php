<?php
include 'config/database.php';

$sql = "SELECT nome, email, telefone, mensagem, data_registro
FROM contatos
ORDER BY data_registro DESC
LIMIT 10";

$result = $conn->query($sql);

if ($result->num_rows > 0) {
    echo "<ul class='contacts'>";
    
    while($row = $result->fetch_assoc()) {
        echo "<li class='contact-item'>";
        
        echo "<strong>" . htmlspecialchars($row['nome']). "</strong><br>";
        
        echo "Email: " . htmlspecialchars($row['email']) . "<br>";
        
        echo "Telefone: " . htmlspecialchars($row['telefone']) . "<br>";
        
        echo "Mensagem: " . htmlspecialchars($row['mensagem']). "<br>";
        
        echo "<small>Data: " . $row['data_registro'] . "</small>";
        
        echo "</li>";
    }
    echo "</ul>";
} else {
    echo "<p>Nenhum contato registrado ainda.</p>";
}

$conn->close();
?>