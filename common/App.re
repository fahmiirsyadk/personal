open Css;

type pageProps = {.};

[@bs.module "../components/theme/global.js"]
external globalStyles: 'a = "globalStyles";
module PageComponent = {
  type t = React.component(pageProps);
};

module CacheProvider = {
  [@bs.module "@emotion/core"] [@react.component]
  external make: (~value: 'a, ~children: React.element) => React.element =
    "CacheProvider";
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

  <CacheProvider value=cache>
    globalStyles
    <Provider>
      {switch (Next.Router.useRouter().route) {
       | "/" => <SecondaryLayout> <div> content </div> </SecondaryLayout>
       | _ => <MainLayout> content </MainLayout>
       }}
    </Provider>
  </CacheProvider>;
};
