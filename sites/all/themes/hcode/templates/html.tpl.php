<?php if(request_uri() == '/maintenance' && strpos($_SERVER['HTTP_HOST'], 'nikadevs') !== FALSE) { include('maintenance-page.tpl.php'); exit(); } ?>
<!DOCTYPE html>
<html  lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>
<head>
  <?php print $head; ?>

  <title><?php print $head_title; ?></title>
  <!--[if IE]><meta http-equiv='X-UA-Compatible' content='IE=edge,chrome=1'><![endif]-->
  <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0" />

  <?php print $styles; ?>
  
</head>
<body class="appear-animate <?php print $classes; ?>"<?php print $attributes; ?>>

    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $scripts; ?>
    <!--[if lt IE 10]><script type="text/javascript" src="<?php print base_path() . drupal_get_path('theme', 'hcode'); ?>/js/html5shiv.js"></script><![endif]-->
    <?php print $page_bottom; ?>

</body>
</html>