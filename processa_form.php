<?php
include 'config/database.php';

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    
    $nome = $conn->real_escape_string($_POST['nome']);
    $email = $conn->real_escape_string($_POST['email']);
    $telefone = $conn->real_escape_string($_POST['telefone']);
    $mensagem = $conn->real_escape_string($_POST['mensagem']);

    if (empty($nome) || empty($email) || empty($mensagem)) {
        header("Location: index.php?error=emptyfields");
        exit();
    }
    
    $sql = "INSERT INTO contatos (nome, email, telefone, mensagem)
            VALUES ('$nome', '$email', '$telefone', '$mensagem')";
            
    if ($conn->query($sql) === TRUE) {
        header("Location: index.php?success=1");
        exit();
    } else {
        header("Location: index.php?error=dberror");
        exit();
    }
    
    $conn->close();
    
} else {
    header("Location: index.php");
    exit();
}
?>

