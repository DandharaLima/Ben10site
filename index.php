<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formulário de Contato</title>
    <link rel="stylesheet" href="css/style.css">
</head>
<body>
    <div class="container">
        <h1>Formulário de Contato</h1>

        <?php if (isset($_GET['success'])): ?>
        <div class="alert success">
            Mensagem enviada com sucesso!
        </div>
        <?php endif; ?>

        <?php if (isset($_GET['error'])): ?>
        <div class="alert error">
            Erro ao enviar mensagem. Tente novamente.
        </div>
        <?php endif; ?>

        <form action="processa_form.php" method="POST" class="contact-form">
            <div class="form-group">
                <label for="nome">Nome:</label>
                <input type="text" id="nome" name="nome" required>
            </div>
            <div class="form-group">
                <label for="email">E-mail:</label>
                <input type="email" id="email" name="email" required>
            </div>
            <div class="form-group">
                <label for="telefone">Telefone: </label>
                <input type="tel" id="telefone" name="telefone">
            </div>
            <div class="form-group">
                <label for="mensagem">Mensagem: </label>
                <textarea id="mensagem" name="mensagem" rows="5" required></textarea>
            </div>
            <button type="submit" class="btn">Enviar Mensagem</button>
        </form>

        <div class="contacts-list">
            <h2>Contatos Registrados</h2>
            <?php include 'lista_contatos.php'; ?>
        </div>
    </div>
    <script src="js/script.js"></script>
</body>
</html>