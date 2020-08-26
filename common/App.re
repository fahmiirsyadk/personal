open Css;
open Lib;
type pageProps = {.};

[@bs.module "../components/theme/global.js"]
external globalStyles: 'a = "globalStyles";
module PageComponent = {
  type t = React.component(pageProps);
};

type props = {
  [@bs.as "Component"]
  component: PageComponent.t,
  pageProps,
};

{
  global(
    "*, *:before, *:after",
    [
      boxSizing(borderBox),
      fontFamily(
        `custom(
          "Inter, -apple-system, BlinkMacSystemFont, Roboto, Ubuntu, sans-serif",
        ),
      ),
    ],
  );
};

let make = (props: props): React.element => {
  let {component, pageProps} = props;

  let content = React.createElement(component, pageProps);

  <>
    <GoogleFonts
      href="https://fonts.googleapis.com/css2?family=Inter:wght@400;500;700&display=swap"
    />
    <CacheProvider value=cache>
      globalStyles
      <Provider>
        {switch (Next.Router.useRouter().route) {
         | "/" =>
           <SecondaryLayout> <Meta /> <div> content </div> </SecondaryLayout>
         | _ => <MainLayout> <Meta /> content </MainLayout>
         }}
      </Provider>
    </CacheProvider>
  </>;
};
