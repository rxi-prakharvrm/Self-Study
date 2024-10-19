# PHP and the Web

___

## Different ways to get information from user

1. Forms
2. URL / Links
3. Cookies
4. Sessions

### Superglobal Variables

In PHP, there are predefined variables known as "superglobal variables" that are accessible from any part of the script, regardless of the scope. These variables are called "superglobals" because they are automatically available in every function, class, and code block without needing to use the `global` keyword or any other special declaration.

The most commonly used superglobal variables in PHP are:

1. **`$_GET`:** Contains an array of variables passed to the current script via the URL parameters (HTTP GET method).

2. **`$_POST`:** Contains an array of variables submitted to the current script via an HTML form (HTTP POST method).

3. **`$_REQUEST`:** Contains the combined data of `$_GET`, `$_POST`, and `$_COOKIE`.

4. **`$_SESSION`:** Represents session variables that are saved and accessible across different requests for the same user.

5. **`$_COOKIE`:** Contains an array of variables stored in the user's browser as cookies.

6. **`$_SERVER`:** Provides server-specific information such as headers, paths, and script locations.

7. **`$_FILES`:** Contains an array of information about uploaded files.

8. **`$_ENV`:** Represents environment variables.

For example, if you want to access a value passed via a GET parameter in the URL, you can do so using the `$_GET` superglobal:

```php
// Assuming the URL is http://example.com/?name=John
$name = $_GET['name']; // $name will now contain the value 'John'
```

### ```$_GET``` superglobal variables

Contains an array of variables passed to the current script via the URL parameters (HTTP GET method).

```get.php```

```php
<?php

print_r($_GET);

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Get superglobal variable</title>
</head>
<body>
    <?php
    $id = 100;
    $button = "Click here";
    ?>
    <a href="get.php?id=<?php echo $id; ?>"><?php echo $button; ?></a>
</body>
</html>
```

### ```$_POST``` superglobal variables

Contains an array of variables submitted to the current script via an HTML form (HTTP POST method).

```post.php```

```php
<?php

if(isset($_POST['submit'])) {
    echo $_POST['name'];
}

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Post superglobal variable</title>
</head>
<body>
    <form action="post.php" method="post">
        <input type="text" name="name">
        <input type="submit" value="Submit" name="submit">
    </form>
</body>
</html>
```

## Cookies

A cookie, in the context of web browsers, is a small piece of data that a website can store on a user's computer or device. When a user visits a website, the web server can send a cookie to the user's browser, and the browser will store it locally. The browser then sends the cookie back to the web server every time the user revisits the website, allowing the server to recognize and remember the user.

Cookies serve various purposes and are widely used for different tasks, including:

1. **Session Management:** Cookies are commonly used to manage user sessions on websites. When a user logs in, a session cookie is created, allowing the website to remember the user's login state as they navigate through different pages.

2. **Personalization:** Cookies can be used to remember user preferences and settings, such as language preferences, layout preferences, or theme choices.

3. **Tracking and Analytics:** Websites often use cookies to track user behavior, such as page views, clicks, and interactions. This data is then used for analytics to improve the website's performance and user experience.

4. **Shopping Carts:** E-commerce websites use cookies to keep track of the items in a user's shopping cart, even if they navigate to different pages or close and reopen the browser.

5. **Targeted Advertising:** Cookies are sometimes used by advertisers to track users' interests and display personalized ads based on their browsing history.

It's important to note that cookies have limitations and concerns regarding user privacy. Since cookies are stored on a user's device and sent back to the server with every request, some users might be concerned about their online privacy. As a result, many web browsers allow users to manage and control cookie settings, including blocking or deleting cookies.

Additionally, in recent years, there has been an increased emphasis on privacy and security, leading to the development of technologies like HTTP-only cookies, secure cookies, and SameSite cookies, which aim to enhance cookie security and protect user data.

Overall, cookies play a significant role in modern web browsing, enabling personalized experiences and helping websites remember user interactions and preferences. However, it is essential to use cookies responsibly and ensure user privacy is respected.

```cookies.php```

```php
<?php

$name = "some_name";
$value = 100;
$expiration = time() + (60*60*24*7);

// Setting the cookies
setcookie($name, $value, $expiration);

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cookies</title>
</head>
<body>
    
</body>
</html>
```

<u>__Note:__</u> ```time()``` function is used to get the total time (in seconds) since 1970. It gives us the current time.

### Reading from cookies

```cookies.php```

```php
<?php

$name = "some_name";
$value = 100;
$expiration = time() + (60*60*24*7);
setcookie($name, $value, $expiration);

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cookies</title>
</head>
<body>
    <?php
    if(isset($_COOKIE['some_name'])) {
        $name = $_COOKIE['some_name'];
        echo $name;
    } else {
        $name = "";
    }
    ?>
</body>
</html>
```

### Session

A session, in the context of web browsing, refers to a period of interaction between a user and a website. During a session, the web server maintains temporary information about the user, allowing the website to remember the user's actions and preferences as they navigate through different pages. Sessions are typically used to manage user logins, shopping carts, and personalized experiences on the website. Once the user closes their web browser or remains inactive for a specified period, the session is ended, and the temporary data is cleared.

```session1.php```

```php
<?php session_start();

$_SESSION['greeting'] = "Hello Students";

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Session</title>
</head>
<body>
    
</body>
</html>
```

```session2.php```

```php
<?php session_start();

echo $_SESSION['greeting'];

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Session</title>
</head>
<body>
    
</body>
</html>
```
