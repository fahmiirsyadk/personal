import { useEffect, useRef, useState } from 'react'
import { createPortal } from 'react-dom'

import { useCanvas } from 'common/useCanvas'

const Canvas = () => {
  const docRef = useRef();
  const [mounted, setMounted] = useState(false);

  useEffect(() => {
    docRef.current = document.body;
    setMounted(() => true);
  }, [])

  useCanvas();

  return mounted ? createPortal(<div className="content--canvas"></div>, docRef.current) : (<></>)
}

export default Canvas