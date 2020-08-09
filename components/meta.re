module Head = Next.Head;
open Util.ReactStuff;

[@react.component]
let make =
    (
      ~siteName="Fahmiirsyadk",
      ~canonical=?,
      ~description="My only thoughts about web and other stuff",
      ~keywords=[|"blog"|],
      ~title=?,
      ~ogLocale="en_US",
      ~ogSiteName=?,
      ~ogDescription=description,
      ~ogTitle=?,
      ~ogImage="",
    ) => {
  let title =
    switch (title) {
    | Some("") => siteName
    | Some(title) => title
    | None => siteName
    };
  let ogSiteName =
    switch (ogSiteName) {
    | Some(ogSiteName) => ogSiteName
    | None => siteName
    };
  let ogTitle =
    switch (ogTitle) {
    | Some(ogTitle) => ogTitle
    | None => title
    };
  <Head> <title key="title"> title->s </title> 
    <meta charSet="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1, minimum-scale=1, maximum-scale=1, minimal-ui" />
    <meta key="description" name="description" content=description />
    <meta key="keywords" name="keywords" content={Js.Array2.joinWith(keywords, ",")} />
{switch (canonical) {
     | Some(href) => <link key="canonical" href rel="canonical" />
     | None => React.null
     }}
    <link
      key="icon"
      rel="icon"
      sizes="16x16 32x32 64x64"
      href="/static/favicon.ico"
    />
    /* OG link preview meta data */
    <meta key="og:site_name" property="og:site_name" content=ogSiteName />
    <meta key="og:locale" property="og:locale" content=ogLocale />
    <meta key="og:title" property="og:title" content=ogTitle />
    <meta
      key="og:description"
      property="og:description"
      content=ogDescription
    />
    <meta key="og:image" property="og:image" content=ogImage />
    /* Twitter Meta */
    <meta key="twitter:title" name="twitter:title" content=title />
    <meta
      key="twitter:description"
      name="twitter:description"
      content=description
    />
    <meta key="twitter:site" name="twitter:site" content="@reasonml" />
    <meta
      key="twitter:creator"
      name="twitter:creator"
      content="@ReasonAssoc"
    />
    <meta property="og:image:type" content="image/jpeg" />
    <meta
      key="twitter:card"
      name="twitter:card"
      content="summary_large_image"
    />
    <meta key="twitter:image" property="twitter:image" content=ogImage />
    <link
      rel="alternate"
      type_="application/rss+xml"
      title="Fahmiirsyadk Blog"
      href="/blog/feed.xml"
    />
  </Head>;
};
